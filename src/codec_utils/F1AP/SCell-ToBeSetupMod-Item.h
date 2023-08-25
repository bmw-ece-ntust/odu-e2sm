/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SCell_ToBeSetupMod_Item_H_
#define	_SCell_ToBeSetupMod_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRCGI.h"
#include "SCellIndex.h"
#include "CellULConfigured.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* SCell-ToBeSetupMod-Item */
typedef struct SCell_ToBeSetupMod_Item {
	NRCGI_t	 sCell_ID;
	SCellIndex_t	 sCellIndex;
	CellULConfigured_t	*sCellULConfigured;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCell_ToBeSetupMod_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCell_ToBeSetupMod_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _SCell_ToBeSetupMod_Item_H_ */
#include <asn_internal.h>
