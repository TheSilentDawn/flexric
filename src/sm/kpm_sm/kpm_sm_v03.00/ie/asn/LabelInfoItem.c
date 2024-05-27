/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v03.00_standard.asn1"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "LabelInfoItem.h"

asn_TYPE_member_t asn_MBR_LabelInfoItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LabelInfoItem, measLabel),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementLabel,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"measLabel"
		},
};
static const ber_tlv_tag_t asn_DEF_LabelInfoItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LabelInfoItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measLabel */
};
asn_SEQUENCE_specifics_t asn_SPC_LabelInfoItem_specs_1 = {
	sizeof(struct LabelInfoItem),
	offsetof(struct LabelInfoItem, _asn_ctx),
	asn_MAP_LabelInfoItem_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LabelInfoItem = {
	"LabelInfoItem",
	"LabelInfoItem",
	&asn_OP_SEQUENCE,
	asn_DEF_LabelInfoItem_tags_1,
	sizeof(asn_DEF_LabelInfoItem_tags_1)
		/sizeof(asn_DEF_LabelInfoItem_tags_1[0]), /* 1 */
	asn_DEF_LabelInfoItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_LabelInfoItem_tags_1)
		/sizeof(asn_DEF_LabelInfoItem_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LabelInfoItem_1,
	1,	/* Elements count */
	&asn_SPC_LabelInfoItem_specs_1	/* Additional specs */
};

