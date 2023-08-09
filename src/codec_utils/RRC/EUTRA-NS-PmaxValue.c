/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "EUTRA-NS-PmaxValue.h"

static int
memb_additionalPmax_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -30 && value <= 33)) {
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
memb_additionalSpectrumEmission_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 288)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_additionalPmax_constr_2 CC_NOTUSED = {
	{ 1, 0 }	/* (-30..33) */,
	-1};
static asn_per_constraints_t asn_PER_memb_additionalPmax_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -30,  33 }	/* (-30..33) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_additionalSpectrumEmission_constr_3 CC_NOTUSED = {
	{ 2, 1 }	/* (1..288) */,
	-1};
static asn_per_constraints_t asn_PER_memb_additionalSpectrumEmission_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  1,  288 }	/* (1..288) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_EUTRA_NS_PmaxValue_1[] = {
	{ ATF_POINTER, 2, offsetof(struct EUTRA_NS_PmaxValue, additionalPmax),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_additionalPmax_constr_2, &asn_PER_memb_additionalPmax_constr_2,  memb_additionalPmax_constraint_1 },
		0, 0, /* No default value */
		"additionalPmax"
		},
	{ ATF_POINTER, 1, offsetof(struct EUTRA_NS_PmaxValue, additionalSpectrumEmission),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_additionalSpectrumEmission_constr_3, &asn_PER_memb_additionalSpectrumEmission_constr_3,  memb_additionalSpectrumEmission_constraint_1 },
		0, 0, /* No default value */
		"additionalSpectrumEmission"
		},
};
static const int asn_MAP_EUTRA_NS_PmaxValue_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_EUTRA_NS_PmaxValue_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EUTRA_NS_PmaxValue_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* additionalPmax */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* additionalSpectrumEmission */
};
asn_SEQUENCE_specifics_t asn_SPC_EUTRA_NS_PmaxValue_specs_1 = {
	sizeof(struct EUTRA_NS_PmaxValue),
	offsetof(struct EUTRA_NS_PmaxValue, _asn_ctx),
	asn_MAP_EUTRA_NS_PmaxValue_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_EUTRA_NS_PmaxValue_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EUTRA_NS_PmaxValue = {
	"EUTRA-NS-PmaxValue",
	"EUTRA-NS-PmaxValue",
	&asn_OP_SEQUENCE,
	asn_DEF_EUTRA_NS_PmaxValue_tags_1,
	sizeof(asn_DEF_EUTRA_NS_PmaxValue_tags_1)
		/sizeof(asn_DEF_EUTRA_NS_PmaxValue_tags_1[0]), /* 1 */
	asn_DEF_EUTRA_NS_PmaxValue_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRA_NS_PmaxValue_tags_1)
		/sizeof(asn_DEF_EUTRA_NS_PmaxValue_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EUTRA_NS_PmaxValue_1,
	2,	/* Elements count */
	&asn_SPC_EUTRA_NS_PmaxValue_specs_1	/* Additional specs */
};

