/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-Containers"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-JER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_ProtocolIE_Container_H_
#define	_ProtocolIE_Container_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RICsubscriptionRequest_IEs;
struct RICsubscriptionResponse_IEs;
struct RICsubscriptionFailure_IEs;
struct E42RICsubscriptionRequest_IEs;
struct E42RICsubscriptionDeleteRequest_IEs;
struct RICsubscriptionDeleteRequest_IEs;
struct RICsubscriptionDeleteResponse_IEs;
struct RICsubscriptionDeleteFailure_IEs;
struct RICindication_IEs;
struct RICcontrolRequest_IEs;
struct E42RICcontrolRequest_IEs;
struct RICcontrolAcknowledge_IEs;
struct RICcontrolFailure_IEs;
struct ErrorIndication_IEs;
struct E2setupRequestIEs;
struct E42setupRequestIEs;
struct E2setupResponseIEs;
struct E42setupResponseIEs;
struct E2setupFailureIEs;
struct E2connectionUpdate_IEs;
struct E2connectionUpdateAck_IEs;
struct E2connectionUpdateFailure_IEs;
struct E2nodeConfigurationUpdate_IEs;
struct E2nodeConfigurationUpdateAcknowledge_IEs;
struct E2nodeConfigurationUpdateFailure_IEs;
struct ResetRequestIEs;
struct ResetResponseIEs;
struct RICserviceUpdate_IEs;
struct E2nodeConnected_ItemIEs;
struct RICserviceUpdateAcknowledge_IEs;
struct RICserviceUpdateFailure_IEs;
struct RICserviceQuery_IEs;

/* ProtocolIE-Container */
typedef struct ProtocolIE_Container_1478P0 {
	A_SEQUENCE_OF(struct RICsubscriptionRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P0_t;
typedef struct ProtocolIE_Container_1478P1 {
	A_SEQUENCE_OF(struct RICsubscriptionResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P1_t;
typedef struct ProtocolIE_Container_1478P2 {
	A_SEQUENCE_OF(struct RICsubscriptionFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P2_t;
typedef struct ProtocolIE_Container_1478P3 {
	A_SEQUENCE_OF(struct E42RICsubscriptionRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P3_t;
typedef struct ProtocolIE_Container_1478P4 {
	A_SEQUENCE_OF(struct E42RICsubscriptionDeleteRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P4_t;
typedef struct ProtocolIE_Container_1478P5 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P5_t;
typedef struct ProtocolIE_Container_1478P6 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P6_t;
typedef struct ProtocolIE_Container_1478P7 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P7_t;
typedef struct ProtocolIE_Container_1478P8 {
	A_SEQUENCE_OF(struct RICindication_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P8_t;
typedef struct ProtocolIE_Container_1478P9 {
	A_SEQUENCE_OF(struct RICcontrolRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P9_t;
typedef struct ProtocolIE_Container_1478P10 {
	A_SEQUENCE_OF(struct E42RICcontrolRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P10_t;
typedef struct ProtocolIE_Container_1478P11 {
	A_SEQUENCE_OF(struct RICcontrolAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P11_t;
typedef struct ProtocolIE_Container_1478P12 {
	A_SEQUENCE_OF(struct RICcontrolFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P12_t;
typedef struct ProtocolIE_Container_1478P13 {
	A_SEQUENCE_OF(struct ErrorIndication_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P13_t;
typedef struct ProtocolIE_Container_1478P14 {
	A_SEQUENCE_OF(struct E2setupRequestIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P14_t;
typedef struct ProtocolIE_Container_1478P15 {
	A_SEQUENCE_OF(struct E42setupRequestIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P15_t;
typedef struct ProtocolIE_Container_1478P16 {
	A_SEQUENCE_OF(struct E2setupResponseIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P16_t;
typedef struct ProtocolIE_Container_1478P17 {
	A_SEQUENCE_OF(struct E42setupResponseIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P17_t;
typedef struct ProtocolIE_Container_1478P18 {
	A_SEQUENCE_OF(struct E2setupFailureIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P18_t;
typedef struct ProtocolIE_Container_1478P19 {
	A_SEQUENCE_OF(struct E2connectionUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P19_t;
typedef struct ProtocolIE_Container_1478P20 {
	A_SEQUENCE_OF(struct E2connectionUpdateAck_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P20_t;
typedef struct ProtocolIE_Container_1478P21 {
	A_SEQUENCE_OF(struct E2connectionUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P21_t;
typedef struct ProtocolIE_Container_1478P22 {
	A_SEQUENCE_OF(struct E2nodeConfigurationUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P22_t;
typedef struct ProtocolIE_Container_1478P23 {
	A_SEQUENCE_OF(struct E2nodeConfigurationUpdateAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P23_t;
typedef struct ProtocolIE_Container_1478P24 {
	A_SEQUENCE_OF(struct E2nodeConfigurationUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P24_t;
typedef struct ProtocolIE_Container_1478P25 {
	A_SEQUENCE_OF(struct ResetRequestIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P25_t;
typedef struct ProtocolIE_Container_1478P26 {
	A_SEQUENCE_OF(struct ResetResponseIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P26_t;
typedef struct ProtocolIE_Container_1478P27 {
	A_SEQUENCE_OF(struct RICserviceUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P27_t;
typedef struct ProtocolIE_Container_1478P28 {
	A_SEQUENCE_OF(struct E2nodeConnected_ItemIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P28_t;
typedef struct ProtocolIE_Container_1478P29 {
	A_SEQUENCE_OF(struct RICserviceUpdateAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P29_t;
typedef struct ProtocolIE_Container_1478P30 {
	A_SEQUENCE_OF(struct RICserviceUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P30_t;
typedef struct ProtocolIE_Container_1478P31 {
	A_SEQUENCE_OF(struct RICserviceQuery_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_1478P31_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P0_e2ap_v1_01;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P0_specs_1_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P0_1_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P0_constr_1_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P1_e2ap_v1_01;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P1_specs_3_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P1_3_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P1_constr_3_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P2_e2ap_v1_01;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P2_specs_5_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P2_5_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P2_constr_5_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P3_e2ap_v1_01;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P3_specs_7_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P3_7_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P3_constr_7_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P4_e2ap_v1_01;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P4_specs_9_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P4_9_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P4_constr_9_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P5_e2ap_v1_01;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P5_specs_11_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P5_11_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P5_constr_11_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P6_e2ap_v1_01;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P6_specs_13_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P6_13_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P6_constr_13_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P7_e2ap_v1_01;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P7_specs_15_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P7_15_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P7_constr_15_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P8_e2ap_v1_01;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P8_specs_17_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P8_17_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P8_constr_17_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P9_e2ap_v1_01;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P9_specs_19_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P9_19_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P9_constr_19_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P1_e2ap_v1_010;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P10_specs_21_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P10_21_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P10_constr_21_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P1_e2ap_v1_011;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P11_specs_23_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P11_23_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P11_constr_23_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P1_e2ap_v1_012;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P12_specs_25_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P12_25_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P12_constr_25_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P1_e2ap_v1_013;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P13_specs_27_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P13_27_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P13_constr_27_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P1_e2ap_v1_014;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P14_specs_29_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P14_29_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P14_constr_29_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P1_e2ap_v1_015;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P15_specs_31_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P15_31_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P15_constr_31_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P1_e2ap_v1_016;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P16_specs_33_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P16_33_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P16_constr_33_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P1_e2ap_v1_017;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P17_specs_35_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P17_35_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P17_constr_35_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P1_e2ap_v1_018;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P18_specs_37_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P18_37_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P18_constr_37_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P1_e2ap_v1_019;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P19_specs_39_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P19_39_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P19_constr_39_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P2_e2ap_v1_010;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P20_specs_41_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P20_41_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P20_constr_41_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P2_e2ap_v1_011;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P21_specs_43_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P21_43_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P21_constr_43_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P2_e2ap_v1_012;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P22_specs_45_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P22_45_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P22_constr_45_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P2_e2ap_v1_013;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P23_specs_47_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P23_47_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P23_constr_47_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P2_e2ap_v1_014;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P24_specs_49_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P24_49_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P24_constr_49_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P2_e2ap_v1_015;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P25_specs_51_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P25_51_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P25_constr_51_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P2_e2ap_v1_016;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P26_specs_53_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P26_53_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P26_constr_53_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P2_e2ap_v1_017;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P27_specs_55_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P27_55_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P27_constr_55_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P2_e2ap_v1_018;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P28_specs_57_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P28_57_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P28_constr_57_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P2_e2ap_v1_019;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P29_specs_59_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P29_59_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P29_constr_59_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P3_e2ap_v1_010;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P30_specs_61_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P30_61_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P30_constr_61_e2ap_v1_01;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_1478P3_e2ap_v1_011;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_1478P31_specs_63_e2ap_v1_01;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_1478P31_63_e2ap_v1_01[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_1478P31_constr_63_e2ap_v1_01;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolIE_Container_H_ */
#include <asn_internal.h>