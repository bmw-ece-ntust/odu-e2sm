/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
<<<<<<< HEAD
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300-modified.asn1"
=======
<<<<<<< Updated upstream
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300.asn1"
=======
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300-modified.asn1"
>>>>>>> Stashed changes
>>>>>>> 65785e7fdb2a1f778048b4a2e22e3222113b14be
 * 	`asn1c -pdu=auto -fcompound-names -fno-include-deps -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_MatchingCondItem_H_
#define	_MatchingCondItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MatchingCondItem_PR {
	MatchingCondItem_PR_NOTHING,	/* No components present */
	MatchingCondItem_PR_measLabel,
	MatchingCondItem_PR_testCondInfo
	/* Extensions may appear below */
	
} MatchingCondItem_PR;

/* Forward declarations */
struct MeasurementLabel;
struct TestCondInfo;

/* MatchingCondItem */
typedef struct MatchingCondItem {
	MatchingCondItem_PR present;
	union MatchingCondItem_u {
		struct MeasurementLabel	*measLabel;
		struct TestCondInfo	*testCondInfo;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MatchingCondItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MatchingCondItem;
extern asn_CHOICE_specifics_t asn_SPC_MatchingCondItem_specs_1;
extern asn_TYPE_member_t asn_MBR_MatchingCondItem_1[2];
extern asn_per_constraints_t asn_PER_type_MatchingCondItem_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MatchingCondItem_H_ */
#include <asn_internal.h>
