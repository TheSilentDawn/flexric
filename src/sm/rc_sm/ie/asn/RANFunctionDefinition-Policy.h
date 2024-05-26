/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_RANFunctionDefinition_Policy_H_
#define	_RANFunctionDefinition_Policy_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RANFunctionDefinition_Policy_Item;

/* RANFunctionDefinition-Policy */
typedef struct RANFunctionDefinition_Policy {
	struct RANFunctionDefinition_Policy__ric_PolicyStyle_List {
		A_SEQUENCE_OF(struct RANFunctionDefinition_Policy_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ric_PolicyStyle_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANFunctionDefinition_Policy_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANFunctionDefinition_Policy;
extern asn_SEQUENCE_specifics_t asn_SPC_RANFunctionDefinition_Policy_specs_1;
extern asn_TYPE_member_t asn_MBR_RANFunctionDefinition_Policy_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RANFunctionDefinition_Policy_H_ */
#include <asn_internal.h>
