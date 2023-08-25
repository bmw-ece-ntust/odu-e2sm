/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "DRB-Information.h"

#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_DRB_Information_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_Information, dRB_QoS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QoSFlowLevelQoSParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-QoS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_Information, sNSSAI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SNSSAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sNSSAI"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_Information, notificationControl),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NotificationControl,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"notificationControl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_Information, flows_Mapped_To_DRB_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Flows_Mapped_To_DRB_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"flows-Mapped-To-DRB-List"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_Information, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_4624P23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_DRB_Information_oms_1[] = { 2, 4 };
static const ber_tlv_tag_t asn_DEF_DRB_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRB_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRB-QoS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sNSSAI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* notificationControl */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* flows-Mapped-To-DRB-List */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_DRB_Information_specs_1 = {
	sizeof(struct DRB_Information),
	offsetof(struct DRB_Information, _asn_ctx),
	asn_MAP_DRB_Information_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_DRB_Information_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRB_Information = {
	"DRB-Information",
	"DRB-Information",
	&asn_OP_SEQUENCE,
	asn_DEF_DRB_Information_tags_1,
	sizeof(asn_DEF_DRB_Information_tags_1)
		/sizeof(asn_DEF_DRB_Information_tags_1[0]), /* 1 */
	asn_DEF_DRB_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_Information_tags_1)
		/sizeof(asn_DEF_DRB_Information_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRB_Information_1,
	5,	/* Elements count */
	&asn_SPC_DRB_Information_specs_1	/* Additional specs */
};

