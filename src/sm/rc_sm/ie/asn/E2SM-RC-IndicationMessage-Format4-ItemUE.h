/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_E2SM_RC_IndicationMessage_Format4_ItemUE_H_
#define	_E2SM_RC_IndicationMessage_Format4_ItemUE_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UEID.h"
#include <OCTET_STRING.h>
#include "CGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM-RC-IndicationMessage-Format4-ItemUE */
typedef struct E2SM_RC_IndicationMessage_Format4_ItemUE {
	UEID_t	 ueID;
	OCTET_STRING_t	*ueContextInfo;	/* OPTIONAL */
	CGI_t	 cellGlobal_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_RC_IndicationMessage_Format4_ItemUE_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_RC_IndicationMessage_Format4_ItemUE;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_IndicationMessage_Format4_ItemUE_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_RC_IndicationMessage_Format4_ItemUE_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_RC_IndicationMessage_Format4_ItemUE_H_ */
#include <asn_internal.h>
