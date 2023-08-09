/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SRB_ToAddMod_H_
#define	_SRB_ToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SRB-Identity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRB_ToAddMod__reestablishPDCP {
	SRB_ToAddMod__reestablishPDCP_true	= 0
} e_SRB_ToAddMod__reestablishPDCP;
typedef enum SRB_ToAddMod__discardOnPDCP {
	SRB_ToAddMod__discardOnPDCP_true	= 0
} e_SRB_ToAddMod__discardOnPDCP;

/* Forward declarations */
struct PDCP_Config;

/* SRB-ToAddMod */
typedef struct SRB_ToAddMod {
	SRB_Identity_t	 srb_Identity;
	long	*reestablishPDCP;	/* OPTIONAL */
	long	*discardOnPDCP;	/* OPTIONAL */
	struct PDCP_Config	*pdcp_Config;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRB_ToAddMod_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reestablishPDCP_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_discardOnPDCP_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SRB_ToAddMod;
extern asn_SEQUENCE_specifics_t asn_SPC_SRB_ToAddMod_specs_1;
extern asn_TYPE_member_t asn_MBR_SRB_ToAddMod_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SRB_ToAddMod_H_ */
#include <asn_internal.h>
