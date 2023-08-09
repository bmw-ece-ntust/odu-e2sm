/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "../../ASN1_Input/E2APV0300.asn1"
 * 	`asn1c -D ../../E2_v3.0_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_TimeToWaitE2_H_
#define	_TimeToWaitE2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimeToWaitE2 {
	TimeToWaitE2_v1s	= 0,
	TimeToWaitE2_v2s	= 1,
	TimeToWaitE2_v5s	= 2,
	TimeToWaitE2_v10s	= 3,
	TimeToWaitE2_v20s	= 4,
	TimeToWaitE2_v60s	= 5
	/*
	 * Enumeration is extensible
	 */
} e_TimeToWaitE2;

/* TimeToWaitE2 */
typedef long	 TimeToWaitE2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeToWaitE2;
asn_struct_free_f TimeToWaitE2_free;
asn_struct_print_f TimeToWaitE2_print;
asn_constr_check_f TimeToWaitE2_constraint;
ber_type_decoder_f TimeToWaitE2_decode_ber;
der_type_encoder_f TimeToWaitE2_encode_der;
xer_type_decoder_f TimeToWaitE2_decode_xer;
xer_type_encoder_f TimeToWaitE2_encode_xer;
oer_type_decoder_f TimeToWaitE2_decode_oer;
oer_type_encoder_f TimeToWaitE2_encode_oer;
per_type_decoder_f TimeToWaitE2_decode_uper;
per_type_encoder_f TimeToWaitE2_encode_uper;
per_type_decoder_f TimeToWaitE2_decode_aper;
per_type_encoder_f TimeToWaitE2_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeToWaitE2_H_ */
#include <asn_internal.h>
