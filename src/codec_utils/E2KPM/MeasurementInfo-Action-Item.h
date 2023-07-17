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

#ifndef	_MeasurementInfo_Action_Item_H_
#define	_MeasurementInfo_Action_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementTypeName.h"
#include "MeasurementTypeID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasurementInfo-Action-Item */
typedef struct MeasurementInfo_Action_Item {
	MeasurementTypeName_t	 measName;
	MeasurementTypeID_t	*measID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementInfo_Action_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementInfo_Action_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementInfo_Action_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementInfo_Action_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementInfo_Action_Item_H_ */
#include <asn_internal.h>
