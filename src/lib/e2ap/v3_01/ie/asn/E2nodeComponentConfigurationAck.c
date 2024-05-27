/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e42ap_v3_01.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "E2nodeComponentConfigurationAck.h"

#include "Cause.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_updateOutcome_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_updateOutcome_value2enum_2[] = {
	{ 0,	7,	"success" },
	{ 1,	7,	"failure" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_updateOutcome_enum2value_2[] = {
	1,	/* failure(1) */
	0	/* success(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_updateOutcome_specs_2 = {
	asn_MAP_updateOutcome_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_updateOutcome_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_updateOutcome_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_updateOutcome_2 = {
	"updateOutcome",
	"updateOutcome",
	&asn_OP_NativeEnumerated,
	asn_DEF_updateOutcome_tags_2,
	sizeof(asn_DEF_updateOutcome_tags_2)
		/sizeof(asn_DEF_updateOutcome_tags_2[0]) - 1, /* 1 */
	asn_DEF_updateOutcome_tags_2,	/* Same as above */
	sizeof(asn_DEF_updateOutcome_tags_2)
		/sizeof(asn_DEF_updateOutcome_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_updateOutcome_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_updateOutcome_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_E2nodeComponentConfigurationAck_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2nodeComponentConfigurationAck, updateOutcome),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_updateOutcome_2,
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
		"updateOutcome"
		},
	{ ATF_POINTER, 1, offsetof(struct E2nodeComponentConfigurationAck, failureCause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Cause,
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
		"failureCause"
		},
};
static const int asn_MAP_E2nodeComponentConfigurationAck_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_E2nodeComponentConfigurationAck_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2nodeComponentConfigurationAck_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* updateOutcome */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* failureCause */
};
asn_SEQUENCE_specifics_t asn_SPC_E2nodeComponentConfigurationAck_specs_1 = {
	sizeof(struct E2nodeComponentConfigurationAck),
	offsetof(struct E2nodeComponentConfigurationAck, _asn_ctx),
	asn_MAP_E2nodeComponentConfigurationAck_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_E2nodeComponentConfigurationAck_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2nodeComponentConfigurationAck = {
	"E2nodeComponentConfigurationAck",
	"E2nodeComponentConfigurationAck",
	&asn_OP_SEQUENCE,
	asn_DEF_E2nodeComponentConfigurationAck_tags_1,
	sizeof(asn_DEF_E2nodeComponentConfigurationAck_tags_1)
		/sizeof(asn_DEF_E2nodeComponentConfigurationAck_tags_1[0]), /* 1 */
	asn_DEF_E2nodeComponentConfigurationAck_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2nodeComponentConfigurationAck_tags_1)
		/sizeof(asn_DEF_E2nodeComponentConfigurationAck_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2nodeComponentConfigurationAck_1,
	2,	/* Elements count */
	&asn_SPC_E2nodeComponentConfigurationAck_specs_1	/* Additional specs */
};

