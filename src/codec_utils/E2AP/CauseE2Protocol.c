/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "../../ASN1_Input/E2APV0300.asn1"
 * 	`asn1c -D ../../E2_v3.0_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "CauseE2Protocol.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_CauseE2Protocol_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_CauseE2Protocol_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_CauseE2Protocol_value2enum_1[] = {
	{ 0,	21,	"transfer-syntax-error" },
	{ 1,	28,	"abstract-syntax-error-reject" },
	{ 2,	39,	"abstract-syntax-error-ignore-and-notify" },
	{ 3,	42,	"message-not-compatible-with-receiver-state" },
	{ 4,	14,	"semantic-error" },
	{ 5,	49,	"abstract-syntax-error-falsely-constructed-message" },
	{ 6,	11,	"unspecified" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_CauseE2Protocol_enum2value_1[] = {
	5,	/* abstract-syntax-error-falsely-constructed-message(5) */
	2,	/* abstract-syntax-error-ignore-and-notify(2) */
	1,	/* abstract-syntax-error-reject(1) */
	3,	/* message-not-compatible-with-receiver-state(3) */
	4,	/* semantic-error(4) */
	0,	/* transfer-syntax-error(0) */
	6	/* unspecified(6) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_CauseE2Protocol_specs_1 = {
	asn_MAP_CauseE2Protocol_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_CauseE2Protocol_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	8,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_CauseE2Protocol_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CauseE2Protocol = {
	"CauseE2Protocol",
	"CauseE2Protocol",
	&asn_OP_NativeEnumerated,
	asn_DEF_CauseE2Protocol_tags_1,
	sizeof(asn_DEF_CauseE2Protocol_tags_1)
		/sizeof(asn_DEF_CauseE2Protocol_tags_1[0]), /* 1 */
	asn_DEF_CauseE2Protocol_tags_1,	/* Same as above */
	sizeof(asn_DEF_CauseE2Protocol_tags_1)
		/sizeof(asn_DEF_CauseE2Protocol_tags_1[0]), /* 1 */
	{ &asn_OER_type_CauseE2Protocol_constr_1, &asn_PER_type_CauseE2Protocol_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_CauseE2Protocol_specs_1	/* Additional specs */
};

