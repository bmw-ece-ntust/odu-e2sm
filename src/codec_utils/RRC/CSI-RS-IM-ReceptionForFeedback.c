/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "CSI-RS-IM-ReceptionForFeedback.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_maxNumberNZP_CSI_RS_PerCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_maxNumberPortsAcrossNZP_CSI_RS_PerCC_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_maxNumberPortsAcrossNZP_CSI_RS_PerCC_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  34 }	/* (0..34) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_maxNumberCS_IM_PerCC_constr_39 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_maxNumberCS_IM_PerCC_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_constr_46 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_constr_46 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  32 }	/* (0..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_constr_80 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_constr_80 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  32 }	/* (0..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxNumberNZP_CSI_RS_PerCC_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..32) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxNumberNZP_CSI_RS_PerCC_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_maxNumberPortsAcrossNZP_CSI_RS_PerCC_value2enum_3[] = {
	{ 0,	2,	"p2" },
	{ 1,	2,	"p4" },
	{ 2,	2,	"p8" },
	{ 3,	3,	"p12" },
	{ 4,	3,	"p16" },
	{ 5,	3,	"p24" },
	{ 6,	3,	"p32" },
	{ 7,	3,	"p40" },
	{ 8,	3,	"p48" },
	{ 9,	3,	"p56" },
	{ 10,	3,	"p64" },
	{ 11,	3,	"p72" },
	{ 12,	3,	"p80" },
	{ 13,	3,	"p88" },
	{ 14,	3,	"p96" },
	{ 15,	4,	"p104" },
	{ 16,	4,	"p112" },
	{ 17,	4,	"p120" },
	{ 18,	4,	"p128" },
	{ 19,	4,	"p136" },
	{ 20,	4,	"p144" },
	{ 21,	4,	"p152" },
	{ 22,	4,	"p160" },
	{ 23,	4,	"p168" },
	{ 24,	4,	"p176" },
	{ 25,	4,	"p184" },
	{ 26,	4,	"p192" },
	{ 27,	4,	"p200" },
	{ 28,	4,	"p208" },
	{ 29,	4,	"p216" },
	{ 30,	4,	"p224" },
	{ 31,	4,	"p232" },
	{ 32,	4,	"p240" },
	{ 33,	4,	"p248" },
	{ 34,	4,	"p256" }
};
static const unsigned int asn_MAP_maxNumberPortsAcrossNZP_CSI_RS_PerCC_enum2value_3[] = {
	15,	/* p104(15) */
	16,	/* p112(16) */
	3,	/* p12(3) */
	17,	/* p120(17) */
	18,	/* p128(18) */
	19,	/* p136(19) */
	20,	/* p144(20) */
	21,	/* p152(21) */
	4,	/* p16(4) */
	22,	/* p160(22) */
	23,	/* p168(23) */
	24,	/* p176(24) */
	25,	/* p184(25) */
	26,	/* p192(26) */
	0,	/* p2(0) */
	27,	/* p200(27) */
	28,	/* p208(28) */
	29,	/* p216(29) */
	30,	/* p224(30) */
	31,	/* p232(31) */
	5,	/* p24(5) */
	32,	/* p240(32) */
	33,	/* p248(33) */
	34,	/* p256(34) */
	6,	/* p32(6) */
	1,	/* p4(1) */
	7,	/* p40(7) */
	8,	/* p48(8) */
	9,	/* p56(9) */
	10,	/* p64(10) */
	11,	/* p72(11) */
	2,	/* p8(2) */
	12,	/* p80(12) */
	13,	/* p88(13) */
	14	/* p96(14) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberPortsAcrossNZP_CSI_RS_PerCC_specs_3 = {
	asn_MAP_maxNumberPortsAcrossNZP_CSI_RS_PerCC_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberPortsAcrossNZP_CSI_RS_PerCC_enum2value_3,	/* N => "tag"; sorted by N */
	35,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberPortsAcrossNZP_CSI_RS_PerCC_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberPortsAcrossNZP_CSI_RS_PerCC_3 = {
	"maxNumberPortsAcrossNZP-CSI-RS-PerCC",
	"maxNumberPortsAcrossNZP-CSI-RS-PerCC",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberPortsAcrossNZP_CSI_RS_PerCC_tags_3,
	sizeof(asn_DEF_maxNumberPortsAcrossNZP_CSI_RS_PerCC_tags_3)
		/sizeof(asn_DEF_maxNumberPortsAcrossNZP_CSI_RS_PerCC_tags_3[0]) - 1, /* 1 */
	asn_DEF_maxNumberPortsAcrossNZP_CSI_RS_PerCC_tags_3,	/* Same as above */
	sizeof(asn_DEF_maxNumberPortsAcrossNZP_CSI_RS_PerCC_tags_3)
		/sizeof(asn_DEF_maxNumberPortsAcrossNZP_CSI_RS_PerCC_tags_3[0]), /* 2 */
	{ &asn_OER_type_maxNumberPortsAcrossNZP_CSI_RS_PerCC_constr_3, &asn_PER_type_maxNumberPortsAcrossNZP_CSI_RS_PerCC_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberPortsAcrossNZP_CSI_RS_PerCC_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNumberCS_IM_PerCC_value2enum_39[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" }
};
static const unsigned int asn_MAP_maxNumberCS_IM_PerCC_enum2value_39[] = {
	0,	/* n1(0) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberCS_IM_PerCC_specs_39 = {
	asn_MAP_maxNumberCS_IM_PerCC_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberCS_IM_PerCC_enum2value_39,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberCS_IM_PerCC_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberCS_IM_PerCC_39 = {
	"maxNumberCS-IM-PerCC",
	"maxNumberCS-IM-PerCC",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberCS_IM_PerCC_tags_39,
	sizeof(asn_DEF_maxNumberCS_IM_PerCC_tags_39)
		/sizeof(asn_DEF_maxNumberCS_IM_PerCC_tags_39[0]) - 1, /* 1 */
	asn_DEF_maxNumberCS_IM_PerCC_tags_39,	/* Same as above */
	sizeof(asn_DEF_maxNumberCS_IM_PerCC_tags_39)
		/sizeof(asn_DEF_maxNumberCS_IM_PerCC_tags_39[0]), /* 2 */
	{ &asn_OER_type_maxNumberCS_IM_PerCC_constr_39, &asn_PER_type_maxNumberCS_IM_PerCC_constr_39, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberCS_IM_PerCC_specs_39	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_value2enum_46[] = {
	{ 0,	2,	"n5" },
	{ 1,	2,	"n6" },
	{ 2,	2,	"n7" },
	{ 3,	2,	"n8" },
	{ 4,	2,	"n9" },
	{ 5,	3,	"n10" },
	{ 6,	3,	"n12" },
	{ 7,	3,	"n14" },
	{ 8,	3,	"n16" },
	{ 9,	3,	"n18" },
	{ 10,	3,	"n20" },
	{ 11,	3,	"n22" },
	{ 12,	3,	"n24" },
	{ 13,	3,	"n26" },
	{ 14,	3,	"n28" },
	{ 15,	3,	"n30" },
	{ 16,	3,	"n32" },
	{ 17,	3,	"n34" },
	{ 18,	3,	"n36" },
	{ 19,	3,	"n38" },
	{ 20,	3,	"n40" },
	{ 21,	3,	"n42" },
	{ 22,	3,	"n44" },
	{ 23,	3,	"n46" },
	{ 24,	3,	"n48" },
	{ 25,	3,	"n50" },
	{ 26,	3,	"n52" },
	{ 27,	3,	"n54" },
	{ 28,	3,	"n56" },
	{ 29,	3,	"n58" },
	{ 30,	3,	"n60" },
	{ 31,	3,	"n62" },
	{ 32,	3,	"n64" }
};
static const unsigned int asn_MAP_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_enum2value_46[] = {
	5,	/* n10(5) */
	6,	/* n12(6) */
	7,	/* n14(7) */
	8,	/* n16(8) */
	9,	/* n18(9) */
	10,	/* n20(10) */
	11,	/* n22(11) */
	12,	/* n24(12) */
	13,	/* n26(13) */
	14,	/* n28(14) */
	15,	/* n30(15) */
	16,	/* n32(16) */
	17,	/* n34(17) */
	18,	/* n36(18) */
	19,	/* n38(19) */
	20,	/* n40(20) */
	21,	/* n42(21) */
	22,	/* n44(22) */
	23,	/* n46(23) */
	24,	/* n48(24) */
	0,	/* n5(0) */
	25,	/* n50(25) */
	26,	/* n52(26) */
	27,	/* n54(27) */
	28,	/* n56(28) */
	29,	/* n58(29) */
	1,	/* n6(1) */
	30,	/* n60(30) */
	31,	/* n62(31) */
	32,	/* n64(32) */
	2,	/* n7(2) */
	3,	/* n8(3) */
	4	/* n9(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_specs_46 = {
	asn_MAP_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_value2enum_46,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_enum2value_46,	/* N => "tag"; sorted by N */
	33,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_tags_46[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_46 = {
	"maxNumberSimultaneousCSI-RS-ActBWP-AllCC",
	"maxNumberSimultaneousCSI-RS-ActBWP-AllCC",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_tags_46,
	sizeof(asn_DEF_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_tags_46)
		/sizeof(asn_DEF_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_tags_46[0]) - 1, /* 1 */
	asn_DEF_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_tags_46,	/* Same as above */
	sizeof(asn_DEF_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_tags_46)
		/sizeof(asn_DEF_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_tags_46[0]), /* 2 */
	{ &asn_OER_type_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_constr_46, &asn_PER_type_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_constr_46, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_specs_46	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_value2enum_80[] = {
	{ 0,	2,	"p8" },
	{ 1,	3,	"p12" },
	{ 2,	3,	"p16" },
	{ 3,	3,	"p24" },
	{ 4,	3,	"p32" },
	{ 5,	3,	"p40" },
	{ 6,	3,	"p48" },
	{ 7,	3,	"p56" },
	{ 8,	3,	"p64" },
	{ 9,	3,	"p72" },
	{ 10,	3,	"p80" },
	{ 11,	3,	"p88" },
	{ 12,	3,	"p96" },
	{ 13,	4,	"p104" },
	{ 14,	4,	"p112" },
	{ 15,	4,	"p120" },
	{ 16,	4,	"p128" },
	{ 17,	4,	"p136" },
	{ 18,	4,	"p144" },
	{ 19,	4,	"p152" },
	{ 20,	4,	"p160" },
	{ 21,	4,	"p168" },
	{ 22,	4,	"p176" },
	{ 23,	4,	"p184" },
	{ 24,	4,	"p192" },
	{ 25,	4,	"p200" },
	{ 26,	4,	"p208" },
	{ 27,	4,	"p216" },
	{ 28,	4,	"p224" },
	{ 29,	4,	"p232" },
	{ 30,	4,	"p240" },
	{ 31,	4,	"p248" },
	{ 32,	4,	"p256" }
};
static const unsigned int asn_MAP_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_enum2value_80[] = {
	13,	/* p104(13) */
	14,	/* p112(14) */
	1,	/* p12(1) */
	15,	/* p120(15) */
	16,	/* p128(16) */
	17,	/* p136(17) */
	18,	/* p144(18) */
	19,	/* p152(19) */
	2,	/* p16(2) */
	20,	/* p160(20) */
	21,	/* p168(21) */
	22,	/* p176(22) */
	23,	/* p184(23) */
	24,	/* p192(24) */
	25,	/* p200(25) */
	26,	/* p208(26) */
	27,	/* p216(27) */
	28,	/* p224(28) */
	29,	/* p232(29) */
	3,	/* p24(3) */
	30,	/* p240(30) */
	31,	/* p248(31) */
	32,	/* p256(32) */
	4,	/* p32(4) */
	5,	/* p40(5) */
	6,	/* p48(6) */
	7,	/* p56(7) */
	8,	/* p64(8) */
	9,	/* p72(9) */
	0,	/* p8(0) */
	10,	/* p80(10) */
	11,	/* p88(11) */
	12	/* p96(12) */
};
static const asn_INTEGER_specifics_t asn_SPC_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_specs_80 = {
	asn_MAP_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_value2enum_80,	/* "tag" => N; sorted by tag */
	asn_MAP_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_enum2value_80,	/* N => "tag"; sorted by N */
	33,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_tags_80[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_80 = {
	"totalNumberPortsSimultaneousCSI-RS-ActBWP-AllCC",
	"totalNumberPortsSimultaneousCSI-RS-ActBWP-AllCC",
	&asn_OP_NativeEnumerated,
	asn_DEF_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_tags_80,
	sizeof(asn_DEF_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_tags_80)
		/sizeof(asn_DEF_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_tags_80[0]) - 1, /* 1 */
	asn_DEF_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_tags_80,	/* Same as above */
	sizeof(asn_DEF_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_tags_80)
		/sizeof(asn_DEF_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_tags_80[0]), /* 2 */
	{ &asn_OER_type_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_constr_80, &asn_PER_type_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_constr_80, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_specs_80	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSI_RS_IM_ReceptionForFeedback_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_IM_ReceptionForFeedback, maxNumberNZP_CSI_RS_PerCC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxNumberNZP_CSI_RS_PerCC_constr_2, &asn_PER_memb_maxNumberNZP_CSI_RS_PerCC_constr_2,  memb_maxNumberNZP_CSI_RS_PerCC_constraint_1 },
		0, 0, /* No default value */
		"maxNumberNZP-CSI-RS-PerCC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_IM_ReceptionForFeedback, maxNumberPortsAcrossNZP_CSI_RS_PerCC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberPortsAcrossNZP_CSI_RS_PerCC_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberPortsAcrossNZP-CSI-RS-PerCC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_IM_ReceptionForFeedback, maxNumberCS_IM_PerCC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberCS_IM_PerCC_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberCS-IM-PerCC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_IM_ReceptionForFeedback, maxNumberSimultaneousCSI_RS_ActBWP_AllCC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_46,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberSimultaneousCSI-RS-ActBWP-AllCC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_IM_ReceptionForFeedback, totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_80,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"totalNumberPortsSimultaneousCSI-RS-ActBWP-AllCC"
		},
};
static const ber_tlv_tag_t asn_DEF_CSI_RS_IM_ReceptionForFeedback_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_RS_IM_ReceptionForFeedback_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberNZP-CSI-RS-PerCC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNumberPortsAcrossNZP-CSI-RS-PerCC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxNumberCS-IM-PerCC */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxNumberSimultaneousCSI-RS-ActBWP-AllCC */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* totalNumberPortsSimultaneousCSI-RS-ActBWP-AllCC */
};
asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_IM_ReceptionForFeedback_specs_1 = {
	sizeof(struct CSI_RS_IM_ReceptionForFeedback),
	offsetof(struct CSI_RS_IM_ReceptionForFeedback, _asn_ctx),
	asn_MAP_CSI_RS_IM_ReceptionForFeedback_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSI_RS_IM_ReceptionForFeedback = {
	"CSI-RS-IM-ReceptionForFeedback",
	"CSI-RS-IM-ReceptionForFeedback",
	&asn_OP_SEQUENCE,
	asn_DEF_CSI_RS_IM_ReceptionForFeedback_tags_1,
	sizeof(asn_DEF_CSI_RS_IM_ReceptionForFeedback_tags_1)
		/sizeof(asn_DEF_CSI_RS_IM_ReceptionForFeedback_tags_1[0]), /* 1 */
	asn_DEF_CSI_RS_IM_ReceptionForFeedback_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_RS_IM_ReceptionForFeedback_tags_1)
		/sizeof(asn_DEF_CSI_RS_IM_ReceptionForFeedback_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSI_RS_IM_ReceptionForFeedback_1,
	5,	/* Elements count */
	&asn_SPC_CSI_RS_IM_ReceptionForFeedback_specs_1	/* Additional specs */
};

