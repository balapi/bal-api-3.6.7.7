/*
<:copyright-BRCM:2019-2020:Apache:standard

 Copyright (c) 2019-2020 Broadcom. All Rights Reserved

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

:>
 */
#include <stdio.h>
#include <string.h>

#include <bcmolt_host_api.h>

/* Initialize API layer */
bcmos_errno bcmolt_api_init(void)
{
    printf("-- entering :stubbed %s\n", __FUNCTION__);
    return BCM_ERR_OK;
}

/* Set configuration */
bcmos_errno bcmolt_cfg_set(bcmolt_oltid olt, bcmolt_cfg *cfg)
{
    printf("-- entering :stubbed %s\n", __FUNCTION__);
    return BCM_ERR_OK;   
}

/* Get configuration */
bcmos_errno bcmolt_cfg_get(bcmolt_oltid olt, bcmolt_cfg *cfg)
{
    printf("-- entering :stubbed %s\n", __FUNCTION__);
    return BCM_ERR_OK;   
}

/* Clear configuration */
bcmos_errno bcmolt_cfg_clear(bcmolt_oltid olt, bcmolt_cfg *cfg)
{
    printf("-- entering :stubbed %s\n", __FUNCTION__);
    return BCM_ERR_OK;   
}

/* Get statistics */
bcmos_errno bcmolt_stat_get(bcmolt_oltid olt, bcmolt_stat *stat, bcmolt_stat_flags flags)
{
    printf("-- entering :stubbed %s\n", __FUNCTION__);
    return BCM_ERR_OK;   
}

/* Get statistics configuration */
bcmos_errno bcmolt_stat_cfg_get(bcmolt_oltid olt, bcmolt_stat_cfg *cfg)
{
    printf("-- entering :stubbed %s\n", __FUNCTION__);
    return BCM_ERR_OK;   
}

/* Set statistics configuration */
bcmos_errno bcmolt_stat_cfg_set(bcmolt_oltid olt, bcmolt_stat_cfg *cfg)
{
    printf("-- entering :stubbed %s\n", __FUNCTION__);
    return BCM_ERR_OK;   
}

/* Register Autonomous Indication Message Handler */
bcmos_errno bcmolt_ind_subscribe(bcmolt_oltid olt, bcmolt_rx_cfg *rx_cfg)
{
    printf("-- entering :stubbed %s\n", __FUNCTION__);
    return BCM_ERR_OK;
}

/* Un-register Autonomous Indication Message Handler registered by bcmolt_ind_subscribe() */
bcmos_errno bcmolt_ind_unsubscribe(bcmolt_oltid olt, bcmolt_rx_cfg *rx_cfg)
{
    printf("-- entering :stubbed %s\n", __FUNCTION__);
    return BCM_ERR_OK;
}

/* Submit Operation */
bcmos_errno bcmolt_oper_submit(bcmolt_oltid olt, bcmolt_oper *oper)
{
    printf("-- entering :stubbed %s\n", __FUNCTION__);
    return BCM_ERR_OK;
}

/* Get configuration of multiple objects */
bcmos_errno bcmolt_multi_cfg_get(
    bcmolt_oltid olt,
    bcmolt_multi_cfg *cfg,
    bcmolt_filter_flags filter_flags)
{
    printf("-- entering :stubbed %s\n", __FUNCTION__);
    return BCM_ERR_OK;
}

/* Get statistics of multiple objects */
bcmos_errno bcmolt_multi_stat_get(
    bcmolt_oltid olt,
    bcmolt_multi_stat *stat,
    bcmolt_stat_flags stat_flags,
    bcmolt_filter_flags filter_flags)
{
    printf("-- entering :stubbed %s\n", __FUNCTION__);
    return BCM_ERR_OK;
}

bcmos_errno bcmolt_host_init(const bcmolt_host_init_parms *init_parms)
{
    return BCM_ERR_OK;
}

