/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Descriptions"
 * 	found in "e42ap_v3_01.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "SuccessfulOutcome.h"

static const long asn_VAL_1_id_RICsubscription_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 8;
static const long asn_VAL_1_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_2_id_RICsubscriptionDelete_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 9;
static const long asn_VAL_2_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_3_id_RICsubscriptionModification_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 14;
static const long asn_VAL_3_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_4_id_RICsubscriptionModificationRequired_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 15;
static const long asn_VAL_4_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_5_id_RICquery_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 16;
static const long asn_VAL_5_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_6_id_RICserviceUpdate_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 7;
static const long asn_VAL_6_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_7_id_RICcontrol_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 4;
static const long asn_VAL_7_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_8_id_E2setup_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 1;
static const long asn_VAL_8_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_9_id_E2nodeConfigurationUpdate_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 10;
static const long asn_VAL_9_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_10_id_E2connectionUpdate_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 11;
static const long asn_VAL_10_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_11_id_Reset_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 3;
static const long asn_VAL_11_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_12_id_E2removal_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 13;
static const long asn_VAL_12_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_13_id_E42setup_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 17;
static const long asn_VAL_13_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_14_id_E42RICsubscription_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 18;
static const long asn_VAL_14_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_15_id_E42RICsubscriptionDelete_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 19;
static const long asn_VAL_15_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_16_id_E42RICcontrol_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 20;
static const long asn_VAL_16_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 0;
static const long asn_VAL_17_id_RICindication_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 5;
static const long asn_VAL_17_ignore_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 1;
static const long asn_VAL_18_id_RICserviceQuery_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 6;
static const long asn_VAL_18_ignore_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 1;
static const long asn_VAL_19_id_ErrorIndication_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 2;
static const long asn_VAL_19_ignore_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 1;
static const long asn_VAL_20_id_RICsubscriptionDeleteRequired_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 12;
static const long asn_VAL_20_ignore_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = 1;
static const asn_ioc_cell_t asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_rows[] = {
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICsubscriptionRequest_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionResponse_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionFailure_e2ap_v3_01 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_1_id_RICsubscription_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_1_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICsubscriptionDeleteRequest_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionDeleteResponse_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionDeleteFailure_e2ap_v3_01 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_2_id_RICsubscriptionDelete_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_2_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICsubscriptionModificationRequest_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionModificationResponse_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionModificationFailure_e2ap_v3_01 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_3_id_RICsubscriptionModification_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_3_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICsubscriptionModificationRequired_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionModificationConfirm_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionModificationRefuse_e2ap_v3_01 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_4_id_RICsubscriptionModificationRequired_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_4_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICQueryRequest_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICQueryResponse_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICQueryFailure_e2ap_v3_01 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_5_id_RICquery_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_5_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICserviceUpdate_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICserviceUpdate_e2ap_v3_01Acknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICserviceUpdate_e2ap_v3_01Failure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_6_id_RICserviceUpdate_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_6_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICcontrolRequest_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICcontrolAcknowledge_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICcontrolFailure_e2ap_v3_01 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_7_id_RICcontrol_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_7_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E2setupRequest_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_E2setupResponse_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_E2setupFailure_e2ap_v3_01 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_8_id_E2setup_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_8_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E2nodeConfigurationUpdate_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_E2nodeConfigurationUpdate_e2ap_v3_01Acknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_E2nodeConfigurationUpdate_e2ap_v3_01Failure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_9_id_E2nodeConfigurationUpdate_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_9_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E2connectionUpdate_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_E2connectionUpdate_e2ap_v3_01Acknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_E2connectionUpdate_e2ap_v3_01Failure },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_10_id_E2connectionUpdate_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_10_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ResetRequest_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_ResetResponse_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_11_id_Reset_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_11_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E2RemovalRequest_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_E2RemovalResponse_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_E2RemovalFailure_e2ap_v3_01 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_12_id_E2removal_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_12_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E42setupRequest_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_E42setupResponse_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_E2setupFailure_e2ap_v3_01 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_13_id_E42setup_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_13_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E42RICsubscriptionRequest_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionResponse_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionFailure_e2ap_v3_01 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_14_id_E42RICsubscription_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_14_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E42RICsubscriptionDeleteRequest_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionDeleteResponse_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICsubscriptionDeleteFailure_e2ap_v3_01 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_15_id_E42RICsubscriptionDelete_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_15_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_E42RICcontrolRequest_e2ap_v3_01 },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_RICcontrolAcknowledge_e2ap_v3_01 },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_RICcontrolFailure_e2ap_v3_01 },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_16_id_E42RICcontrol_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_16_reject_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICindication_e2ap_v3_01 },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_17_id_RICindication_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_17_ignore_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICserviceQuery_e2ap_v3_01 },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_18_id_RICserviceQuery_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_18_ignore_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_ErrorIndication_e2ap_v3_01 },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_19_id_ErrorIndication_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_19_ignore_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_RICsubscriptionDeleteRequired_e2ap_v3_01 },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_ProcedureCode_e2ap_v3_01, &asn_VAL_20_id_RICsubscriptionDeleteRequired_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 },
	{ "&criticality", aioc__value, &asn_DEF_Criticality_e2ap_v3_01, &asn_VAL_20_ignore_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 }
};
static const asn_ioc_set_t asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01[] = {
	{ 20, 5, asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_rows }
};
static int
memb_procedureCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 255L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_type_selector_result_t
select_SuccessfulOutcome_criticality_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 4; /* &criticality */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct SuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_type_selector_result_t
select_SuccessfulOutcome_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_E2AP_ELEMENTARY_PROCEDURES_1_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 1; /* &SuccessfulOutcome */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct SuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_procedureCode_constr_2_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_criticality_constr_3_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_value_constr_4_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_value_4_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICsubscriptionResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionResponse_e2ap_v3_01,
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
		"RICsubscriptionResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICsubscriptionDeleteResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionDeleteResponse_e2ap_v3_01,
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
		"RICsubscriptionDeleteResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICsubscriptionModificationResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionModificationResponse_e2ap_v3_01,
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
		"RICsubscriptionModificationResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICsubscriptionModificationConfirm),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionModificationConfirm_e2ap_v3_01,
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
		"RICsubscriptionModificationConfirm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICQueryResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICQueryResponse_e2ap_v3_01,
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
		"RICQueryResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICserviceUpdateAcknowledge),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICserviceUpdate_e2ap_v3_01Acknowledge,
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
		"RICserviceUpdateAcknowledge"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICcontrolAcknowledge),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICcontrolAcknowledge_e2ap_v3_01,
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
		"RICcontrolAcknowledge"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.E2setupResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2setupResponse_e2ap_v3_01,
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
		"E2setupResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.E2nodeConfigurationUpdateAcknowledge),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2nodeConfigurationUpdate_e2ap_v3_01Acknowledge,
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
		"E2nodeConfigurationUpdateAcknowledge"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.E2connectionUpdateAcknowledge),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2connectionUpdate_e2ap_v3_01Acknowledge,
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
		"E2connectionUpdateAcknowledge"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.ResetResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ResetResponse_e2ap_v3_01,
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
		"ResetResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.E2RemovalResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2RemovalResponse_e2ap_v3_01,
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
		"E2RemovalResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.E42setupResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E42setupResponse_e2ap_v3_01,
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
		"E42setupResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICsubscriptionResponse_1),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionResponse_e2ap_v3_01,
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
		"RICsubscriptionResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICsubscriptionDeleteResponse_1),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICsubscriptionDeleteResponse_e2ap_v3_01,
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
		"RICsubscriptionDeleteResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome__value, choice.RICcontrolAcknowledge_1),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RICcontrolAcknowledge_e2ap_v3_01,
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
		"RICcontrolAcknowledge"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_value_tag2el_4_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 15 }, /* RICsubscriptionResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 14 }, /* RICsubscriptionDeleteResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 13 }, /* RICsubscriptionModificationResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 12 }, /* RICsubscriptionModificationConfirm */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 11 }, /* RICQueryResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5, 10 }, /* RICserviceUpdateAcknowledge */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 6, -6, 9 }, /* RICcontrolAcknowledge */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 7, -7, 8 }, /* E2setupResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 8, -8, 7 }, /* E2nodeConfigurationUpdateAcknowledge */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 9, -9, 6 }, /* E2connectionUpdateAcknowledge */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 10, -10, 5 }, /* ResetResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 11, -11, 4 }, /* E2RemovalResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 12, -12, 3 }, /* E42setupResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 13, -13, 2 }, /* RICsubscriptionResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 14, -14, 1 }, /* RICsubscriptionDeleteResponse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 15, -15, 0 } /* RICcontrolAcknowledge */
};
static asn_CHOICE_specifics_t asn_SPC_value_specs_4_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = {
	sizeof(struct SuccessfulOutcome__value),
	offsetof(struct SuccessfulOutcome__value, _asn_ctx),
	offsetof(struct SuccessfulOutcome__value, present),
	sizeof(((struct SuccessfulOutcome__value *)0)->present),
	asn_MAP_value_tag2el_4_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01,
	16,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_value_4_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE_e2ap_v3_01,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		OPEN_TYPE_constraint
	},
	asn_MBR_value_4_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01,
	16,	/* Elements count */
	&asn_SPC_value_specs_4_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SuccessfulOutcome_1_e2ap_v3_01[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProcedureCode_e2ap_v3_01,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_procedureCode_constr_2_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_procedureCode_constraint_1
		},
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Criticality_e2ap_v3_01,
		select_SuccessfulOutcome_criticality_type,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_criticality_constr_3_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_criticality_constraint_1
		},
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_value_4_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01,
		select_SuccessfulOutcome_value_type,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_value_constr_4_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01_e2ap_v3_01,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_value_constraint_1
		},
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_SuccessfulOutcome_e2ap_v3_01_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SuccessfulOutcome_tag2el_1_e2ap_v3_01[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_SuccessfulOutcome_specs_1_e2ap_v3_01 = {
	sizeof(struct SuccessfulOutcome),
	offsetof(struct SuccessfulOutcome, _asn_ctx),
	asn_MAP_SuccessfulOutcome_tag2el_1_e2ap_v3_01,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SuccessfulOutcome_e2ap_v3_01 = {
	"SuccessfulOutcome",
	"SuccessfulOutcome",
	&asn_OP_SEQUENCE_e2ap_v3_01,
	asn_DEF_SuccessfulOutcome_e2ap_v3_01_tags_1,
	sizeof(asn_DEF_SuccessfulOutcome_e2ap_v3_01_tags_1)
		/sizeof(asn_DEF_SuccessfulOutcome_e2ap_v3_01_tags_1[0]), /* 1 */
	asn_DEF_SuccessfulOutcome_e2ap_v3_01_tags_1,	/* Same as above */
	sizeof(asn_DEF_SuccessfulOutcome_e2ap_v3_01_tags_1)
		/sizeof(asn_DEF_SuccessfulOutcome_e2ap_v3_01_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v3_01
	},
	asn_MBR_SuccessfulOutcome_1_e2ap_v3_01,
	3,	/* Elements count */
	&asn_SPC_SuccessfulOutcome_specs_1_e2ap_v3_01	/* Additional specs */
};

