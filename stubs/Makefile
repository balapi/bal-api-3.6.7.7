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

# The default target is the a clean build of the stubs
all: clean libbcm_host_api_stubs.a

PHONY: bcm_host_api_stubs
bcm_host_api_stubs: libbcm_host_api_stubs.a

libbcm_host_api_stubs.a: bcmolt_api_stubs.o bcm_system_stubs.o  
	ar rcs libbcm_host_api_stubs.a bcmolt_api_stubs.o bcm_system_stubs.o
	ranlib libbcm_host_api_stubs.a

bcmolt_api_stubs.o: bcmolt_api_stubs.c
	gcc -DBAL_API_STUB $(BAL_EXTRA_CFLAGS) -c bcmolt_api_stubs.c -I ../include/ -I ../include/object_model -o bcmolt_api_stubs.o

bcm_system_stubs.o: bcm_system_stubs.c
	gcc -DBAL_API_STUB $(BAL_EXTRA_CFLAGS) -c bcm_system_stubs.c -I ../include/ -I ../include/object_model -o bcm_system_stubs.o

clean:
	rm -rf *.o *.a
