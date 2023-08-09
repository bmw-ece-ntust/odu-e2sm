/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "../../ASN1_Input/E2APV0300.asn1"
 * 	`asn1c -D ../../E2_v3.0_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_RICsubscription_withCause_Item_H_
#define	_RICsubscription_withCause_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RICrequestID.h"
#include "RANfunctionID.h"
#include "CauseE2.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RICsubscription-withCause-Item */
typedef struct RICsubscription_withCause_Item {
	RICrequestID_t	 ricRequestID;
	RANfunctionID_t	 ranFunctionID;
	CauseE2_t	 cause;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICsubscription_withCause_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICsubscription_withCause_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _RICsubscription_withCause_Item_H_ */
#include <asn_internal.h>
