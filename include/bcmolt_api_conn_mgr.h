/*
<:copyright-BRCM:2016-2019:Apache:standard

 Copyright (c) 2016-2019 Broadcom. All Rights Reserved

 The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 *  :>
 */

/*
 * Application side connection manager.
 * This module monitors application connection with Device Managhement Daemon(s)
 */

#ifndef BCMOLT_API_CONN_MGR_
#define BCMOLT_API_CONN_MGR_

#include <bcmos_system.h>
#include <bcmolt_msg.h>
#include <bcmtr_interface.h>
#include <bcmolt_api_topology.h>

/** Connection manager flags */
typedef enum
{
    BCMOLT_API_CONN_MGR_FLAGS_NONE          = 0,
    BCMOLT_API_CONN_MGR_FLAGS_DISABLE_KA    = 0x1,   /**< Disable keep alive (for debugging) */
} bcmolt_api_conn_mgr_flags;

bcmos_errno bcmolt_api_conn_mgr_start(bcmolt_goid olt, bcmolt_loid loid,
    const bcmtr_conn_parms *tr_conn_parms, bcmolt_api_conn_mgr_flags flags);

bcmos_bool bcmolt_api_conn_mgr_is_connected(bcmolt_goid olt);

void bcmolt_api_conn_mgr_stop(bcmolt_goid olt);

void bcmolt_api_conn_mgr_stop_all(void);

#endif /* BCMOLT_API_CONN_MGR_H_ */
