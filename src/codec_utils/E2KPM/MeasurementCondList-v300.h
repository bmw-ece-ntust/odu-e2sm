/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300-modified.asn1"
 * 	`asn1c -pdu=auto -fcompound-names -fno-include-deps -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_MeasurementCondList_v300_H_
#define	_MeasurementCondList_v300_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasurementCondItem_v300;

/* MeasurementCondList-v300 */
typedef struct MeasurementCondList_v300 {
	A_SEQUENCE_OF(struct MeasurementCondItem_v300) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementCondList_v300_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementCondList_v300;
extern asn_SET_OF_specifics_t asn_SPC_MeasurementCondList_v300_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementCondList_v300_1[1];
extern asn_per_constraints_t asn_PER_type_MeasurementCondList_v300_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementCondList_v300_H_ */
#include <asn_internal.h>
