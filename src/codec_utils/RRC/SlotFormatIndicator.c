/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "SlotFormatIndicator.h"

#include "SlotFormatCombinationsPerCell.h"
static int
memb_dci_PayloadSize_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_slotFormatCombToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_slotFormatCombToReleaseList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_slotFormatCombToAddModList_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_slotFormatCombToAddModList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_slotFormatCombToReleaseList_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_slotFormatCombToReleaseList_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_dci_PayloadSize_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..128) */,
	-1};
static asn_per_constraints_t asn_PER_memb_dci_PayloadSize_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (1..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_slotFormatCombToAddModList_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_slotFormatCombToAddModList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_slotFormatCombToReleaseList_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_slotFormatCombToReleaseList_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_slotFormatCombToAddModList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SlotFormatCombinationsPerCell,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_slotFormatCombToAddModList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_slotFormatCombToAddModList_specs_4 = {
	sizeof(struct SlotFormatIndicator__slotFormatCombToAddModList),
	offsetof(struct SlotFormatIndicator__slotFormatCombToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_slotFormatCombToAddModList_4 = {
	"slotFormatCombToAddModList",
	"slotFormatCombToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_slotFormatCombToAddModList_tags_4,
	sizeof(asn_DEF_slotFormatCombToAddModList_tags_4)
		/sizeof(asn_DEF_slotFormatCombToAddModList_tags_4[0]) - 1, /* 1 */
	asn_DEF_slotFormatCombToAddModList_tags_4,	/* Same as above */
	sizeof(asn_DEF_slotFormatCombToAddModList_tags_4)
		/sizeof(asn_DEF_slotFormatCombToAddModList_tags_4[0]), /* 2 */
	{ &asn_OER_type_slotFormatCombToAddModList_constr_4, &asn_PER_type_slotFormatCombToAddModList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_slotFormatCombToAddModList_4,
	1,	/* Single element */
	&asn_SPC_slotFormatCombToAddModList_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_slotFormatCombToReleaseList_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ServCellIndexRrc,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_slotFormatCombToReleaseList_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_slotFormatCombToReleaseList_specs_6 = {
	sizeof(struct SlotFormatIndicator__slotFormatCombToReleaseList),
	offsetof(struct SlotFormatIndicator__slotFormatCombToReleaseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_slotFormatCombToReleaseList_6 = {
	"slotFormatCombToReleaseList",
	"slotFormatCombToReleaseList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_slotFormatCombToReleaseList_tags_6,
	sizeof(asn_DEF_slotFormatCombToReleaseList_tags_6)
		/sizeof(asn_DEF_slotFormatCombToReleaseList_tags_6[0]) - 1, /* 1 */
	asn_DEF_slotFormatCombToReleaseList_tags_6,	/* Same as above */
	sizeof(asn_DEF_slotFormatCombToReleaseList_tags_6)
		/sizeof(asn_DEF_slotFormatCombToReleaseList_tags_6[0]), /* 2 */
	{ &asn_OER_type_slotFormatCombToReleaseList_constr_6, &asn_PER_type_slotFormatCombToReleaseList_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_slotFormatCombToReleaseList_6,
	1,	/* Single element */
	&asn_SPC_slotFormatCombToReleaseList_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SlotFormatIndicator_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SlotFormatIndicator, sfi_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfi-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SlotFormatIndicator, dci_PayloadSize),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_dci_PayloadSize_constr_3, &asn_PER_memb_dci_PayloadSize_constr_3,  memb_dci_PayloadSize_constraint_1 },
		0, 0, /* No default value */
		"dci-PayloadSize"
		},
	{ ATF_POINTER, 2, offsetof(struct SlotFormatIndicator, slotFormatCombToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_slotFormatCombToAddModList_4,
		0,
		{ &asn_OER_memb_slotFormatCombToAddModList_constr_4, &asn_PER_memb_slotFormatCombToAddModList_constr_4,  memb_slotFormatCombToAddModList_constraint_1 },
		0, 0, /* No default value */
		"slotFormatCombToAddModList"
		},
	{ ATF_POINTER, 1, offsetof(struct SlotFormatIndicator, slotFormatCombToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_slotFormatCombToReleaseList_6,
		0,
		{ &asn_OER_memb_slotFormatCombToReleaseList_constr_6, &asn_PER_memb_slotFormatCombToReleaseList_constr_6,  memb_slotFormatCombToReleaseList_constraint_1 },
		0, 0, /* No default value */
		"slotFormatCombToReleaseList"
		},
};
static const int asn_MAP_SlotFormatIndicator_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_SlotFormatIndicator_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SlotFormatIndicator_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sfi-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dci-PayloadSize */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* slotFormatCombToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* slotFormatCombToReleaseList */
};
asn_SEQUENCE_specifics_t asn_SPC_SlotFormatIndicator_specs_1 = {
	sizeof(struct SlotFormatIndicator),
	offsetof(struct SlotFormatIndicator, _asn_ctx),
	asn_MAP_SlotFormatIndicator_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SlotFormatIndicator_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SlotFormatIndicator = {
	"SlotFormatIndicator",
	"SlotFormatIndicator",
	&asn_OP_SEQUENCE,
	asn_DEF_SlotFormatIndicator_tags_1,
	sizeof(asn_DEF_SlotFormatIndicator_tags_1)
		/sizeof(asn_DEF_SlotFormatIndicator_tags_1[0]), /* 1 */
	asn_DEF_SlotFormatIndicator_tags_1,	/* Same as above */
	sizeof(asn_DEF_SlotFormatIndicator_tags_1)
		/sizeof(asn_DEF_SlotFormatIndicator_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SlotFormatIndicator_1,
	4,	/* Elements count */
	&asn_SPC_SlotFormatIndicator_specs_1	/* Additional specs */
};

