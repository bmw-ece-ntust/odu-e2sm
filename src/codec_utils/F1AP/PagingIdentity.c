/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "PagingIdentity.h"

#include "RANUEPagingIdentity.h"
#include "CNUEPagingIdentity.h"
#include "ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_PagingIdentity_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_PagingIdentity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_PagingIdentity_1[] = {
	{ ATF_POINTER, 0, offsetof(struct PagingIdentity, choice.rANUEPagingIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANUEPagingIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rANUEPagingIdentity"
		},
	{ ATF_POINTER, 0, offsetof(struct PagingIdentity, choice.cNUEPagingIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CNUEPagingIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cNUEPagingIdentity"
		},
	{ ATF_POINTER, 0, offsetof(struct PagingIdentity, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_SingleContainer_4590P64,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_PagingIdentity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rANUEPagingIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cNUEPagingIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
static asn_CHOICE_specifics_t asn_SPC_PagingIdentity_specs_1 = {
	sizeof(struct PagingIdentity),
	offsetof(struct PagingIdentity, _asn_ctx),
	offsetof(struct PagingIdentity, present),
	sizeof(((struct PagingIdentity *)0)->present),
	asn_MAP_PagingIdentity_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PagingIdentity = {
	"PagingIdentity",
	"PagingIdentity",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_PagingIdentity_constr_1, &asn_PER_type_PagingIdentity_constr_1, CHOICE_constraint },
	asn_MBR_PagingIdentity_1,
	3,	/* Elements count */
	&asn_SPC_PagingIdentity_specs_1	/* Additional specs */
};

