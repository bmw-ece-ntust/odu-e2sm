/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_GNB_DU_Name_H_
#define	_GNB_DU_Name_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GNB-DU-Name */
typedef PrintableString_t	 GNB_DU_Name_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNB_DU_Name;
asn_struct_free_f GNB_DU_Name_free;
asn_struct_print_f GNB_DU_Name_print;
asn_constr_check_f GNB_DU_Name_constraint;
ber_type_decoder_f GNB_DU_Name_decode_ber;
der_type_encoder_f GNB_DU_Name_encode_der;
xer_type_decoder_f GNB_DU_Name_decode_xer;
xer_type_encoder_f GNB_DU_Name_encode_xer;
oer_type_decoder_f GNB_DU_Name_decode_oer;
oer_type_encoder_f GNB_DU_Name_encode_oer;
per_type_decoder_f GNB_DU_Name_decode_uper;
per_type_encoder_f GNB_DU_Name_encode_uper;
per_type_decoder_f GNB_DU_Name_decode_aper;
per_type_encoder_f GNB_DU_Name_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _GNB_DU_Name_H_ */
#include <asn_internal.h>
