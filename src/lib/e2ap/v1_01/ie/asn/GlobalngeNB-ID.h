/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-JER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_GlobalngeNB_ID_H_
#define	_GlobalngeNB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include "ENB-ID-Choice.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GlobalngeNB-ID */
typedef struct GlobalngeNB_ID {
	PLMN_Identity_t	 plmn_id;
	ENB_ID_Choice_t	 enb_id;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GlobalngeNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalngeNB_ID_e2ap_v1_01;
extern asn_SEQUENCE_specifics_t asn_SPC_GlobalngeNB_ID_specs_1_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_GlobalngeNB_ID_1_e2ap_v1_01[2];

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalngeNB_ID_H_ */
#include <asn_internal.h>
