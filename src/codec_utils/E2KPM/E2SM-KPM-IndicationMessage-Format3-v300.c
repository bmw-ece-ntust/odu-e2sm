/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
<<<<<<< HEAD
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300-modified.asn1"
=======
<<<<<<< Updated upstream
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300.asn1"
=======
 * 	found in "O-RAN.WG3.E2SM-KPM-v202v300-modified.asn1"
>>>>>>> Stashed changes
>>>>>>> 65785e7fdb2a1f778048b4a2e22e3222113b14be
 * 	`asn1c -pdu=auto -fcompound-names -fno-include-deps -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "E2SM-KPM-IndicationMessage-Format3-v300.h"

asn_TYPE_member_t asn_MBR_E2SM_KPM_IndicationMessage_Format3_v300_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_IndicationMessage_Format3_v300, ueMeasReportList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEMeasurementReportList_v300,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueMeasReportList"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_KPM_IndicationMessage_Format3_v300_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_KPM_IndicationMessage_Format3_v300_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ueMeasReportList */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_IndicationMessage_Format3_v300_specs_1 = {
	sizeof(struct E2SM_KPM_IndicationMessage_Format3_v300),
	offsetof(struct E2SM_KPM_IndicationMessage_Format3_v300, _asn_ctx),
	asn_MAP_E2SM_KPM_IndicationMessage_Format3_v300_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_IndicationMessage_Format3_v300 = {
	"E2SM-KPM-IndicationMessage-Format3-v300",
	"E2SM-KPM-IndicationMessage-Format3-v300",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_KPM_IndicationMessage_Format3_v300_tags_1,
	sizeof(asn_DEF_E2SM_KPM_IndicationMessage_Format3_v300_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_IndicationMessage_Format3_v300_tags_1[0]), /* 1 */
	asn_DEF_E2SM_KPM_IndicationMessage_Format3_v300_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_KPM_IndicationMessage_Format3_v300_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_IndicationMessage_Format3_v300_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_KPM_IndicationMessage_Format3_v300_1,
	1,	/* Elements count */
	&asn_SPC_E2SM_KPM_IndicationMessage_Format3_v300_specs_1	/* Additional specs */
};

