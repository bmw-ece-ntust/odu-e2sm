/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "ReestabUE-Identity.h"

asn_TYPE_member_t asn_MBR_ReestabUE_Identity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReestabUE_Identity, c_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReestabUE_Identity, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReestabUE_Identity, shortMAC_I),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ShortMAC_I,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"shortMAC-I"
		},
};
static const ber_tlv_tag_t asn_DEF_ReestabUE_Identity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReestabUE_Identity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* shortMAC-I */
};
asn_SEQUENCE_specifics_t asn_SPC_ReestabUE_Identity_specs_1 = {
	sizeof(struct ReestabUE_Identity),
	offsetof(struct ReestabUE_Identity, _asn_ctx),
	asn_MAP_ReestabUE_Identity_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReestabUE_Identity = {
	"ReestabUE-Identity",
	"ReestabUE-Identity",
	&asn_OP_SEQUENCE,
	asn_DEF_ReestabUE_Identity_tags_1,
	sizeof(asn_DEF_ReestabUE_Identity_tags_1)
		/sizeof(asn_DEF_ReestabUE_Identity_tags_1[0]), /* 1 */
	asn_DEF_ReestabUE_Identity_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReestabUE_Identity_tags_1)
		/sizeof(asn_DEF_ReestabUE_Identity_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReestabUE_Identity_1,
	3,	/* Elements count */
	&asn_SPC_ReestabUE_Identity_specs_1	/* Additional specs */
};

