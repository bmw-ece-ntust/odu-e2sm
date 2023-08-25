/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_ULInformationTransfer_IEs_H_
#define	_ULInformationTransfer_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DedicatedNAS-Message.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ULInformationTransfer-IEs */
typedef struct ULInformationTransfer_IEs {
	DedicatedNAS_Message_t	*dedicatedNAS_Message;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct ULInformationTransfer_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULInformationTransfer_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULInformationTransfer_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_ULInformationTransfer_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_ULInformationTransfer_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ULInformationTransfer_IEs_H_ */
#include <asn_internal.h>
