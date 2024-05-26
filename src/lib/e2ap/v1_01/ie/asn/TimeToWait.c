/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-JER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "TimeToWait.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_TimeToWait_constr_1_e2ap_v1_01 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_TimeToWait_value2enum_1_e2ap_v1_01[] = {
	{ 0,	3,	"v1s" },
	{ 1,	3,	"v2s" },
	{ 2,	3,	"v5s" },
	{ 3,	4,	"v10s" },
	{ 4,	4,	"v20s" },
	{ 5,	4,	"v60s" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_TimeToWait_enum2value_1_e2ap_v1_01[] = {
	3,	/* v10s(3) */
	0,	/* v1s(0) */
	4,	/* v20s(4) */
	1,	/* v2s(1) */
	2,	/* v5s(2) */
	5	/* v60s(5) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_TimeToWait_specs_1_e2ap_v1_01 = {
	asn_MAP_TimeToWait_value2enum_1_e2ap_v1_01,	/* "tag" => N; sorted by tag */
	asn_MAP_TimeToWait_enum2value_1_e2ap_v1_01,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TimeToWait_e2ap_v1_01_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TimeToWait_e2ap_v1_01 = {
	"TimeToWait",
	"TimeToWait",
	&asn_OP_NativeEnumerated_e2ap_v1_01,
	asn_DEF_TimeToWait_e2ap_v1_01_tags_1,
	sizeof(asn_DEF_TimeToWait_e2ap_v1_01_tags_1)
		/sizeof(asn_DEF_TimeToWait_e2ap_v1_01_tags_1[0]), /* 1 */
	asn_DEF_TimeToWait_e2ap_v1_01_tags_1,	/* Same as above */
	sizeof(asn_DEF_TimeToWait_e2ap_v1_01_tags_1)
		/sizeof(asn_DEF_TimeToWait_e2ap_v1_01_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_TimeToWait_constr_1_e2ap_v1_01,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TimeToWait_specs_1_e2ap_v1_01	/* Additional specs */
};

