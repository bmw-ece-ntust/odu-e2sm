/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "Served-Cell-Information.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Served_Cell_Information_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Served_Cell_Information, nRCGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRCGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nRCGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Served_Cell_Information, nRPCI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nRPCI"
		},
	{ ATF_POINTER, 2, offsetof(struct Served_Cell_Information, fiveGS_TAC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FiveGS_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fiveGS-TAC"
		},
	{ ATF_POINTER, 1, offsetof(struct Served_Cell_Information, configured_EPS_TAC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Configured_EPS_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"configured-EPS-TAC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Served_Cell_Information, servedPLMNs),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServedPLMNs_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servedPLMNs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Served_Cell_Information, nR_Mode_Info),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_Mode_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nR-Mode-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Served_Cell_Information, measurementTimingConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementTimingConfiguration"
		},
	{ ATF_POINTER, 1, offsetof(struct Served_Cell_Information, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_4624P87,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Served_Cell_Information_oms_1[] = { 2, 3, 7 };
static const ber_tlv_tag_t asn_DEF_Served_Cell_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Served_Cell_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nRCGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nRPCI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fiveGS-TAC */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* configured-EPS-TAC */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* servedPLMNs */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* nR-Mode-Info */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* measurementTimingConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Served_Cell_Information_specs_1 = {
	sizeof(struct Served_Cell_Information),
	offsetof(struct Served_Cell_Information, _asn_ctx),
	asn_MAP_Served_Cell_Information_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_Served_Cell_Information_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Served_Cell_Information = {
	"Served-Cell-Information",
	"Served-Cell-Information",
	&asn_OP_SEQUENCE,
	asn_DEF_Served_Cell_Information_tags_1,
	sizeof(asn_DEF_Served_Cell_Information_tags_1)
		/sizeof(asn_DEF_Served_Cell_Information_tags_1[0]), /* 1 */
	asn_DEF_Served_Cell_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_Served_Cell_Information_tags_1)
		/sizeof(asn_DEF_Served_Cell_Information_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Served_Cell_Information_1,
	8,	/* Elements count */
	&asn_SPC_Served_Cell_Information_specs_1	/* Additional specs */
};

