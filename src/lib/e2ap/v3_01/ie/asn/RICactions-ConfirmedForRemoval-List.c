/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e42ap_v3_01.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "RICactions-ConfirmedForRemoval-List.h"

#include "ProtocolIE-SingleContainer.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_RICactions_ConfirmedForRemoval_List_constr_1_e2ap_v3_01 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  0,  16 }	/* (SIZE(0..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_RICactions_ConfirmedForRemoval_List_1_e2ap_v3_01[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ProtocolIE_SingleContainer_2694P1_e2ap_v3_017,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RICactions_ConfirmedForRemoval_List_e2ap_v3_01_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_RICactions_ConfirmedForRemoval_List_specs_1_e2ap_v3_01 = {
	sizeof(struct RICactions_ConfirmedForRemoval_List),
	offsetof(struct RICactions_ConfirmedForRemoval_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_RICactions_ConfirmedForRemoval_List_e2ap_v3_01 = {
	"RICactions-ConfirmedForRemoval-List",
	"RICactions-ConfirmedForRemoval-List",
	&asn_OP_SEQUENCE_e2ap_v3_01_OF,
	asn_DEF_RICactions_ConfirmedForRemoval_List_e2ap_v3_01_tags_1,
	sizeof(asn_DEF_RICactions_ConfirmedForRemoval_List_e2ap_v3_01_tags_1)
		/sizeof(asn_DEF_RICactions_ConfirmedForRemoval_List_e2ap_v3_01_tags_1[0]), /* 1 */
	asn_DEF_RICactions_ConfirmedForRemoval_List_e2ap_v3_01_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICactions_ConfirmedForRemoval_List_e2ap_v3_01_tags_1)
		/sizeof(asn_DEF_RICactions_ConfirmedForRemoval_List_e2ap_v3_01_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_RICactions_ConfirmedForRemoval_List_constr_1_e2ap_v3_01,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_RICactions_ConfirmedForRemoval_List_1_e2ap_v3_01,
	1,	/* Single element */
	&asn_SPC_RICactions_ConfirmedForRemoval_List_specs_1_e2ap_v3_01	/* Additional specs */
};
