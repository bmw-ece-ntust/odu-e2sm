/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300-modified.asn1"
 * 	`asn1c -pdu=auto -fcompound-names -fno-include-deps -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_E2SM_KPM_ActionDefinition_Format3_H_
#define	_E2SM_KPM_ActionDefinition_Format3_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementCondList.h"
#include "GranularityPeriod.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CGI;

/* E2SM-KPM-ActionDefinition-Format3 */
typedef struct E2SM_KPM_ActionDefinition_Format3 {
	MeasurementCondList_t	 measCondList;
	GranularityPeriod_t	 granulPeriod;
	struct CGI	*cellGlobalID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_KPM_ActionDefinition_Format3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_ActionDefinition_Format3;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_ActionDefinition_Format3_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_KPM_ActionDefinition_Format3_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_KPM_ActionDefinition_Format3_H_ */
#include <asn_internal.h>
