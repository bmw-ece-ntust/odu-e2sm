/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "FreqBandList.h"

#include "FreqBandInformation.h"
static asn_oer_constraints_t asn_OER_type_FreqBandList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..1280)) */};
asn_per_constraints_t asn_PER_type_FreqBandList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 11,  11,  1,  1280 }	/* (SIZE(1..1280)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_FreqBandList_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FreqBandInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_FreqBandList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_FreqBandList_specs_1 = {
	sizeof(struct FreqBandList),
	offsetof(struct FreqBandList, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_FreqBandList = {
	"FreqBandList",
	"FreqBandList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_FreqBandList_tags_1,
	sizeof(asn_DEF_FreqBandList_tags_1)
		/sizeof(asn_DEF_FreqBandList_tags_1[0]), /* 1 */
	asn_DEF_FreqBandList_tags_1,	/* Same as above */
	sizeof(asn_DEF_FreqBandList_tags_1)
		/sizeof(asn_DEF_FreqBandList_tags_1[0]), /* 1 */
	{ &asn_OER_type_FreqBandList_constr_1, &asn_PER_type_FreqBandList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_FreqBandList_1,
	1,	/* Single element */
	&asn_SPC_FreqBandList_specs_1	/* Additional specs */
};

