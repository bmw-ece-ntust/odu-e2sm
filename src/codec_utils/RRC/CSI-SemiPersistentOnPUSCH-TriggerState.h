/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_CSI_SemiPersistentOnPUSCH_TriggerState_H_
#define	_CSI_SemiPersistentOnPUSCH_TriggerState_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSI-ReportConfigId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CSI-SemiPersistentOnPUSCH-TriggerState */
typedef struct CSI_SemiPersistentOnPUSCH_TriggerState {
	CSI_ReportConfigId_t	 associatedReportConfigInfo;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_SemiPersistentOnPUSCH_TriggerState_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_SemiPersistentOnPUSCH_TriggerState;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_SemiPersistentOnPUSCH_TriggerState_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_SemiPersistentOnPUSCH_TriggerState_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_SemiPersistentOnPUSCH_TriggerState_H_ */
#include <asn_internal.h>
