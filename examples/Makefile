#  <:copyright-BRCM:2018-2020:Apache:standard
#  
#   Copyright (c) 2018-2020 Broadcom. All Rights Reserved
#  
#   The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries
#  
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#  
#       http://www.apache.org/licenses/LICENSE-2.0
#  
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.
#  
#  :>
#
#############################################################################/

all: clean bcm_stubs hello_bal hello_bal_app

# This assumes a x86 host CPU
export BAL_EXTRA_CFLAGS = -lpthread -lrt -g -DBCMOS_MSG_QUEUE_DOMAIN_SOCKET -DSIMULATION_BUILD -pthread

BAL_STUB_LIB_DIR = -L../stubs
BAL_STUB_LIB_ROOT = bcm_host_api_stubs
BAL_STUB_LIB = -l$(BAL_STUB_LIB_ROOT)

PHONY: bcm_stubs
bcm_stubs: ../stubs/bcm_stubs.a

../stubs/bcm_stubs.a:
	make -C ../stubs bcm_host_api_stubs

bcmolt_api_stubs_clean:
	make -C ../stubs clean

#Build hello_bal with host API stub functions for simulated host API calls
hello_bal: hello_bal.c bcm_stubs 
	gcc -DBAL_API_STUB $(BAL_EXTRA_CFLAGS) -DBCMOLT_API_STUB hello_bal.c $(BAL_STUB_LIB_DIR) $(BAL_STUB_LIB) -I ../include -I ../include/object_model -o hello_bal


# NOTE: This assumes that libbal_host_api.so lives in the directory above the example directory.
#  You should modify this variable as needed.  Alternatively, you can set BAL_SO_LIB_DIR to point
#  where ever you like
BAL_SO_LIB_DIR ?= -L../
BAL_SO_LIB_ROOT = bal_host_api
BAL_SO_LIB = -l$(BAL_SO_LIB_ROOT)

# Build hello_bal with actual host API functions for real host API calls (no stubs required)
#
# NOTE: This needs the host api shared library obtained from building the host source code,
#  which is available through a Broadcom SLA.
hello_bal_app: hello_bal.c ../$(BAL_SO_LIB_NAME)
	gcc $(BAL_EXTRA_CFLAGS) hello_bal.c -I ../include -I ../include/object_model $(BAL_SO_LIB_DIR) $(BAL_SO_LIB) -o hello_bal_app

clean: bcmolt_api_stubs_clean
	rm -rf hello_bal
	rm -rf hello_bal_app
