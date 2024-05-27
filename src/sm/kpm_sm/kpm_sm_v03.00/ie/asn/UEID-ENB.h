/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_kpm_v03.00_standard.asn1"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_UEID_ENB_H_
#define	_UEID_ENB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MME-UE-S1AP-ID.h"
#include "GUMMEI.h"
#include "ENB-UE-X2AP-ID.h"
#include "ENB-UE-X2AP-ID-Extension.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GlobalENB_ID;

/* UEID-ENB */
typedef struct UEID_ENB {
	MME_UE_S1AP_ID_t	 mME_UE_S1AP_ID;
	GUMMEI_t	 gUMMEI;
	ENB_UE_X2AP_ID_t	*m_eNB_UE_X2AP_ID;	/* OPTIONAL */
	ENB_UE_X2AP_ID_Extension_t	*m_eNB_UE_X2AP_ID_Extension;	/* OPTIONAL */
	struct GlobalENB_ID	*globalENB_ID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEID_ENB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEID_ENB;
extern asn_SEQUENCE_specifics_t asn_SPC_UEID_ENB_specs_1;
extern asn_TYPE_member_t asn_MBR_UEID_ENB_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _UEID_ENB_H_ */
#include <asn_internal.h>