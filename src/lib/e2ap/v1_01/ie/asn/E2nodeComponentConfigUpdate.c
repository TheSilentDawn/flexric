/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-JER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "E2nodeComponentConfigUpdate.h"

#include "E2nodeComponentConfigUpdateGNB.h"
#include "E2nodeComponentConfigUpdateENgNB.h"
#include "E2nodeComponentConfigUpdateNGeNB.h"
#include "E2nodeComponentConfigUpdateENB.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_E2nodeComponentConfigUpdate_constr_1_e2ap_v1_01 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_E2nodeComponentConfigUpdate_1_e2ap_v1_01[] = {
	{ ATF_POINTER, 0, offsetof(struct E2nodeComponentConfigUpdate, choice.gNBconfigUpdate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2nodeComponentConfigUpdate_e2ap_v1_01GNB,
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
		"gNBconfigUpdate"
		},
	{ ATF_POINTER, 0, offsetof(struct E2nodeComponentConfigUpdate, choice.en_gNBconfigUpdate),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2nodeComponentConfigUpdate_e2ap_v1_01ENgNB,
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
		"en-gNBconfigUpdate"
		},
	{ ATF_POINTER, 0, offsetof(struct E2nodeComponentConfigUpdate, choice.ng_eNBconfigUpdate),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2nodeComponentConfigUpdate_e2ap_v1_01NGeNB,
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
		"ng-eNBconfigUpdate"
		},
	{ ATF_POINTER, 0, offsetof(struct E2nodeComponentConfigUpdate, choice.eNBconfigUpdate),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2nodeComponentConfigUpdate_e2ap_v1_01ENB,
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
		"eNBconfigUpdate"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_E2nodeComponentConfigUpdate_tag2el_1_e2ap_v1_01[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gNBconfigUpdate */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* en-gNBconfigUpdate */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ng-eNBconfigUpdate */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* eNBconfigUpdate */
};
asn_CHOICE_specifics_t asn_SPC_E2nodeComponentConfigUpdate_specs_1_e2ap_v1_01 = {
	sizeof(struct E2nodeComponentConfigUpdate),
	offsetof(struct E2nodeComponentConfigUpdate, _asn_ctx),
	offsetof(struct E2nodeComponentConfigUpdate, present),
	sizeof(((struct E2nodeComponentConfigUpdate *)0)->present),
	asn_MAP_E2nodeComponentConfigUpdate_tag2el_1_e2ap_v1_01,
	4,	/* Count of tags in the map */
	0, 0,
	4	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_E2nodeComponentConfigUpdate_e2ap_v1_01 = {
	"E2nodeComponentConfigUpdate",
	"E2nodeComponentConfigUpdate",
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
		&asn_PER_type_E2nodeComponentConfigUpdate_constr_1_e2ap_v1_01,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint_e2ap_v1_01
	},
	asn_MBR_E2nodeComponentConfigUpdate_1_e2ap_v1_01,
	4,	/* Elements count */
	&asn_SPC_E2nodeComponentConfigUpdate_specs_1_e2ap_v1_01	/* Additional specs */
};

