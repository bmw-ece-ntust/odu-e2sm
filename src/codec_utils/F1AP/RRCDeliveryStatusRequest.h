/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_RRCDeliveryStatusRequest_H_
#define	_RRCDeliveryStatusRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCDeliveryStatusRequest {
	RRCDeliveryStatusRequest_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_RRCDeliveryStatusRequest;

/* RRCDeliveryStatusRequest */
typedef long	 RRCDeliveryStatusRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCDeliveryStatusRequest;
asn_struct_free_f RRCDeliveryStatusRequest_free;
asn_struct_print_f RRCDeliveryStatusRequest_print;
asn_constr_check_f RRCDeliveryStatusRequest_constraint;
ber_type_decoder_f RRCDeliveryStatusRequest_decode_ber;
der_type_encoder_f RRCDeliveryStatusRequest_encode_der;
xer_type_decoder_f RRCDeliveryStatusRequest_decode_xer;
xer_type_encoder_f RRCDeliveryStatusRequest_encode_xer;
oer_type_decoder_f RRCDeliveryStatusRequest_decode_oer;
oer_type_encoder_f RRCDeliveryStatusRequest_encode_oer;
per_type_decoder_f RRCDeliveryStatusRequest_decode_uper;
per_type_encoder_f RRCDeliveryStatusRequest_encode_uper;
per_type_decoder_f RRCDeliveryStatusRequest_decode_aper;
per_type_encoder_f RRCDeliveryStatusRequest_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCDeliveryStatusRequest_H_ */
#include <asn_internal.h>
