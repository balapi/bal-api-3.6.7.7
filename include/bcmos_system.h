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
 *
 *****************************************************************************/

/**
 * @file bcmos_system.h
 * @brief The file provides a FAKE stub for bcmos_system.h
 *
 */
#ifndef BCMOS_SYSTEM_H_
#define BCMOS_SYSTEM_H_

#include <pthread.h>
#include <semaphore.h>
#include <inttypes.h>
#include <assert.h>

void _bcmos_backtrace(void);

#define BUG_ON_PRINT(condition, fmt, args...) \
    do \
    { \
        if (condition) \
        { \
            BCMOS_TRACE_ERR(fmt, ##args); \
            assert(!(condition)); \
        } \
    } while (0)

#define BUG_ON(condition)     BUG_ON_PRINT((condition), "BUG in %s %d!\n", __FUNCTION__, __LINE__)

#include <bcmos_common.h>

#ifdef __cplusplus
typedef bool bcmos_bool;
#define BCMOS_FALSE false
#define BCMOS_TRUE true
#else
typedef _Bool bcmos_bool;
#define BCMOS_FALSE 0
#define BCMOS_TRUE 1
#endif

#include "bcmos_queue.h"

typedef uint16_t bcmos_msg_instance;

#include "bcmos_types.h"
#include "bcmos_endian.h"

#endif /* BCMOS_SYSTEM_H_ */
