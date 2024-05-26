/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN1C-UsefulInformationObjectClasses"
 * 	found in "/opt/asn1c/share/asn1c/standard-modules/ASN1C-UsefulInformationObjectClasses.asn1"
 * 	`asn1c -gen-APER -no-gen-JER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "EXTERNAL.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_encoding_constr_5_e2ap_v1_01 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_encoding_5_e2ap_v1_01[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EXTERNAL__encoding, choice.single_ASN1_type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ANY_e2ap_v1_01,
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
		"single-ASN1-type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EXTERNAL__encoding, choice.octet_aligned),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING_e2ap_v1_01,
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
		"octet-aligned"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EXTERNAL__encoding, choice.arbitrary),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING_e2ap_v1_01,
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
		"arbitrary"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_encoding_tag2el_5_e2ap_v1_01[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* single-ASN1-type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* octet-aligned */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* arbitrary */
};
static asn_CHOICE_specifics_t asn_SPC_encoding_specs_5_e2ap_v1_01 = {
	sizeof(struct EXTERNAL__encoding),
	offsetof(struct EXTERNAL__encoding, _asn_ctx),
	offsetof(struct EXTERNAL__encoding, present),
	sizeof(((struct EXTERNAL__encoding *)0)->present),
	asn_MAP_encoding_tag2el_5_e2ap_v1_01,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_encoding_5_e2ap_v1_01 = {
	"encoding",
	"encoding",
	&asn_OP_CHOICE_e2ap_v1_01,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_encoding_constr_5_e2ap_v1_01,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint_e2ap_v1_01
	},
	asn_MBR_encoding_5_e2ap_v1_01,
	3,	/* Elements count */
	&asn_SPC_encoding_specs_5_e2ap_v1_01	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_EXTERNAL_1_e2ap_v1_01[] = {
	{ ATF_POINTER, 3, offsetof(struct EXTERNAL, direct_reference),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_OBJECT_IDENTIFIER_e2ap_v1_01,
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
		"direct-reference"
		},
	{ ATF_POINTER, 2, offsetof(struct EXTERNAL, indirect_reference),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger_e2ap_v1_01,
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
		"indirect-reference"
		},
	{ ATF_POINTER, 1, offsetof(struct EXTERNAL, data_value_descriptor),
		(ASN_TAG_CLASS_UNIVERSAL | (7 << 2)),
		0,
		&asn_DEF_ObjectDescriptor_e2ap_v1_01,
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
		"data-value-descriptor"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EXTERNAL, encoding),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_encoding_5_e2ap_v1_01,
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
		"encoding"
		},
};
static const int asn_MAP_EXTERNAL_oms_1_e2ap_v1_01[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_EXTERNAL_e2ap_v1_01_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EXTERNAL_tag2el_1_e2ap_v1_01[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* indirect-reference */
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 0, 0, 0 }, /* direct-reference */
    { (ASN_TAG_CLASS_UNIVERSAL | (7 << 2)), 2, 0, 0 }, /* data-value-descriptor */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 3, 0, 0 }, /* single-ASN1-type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 3, 0, 0 }, /* octet-aligned */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 3, 0, 0 } /* arbitrary */
};
static asn_SEQUENCE_specifics_t asn_SPC_EXTERNAL_specs_1_e2ap_v1_01 = {
	sizeof(struct EXTERNAL),
	offsetof(struct EXTERNAL, _asn_ctx),
	asn_MAP_EXTERNAL_tag2el_1_e2ap_v1_01,
	6,	/* Count of tags in the map */
	asn_MAP_EXTERNAL_oms_1_e2ap_v1_01,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EXTERNAL_e2ap_v1_01 = {
	"EXTERNAL",
	"EXTERNAL",
	&asn_OP_SEQUENCE_e2ap_v1_01,
	asn_DEF_EXTERNAL_e2ap_v1_01_tags_1,
	sizeof(asn_DEF_EXTERNAL_e2ap_v1_01_tags_1)
		/sizeof(asn_DEF_EXTERNAL_e2ap_v1_01_tags_1[0]) - 1, /* 1 */
	asn_DEF_EXTERNAL_e2ap_v1_01_tags_1,	/* Same as above */
	sizeof(asn_DEF_EXTERNAL_e2ap_v1_01_tags_1)
		/sizeof(asn_DEF_EXTERNAL_e2ap_v1_01_tags_1[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v1_01
	},
	asn_MBR_EXTERNAL_1_e2ap_v1_01,
	4,	/* Elements count */
	&asn_SPC_EXTERNAL_specs_1_e2ap_v1_01	/* Additional specs */
};

