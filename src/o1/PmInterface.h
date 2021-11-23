/*******************************************************************************
################################################################################
#   Copyright (c) [2020-2021] [HCL Technologies Ltd.]                          #
#                                                                              #
#   Licensed under the Apache License, Version 2.0 (the "License");            #
#   you may not use this file except in compliance with the License.           #
#   You may obtain a copy of the License at                                    #
#                                                                              #
#       http://www.apache.org/licenses/LICENSE-2.0                             #
#                                                                              #
#   Unless required by applicable law or agreed to in writing, software        #
#   distributed under the License is distributed on an "AS IS" BASIS,          #
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   #
#   See the License for the specific language governing permissions and        #
#   limitations under the License.                                             #
################################################################################
*******************************************************************************/

/* This file contains the C interface for ODU to access the Performance 
   Management functions */

#ifndef __PM_INTERFACE_H__
#define __PM_INTERFACE_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif


typedef struct {
   uint32_t networkSliceIdentifier;
   double DRB_UEThpDl_SNSSAI;
   double DRB_UEThpUl_SNSSAI;
}SliceMetricRecord;

typedef struct {
   SliceMetricRecord *sliceRecord;
   uint8_t nRecords;
}SliceMetricList;


int sendSliceMetric(SliceMetricList* sliceMetricList);


#ifdef __cplusplus
}
#endif

#endif

/**********************************************************************
         End of file
**********************************************************************/
