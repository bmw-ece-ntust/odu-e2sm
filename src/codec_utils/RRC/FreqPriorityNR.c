/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "FreqPriorityNR.h"

asn_TYPE_member_t asn_MBR_FreqPriorityNR_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FreqPriorityNR, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FreqPriorityNR, cellReselectionPriority),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionPriority"
		},
	{ ATF_POINTER, 1, offsetof(struct FreqPriorityNR, cellReselectionSubPriority),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionSubPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionSubPriority"
		},
};
static const int asn_MAP_FreqPriorityNR_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_FreqPriorityNR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FreqPriorityNR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellReselectionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellReselectionSubPriority */
};
asn_SEQUENCE_specifics_t asn_SPC_FreqPriorityNR_specs_1 = {
	sizeof(struct FreqPriorityNR),
	offsetof(struct FreqPriorityNR, _asn_ctx),
	asn_MAP_FreqPriorityNR_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_FreqPriorityNR_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FreqPriorityNR = {
	"FreqPriorityNR",
	"FreqPriorityNR",
	&asn_OP_SEQUENCE,
	asn_DEF_FreqPriorityNR_tags_1,
	sizeof(asn_DEF_FreqPriorityNR_tags_1)
		/sizeof(asn_DEF_FreqPriorityNR_tags_1[0]), /* 1 */
	asn_DEF_FreqPriorityNR_tags_1,	/* Same as above */
	sizeof(asn_DEF_FreqPriorityNR_tags_1)
		/sizeof(asn_DEF_FreqPriorityNR_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FreqPriorityNR_1,
	3,	/* Elements count */
	&asn_SPC_FreqPriorityNR_specs_1	/* Additional specs */
};

