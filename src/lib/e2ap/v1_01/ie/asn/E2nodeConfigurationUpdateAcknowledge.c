/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-JER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "E2nodeConfigurationUpdateAcknowledge.h"

asn_TYPE_member_t asn_MBR_E2nodeConfigurationUpdateAcknowledge_1_e2ap_v1_01[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2nodeConfigurationUpdateAcknowledge, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Container_1478P2_e2ap_v1_013,
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
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_E2nodeConfigurationUpdate_e2ap_v1_01Acknowledge_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2nodeConfigurationUpdateAcknowledge_tag2el_1_e2ap_v1_01[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_E2nodeConfigurationUpdateAcknowledge_specs_1_e2ap_v1_01 = {
	sizeof(struct E2nodeConfigurationUpdateAcknowledge),
	offsetof(struct E2nodeConfigurationUpdateAcknowledge, _asn_ctx),
	asn_MAP_E2nodeConfigurationUpdateAcknowledge_tag2el_1_e2ap_v1_01,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2nodeConfigurationUpdate_e2ap_v1_01Acknowledge = {
	"E2nodeConfigurationUpdateAcknowledge",
	"E2nodeConfigurationUpdateAcknowledge",
	&asn_OP_SEQUENCE_e2ap_v1_01,
	asn_DEF_E2nodeConfigurationUpdate_e2ap_v1_01Acknowledge_tags_1,
	sizeof(asn_DEF_E2nodeConfigurationUpdate_e2ap_v1_01Acknowledge_tags_1)
		/sizeof(asn_DEF_E2nodeConfigurationUpdate_e2ap_v1_01Acknowledge_tags_1[0]), /* 1 */
	asn_DEF_E2nodeConfigurationUpdate_e2ap_v1_01Acknowledge_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2nodeConfigurationUpdate_e2ap_v1_01Acknowledge_tags_1)
		/sizeof(asn_DEF_E2nodeConfigurationUpdate_e2ap_v1_01Acknowledge_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v1_01
	},
	asn_MBR_E2nodeConfigurationUpdateAcknowledge_1_e2ap_v1_01,
	1,	/* Elements count */
	&asn_SPC_E2nodeConfigurationUpdateAcknowledge_specs_1_e2ap_v1_01	/* Additional specs */
};

