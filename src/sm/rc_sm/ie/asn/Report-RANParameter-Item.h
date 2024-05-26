/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_Report_RANParameter_Item_H_
#define	_Report_RANParameter_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANParameter-ID.h"
#include "RANParameter-Name.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RANParameter_Definition;

/* Report-RANParameter-Item */
typedef struct Report_RANParameter_Item {
	RANParameter_ID_t	 ranParameter_ID;
	RANParameter_Name_t	 ranParameter_name;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RANParameter_Definition	*ranParameter_Definition;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Report_RANParameter_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Report_RANParameter_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_Report_RANParameter_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_Report_RANParameter_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Report_RANParameter_Item_H_ */
#include <asn_internal.h>
