/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "RACH-ConfigDedicated.h"

#include "CFRA.h"
#include "RA-Prioritization.h"
asn_TYPE_member_t asn_MBR_RACH_ConfigDedicated_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RACH_ConfigDedicated, cfra),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CFRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cfra"
		},
	{ ATF_POINTER, 1, offsetof(struct RACH_ConfigDedicated, ra_Prioritization),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RA_Prioritization,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-Prioritization"
		},
};
static const int asn_MAP_RACH_ConfigDedicated_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RACH_ConfigDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RACH_ConfigDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cfra */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ra-Prioritization */
};
asn_SEQUENCE_specifics_t asn_SPC_RACH_ConfigDedicated_specs_1 = {
	sizeof(struct RACH_ConfigDedicated),
	offsetof(struct RACH_ConfigDedicated, _asn_ctx),
	asn_MAP_RACH_ConfigDedicated_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RACH_ConfigDedicated_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RACH_ConfigDedicated = {
	"RACH-ConfigDedicated",
	"RACH-ConfigDedicated",
	&asn_OP_SEQUENCE,
	asn_DEF_RACH_ConfigDedicated_tags_1,
	sizeof(asn_DEF_RACH_ConfigDedicated_tags_1)
		/sizeof(asn_DEF_RACH_ConfigDedicated_tags_1[0]), /* 1 */
	asn_DEF_RACH_ConfigDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_RACH_ConfigDedicated_tags_1)
		/sizeof(asn_DEF_RACH_ConfigDedicated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RACH_ConfigDedicated_1,
	2,	/* Elements count */
	&asn_SPC_RACH_ConfigDedicated_specs_1	/* Additional specs */
};

