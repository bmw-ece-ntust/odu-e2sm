/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_Configured_EPS_TAC_H_
#define	_Configured_EPS_TAC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Configured-EPS-TAC */
typedef OCTET_STRING_t	 Configured_EPS_TAC_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Configured_EPS_TAC_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Configured_EPS_TAC;
asn_struct_free_f Configured_EPS_TAC_free;
asn_struct_print_f Configured_EPS_TAC_print;
asn_constr_check_f Configured_EPS_TAC_constraint;
ber_type_decoder_f Configured_EPS_TAC_decode_ber;
der_type_encoder_f Configured_EPS_TAC_encode_der;
xer_type_decoder_f Configured_EPS_TAC_decode_xer;
xer_type_encoder_f Configured_EPS_TAC_encode_xer;
oer_type_decoder_f Configured_EPS_TAC_decode_oer;
oer_type_encoder_f Configured_EPS_TAC_encode_oer;
per_type_decoder_f Configured_EPS_TAC_decode_uper;
per_type_encoder_f Configured_EPS_TAC_encode_uper;
per_type_decoder_f Configured_EPS_TAC_decode_aper;
per_type_encoder_f Configured_EPS_TAC_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Configured_EPS_TAC_H_ */
#include <asn_internal.h>
