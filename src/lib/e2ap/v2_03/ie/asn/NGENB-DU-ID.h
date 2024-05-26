/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e42ap_v2_03.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_NGENB_DU_ID_H_
#define	_NGENB_DU_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NGENB-DU-ID */
typedef INTEGER_t	 NGENB_DU_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGENB_DU_ID_constr_1_e2ap_v2_03;
extern asn_TYPE_descriptor_t asn_DEF_NGENB_DU_ID_e2ap_v2_03;
asn_struct_free_f NGENB_DU_ID_free;
asn_struct_print_f NGENB_DU_ID_print;
asn_constr_check_f NGENB_DU_ID_constraint_e2ap_v2_03;
ber_type_decoder_f NGENB_DU_ID_decode_ber;
der_type_encoder_f NGENB_DU_ID_encode_der;
xer_type_decoder_f NGENB_DU_ID_decode_xer;
xer_type_encoder_f NGENB_DU_ID_encode_xer;
jer_type_encoder_f NGENB_DU_ID_encode_jer;
per_type_decoder_f NGENB_DU_ID_decode_uper;
per_type_encoder_f NGENB_DU_ID_encode_uper;
per_type_decoder_f NGENB_DU_ID_decode_aper;
per_type_encoder_f NGENB_DU_ID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGENB_DU_ID_H_ */
#include <asn_internal.h>
