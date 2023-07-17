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

#include "MeasurementInfo-Action-Item-v300.h"

#include "BinRangeDefinition.h"
asn_TYPE_member_t asn_MBR_MeasurementInfo_Action_Item_v300_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementInfo_Action_Item_v300, measName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementTypeName,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measName"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasurementInfo_Action_Item_v300, measID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementTypeID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measID"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementInfo_Action_Item_v300, binRangeDef),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BinRangeDefinition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"binRangeDef"
		},
};
static const int asn_MAP_MeasurementInfo_Action_Item_v300_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_MeasurementInfo_Action_Item_v300_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasurementInfo_Action_Item_v300_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measName */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* binRangeDef */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasurementInfo_Action_Item_v300_specs_1 = {
	sizeof(struct MeasurementInfo_Action_Item_v300),
	offsetof(struct MeasurementInfo_Action_Item_v300, _asn_ctx),
	asn_MAP_MeasurementInfo_Action_Item_v300_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasurementInfo_Action_Item_v300_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasurementInfo_Action_Item_v300 = {
	"MeasurementInfo-Action-Item-v300",
	"MeasurementInfo-Action-Item-v300",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasurementInfo_Action_Item_v300_tags_1,
	sizeof(asn_DEF_MeasurementInfo_Action_Item_v300_tags_1)
		/sizeof(asn_DEF_MeasurementInfo_Action_Item_v300_tags_1[0]), /* 1 */
	asn_DEF_MeasurementInfo_Action_Item_v300_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasurementInfo_Action_Item_v300_tags_1)
		/sizeof(asn_DEF_MeasurementInfo_Action_Item_v300_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasurementInfo_Action_Item_v300_1,
	3,	/* Elements count */
	&asn_SPC_MeasurementInfo_Action_Item_v300_specs_1	/* Additional specs */
};

