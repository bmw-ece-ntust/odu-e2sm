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

#ifndef	_E2SM_KPM_RANfunction_Description_v300_H_
#define	_E2SM_KPM_RANfunction_Description_v300_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANfunction-Name.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RIC_EventTriggerStyle_Item;
struct RIC_ReportStyle_Item_v300;

/* E2SM-KPM-RANfunction-Description-v300 */
typedef struct E2SM_KPM_RANfunction_Description_v300 {
	RANfunction_Name_t	 ranFunction_Name;
	struct E2SM_KPM_RANfunction_Description_v300__ric_EventTriggerStyle_List {
		A_SEQUENCE_OF(struct RIC_EventTriggerStyle_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ric_EventTriggerStyle_List;
	struct E2SM_KPM_RANfunction_Description_v300__ric_ReportStyle_List {
		A_SEQUENCE_OF(struct RIC_ReportStyle_Item_v300) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ric_ReportStyle_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_KPM_RANfunction_Description_v300_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_RANfunction_Description_v300;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_KPM_RANfunction_Description_v300_H_ */
#include <asn_internal.h>
