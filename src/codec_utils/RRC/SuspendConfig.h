/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SuspendConfig_H_
#define	_SuspendConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "I-RNTI-Value.h"
#include "ShortI-RNTI-Value.h"
#include "PagingCycle.h"
#include "PeriodicRNAU-TimerValue.h"
#include "NextHopChainingCount.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RAN_NotificationAreaInfo;

/* SuspendConfig */
typedef struct SuspendConfig {
	I_RNTI_Value_t	 fullI_RNTI;
	ShortI_RNTI_Value_t	 shortI_RNTI;
	PagingCycle_t	 ran_PagingCycle;
	struct RAN_NotificationAreaInfo	*ran_NotificationAreaInfo;	/* OPTIONAL */
	PeriodicRNAU_TimerValue_t	*t380;	/* OPTIONAL */
	NextHopChainingCount_t	 nextHopChainingCount;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SuspendConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SuspendConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_SuspendConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_SuspendConfig_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _SuspendConfig_H_ */
#include <asn_internal.h>
