/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "CauseMisc.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_CauseMisc_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_CauseMisc_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_CauseMisc_value2enum_1[] = {
	{ 0,	27,	"control-processing-overload" },
	{ 1,	42,	"not-enough-user-plane-processing-resources" },
	{ 2,	16,	"hardware-failure" },
	{ 3,	15,	"om-intervention" },
	{ 4,	11,	"unspecified" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_CauseMisc_enum2value_1[] = {
	0,	/* control-processing-overload(0) */
	2,	/* hardware-failure(2) */
	1,	/* not-enough-user-plane-processing-resources(1) */
	3,	/* om-intervention(3) */
	4	/* unspecified(4) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_CauseMisc_specs_1 = {
	asn_MAP_CauseMisc_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_CauseMisc_enum2value_1,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_CauseMisc_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CauseMisc = {
	"CauseMisc",
	"CauseMisc",
	&asn_OP_NativeEnumerated,
	asn_DEF_CauseMisc_tags_1,
	sizeof(asn_DEF_CauseMisc_tags_1)
		/sizeof(asn_DEF_CauseMisc_tags_1[0]), /* 1 */
	asn_DEF_CauseMisc_tags_1,	/* Same as above */
	sizeof(asn_DEF_CauseMisc_tags_1)
		/sizeof(asn_DEF_CauseMisc_tags_1[0]), /* 1 */
	{ &asn_OER_type_CauseMisc_constr_1, &asn_PER_type_CauseMisc_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_CauseMisc_specs_1	/* Additional specs */
};

