/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "../../ASN1_Input/E2SM_KPM_V_3_0.asn1"
 * 	`asn1c -D ./../../E2_output/E2SM_KPM_v3.0_output -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "UEID-NG-ENB.h"

#include "GlobalNgENB-ID.h"
#include "GlobalNGRANNodeID.h"
asn_TYPE_member_t asn_MBR_UEID_NG_ENB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEID_NG_ENB, amf_UE_NGAP_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AMF_UE_NGAP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"amf-UE-NGAP-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEID_NG_ENB, guami),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GUAMI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"guami"
		},
	{ ATF_POINTER, 4, offsetof(struct UEID_NG_ENB, ng_eNB_CU_UE_W1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGENB_CU_UE_W1AP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-eNB-CU-UE-W1AP-ID"
		},
	{ ATF_POINTER, 3, offsetof(struct UEID_NG_ENB, m_NG_RAN_UE_XnAP_ID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NG_RANnodeUEXnAPID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m-NG-RAN-UE-XnAP-ID"
		},
	{ ATF_POINTER, 2, offsetof(struct UEID_NG_ENB, globalNgENB_ID),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GlobalNgENB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalNgENB-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct UEID_NG_ENB, globalNG_RANNode_ID),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GlobalNGRANNodeID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalNG-RANNode-ID"
		},
};
static const int asn_MAP_UEID_NG_ENB_oms_1[] = { 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_UEID_NG_ENB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEID_NG_ENB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* amf-UE-NGAP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* guami */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ng-eNB-CU-UE-W1AP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* m-NG-RAN-UE-XnAP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* globalNgENB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* globalNG-RANNode-ID */
};
asn_SEQUENCE_specifics_t asn_SPC_UEID_NG_ENB_specs_1 = {
	sizeof(struct UEID_NG_ENB),
	offsetof(struct UEID_NG_ENB, _asn_ctx),
	asn_MAP_UEID_NG_ENB_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_UEID_NG_ENB_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEID_NG_ENB = {
	"UEID-NG-ENB",
	"UEID-NG-ENB",
	&asn_OP_SEQUENCE,
	asn_DEF_UEID_NG_ENB_tags_1,
	sizeof(asn_DEF_UEID_NG_ENB_tags_1)
		/sizeof(asn_DEF_UEID_NG_ENB_tags_1[0]), /* 1 */
	asn_DEF_UEID_NG_ENB_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEID_NG_ENB_tags_1)
		/sizeof(asn_DEF_UEID_NG_ENB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEID_NG_ENB_1,
	6,	/* Elements count */
	&asn_SPC_UEID_NG_ENB_specs_1	/* Additional specs */
};

