/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "QCL-Info.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_referenceSignal_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_referenceSignal_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_qcl_Type_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_qcl_Type_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_referenceSignal_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct QCL_Info__referenceSignal, choice.csi_rs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NZP_CSI_RS_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-rs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct QCL_Info__referenceSignal, choice.ssb),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_Index,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_referenceSignal_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-rs */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ssb */
};
static asn_CHOICE_specifics_t asn_SPC_referenceSignal_specs_4 = {
	sizeof(struct QCL_Info__referenceSignal),
	offsetof(struct QCL_Info__referenceSignal, _asn_ctx),
	offsetof(struct QCL_Info__referenceSignal, present),
	sizeof(((struct QCL_Info__referenceSignal *)0)->present),
	asn_MAP_referenceSignal_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_referenceSignal_4 = {
	"referenceSignal",
	"referenceSignal",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_referenceSignal_constr_4, &asn_PER_type_referenceSignal_constr_4, CHOICE_constraint },
	asn_MBR_referenceSignal_4,
	2,	/* Elements count */
	&asn_SPC_referenceSignal_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_qcl_Type_value2enum_7[] = {
	{ 0,	5,	"typeA" },
	{ 1,	5,	"typeB" },
	{ 2,	5,	"typeC" },
	{ 3,	5,	"typeD" }
};
static const unsigned int asn_MAP_qcl_Type_enum2value_7[] = {
	0,	/* typeA(0) */
	1,	/* typeB(1) */
	2,	/* typeC(2) */
	3	/* typeD(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_qcl_Type_specs_7 = {
	asn_MAP_qcl_Type_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_qcl_Type_enum2value_7,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_qcl_Type_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_qcl_Type_7 = {
	"qcl-Type",
	"qcl-Type",
	&asn_OP_NativeEnumerated,
	asn_DEF_qcl_Type_tags_7,
	sizeof(asn_DEF_qcl_Type_tags_7)
		/sizeof(asn_DEF_qcl_Type_tags_7[0]) - 1, /* 1 */
	asn_DEF_qcl_Type_tags_7,	/* Same as above */
	sizeof(asn_DEF_qcl_Type_tags_7)
		/sizeof(asn_DEF_qcl_Type_tags_7[0]), /* 2 */
	{ &asn_OER_type_qcl_Type_constr_7, &asn_PER_type_qcl_Type_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_qcl_Type_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_QCL_Info_1[] = {
	{ ATF_POINTER, 2, offsetof(struct QCL_Info, cell),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndexRrc,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cell"
		},
	{ ATF_POINTER, 1, offsetof(struct QCL_Info, bwp_Id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BWP_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bwp-Id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct QCL_Info, referenceSignal),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_referenceSignal_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceSignal"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct QCL_Info, qcl_Type),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_qcl_Type_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qcl-Type"
		},
};
static const int asn_MAP_QCL_Info_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_QCL_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_QCL_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cell */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bwp-Id */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* referenceSignal */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* qcl-Type */
};
asn_SEQUENCE_specifics_t asn_SPC_QCL_Info_specs_1 = {
	sizeof(struct QCL_Info),
	offsetof(struct QCL_Info, _asn_ctx),
	asn_MAP_QCL_Info_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_QCL_Info_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_QCL_Info = {
	"QCL-Info",
	"QCL-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_QCL_Info_tags_1,
	sizeof(asn_DEF_QCL_Info_tags_1)
		/sizeof(asn_DEF_QCL_Info_tags_1[0]), /* 1 */
	asn_DEF_QCL_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_QCL_Info_tags_1)
		/sizeof(asn_DEF_QCL_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_QCL_Info_1,
	4,	/* Elements count */
	&asn_SPC_QCL_Info_specs_1	/* Additional specs */
};

