#ifndef GLOBAL_PROCEDURES_BUILDER_H
#define GLOBAL_PROCEDURES_BUILDER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef GLOBAL_PROCEDURES_READER_H
#include "global_procedures_reader.h"
#endif
#ifndef FLATBUFFERS_COMMON_BUILDER_H
#include "flatbuffers_common_builder.h"
#endif
#ifndef IE_DEFINITIONS_BUILDER_H
#include "ie_definitions_builder.h"
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension ".bin"
#endif

static const flatbuffers_voffset_t __e2ap_ErrorIndication_required[] = { 0 };
typedef flatbuffers_ref_t e2ap_ErrorIndication_ref_t;
static e2ap_ErrorIndication_ref_t e2ap_ErrorIndication_clone(flatbuffers_builder_t *B, e2ap_ErrorIndication_table_t t);
__flatbuffers_build_table(flatbuffers_, e2ap_ErrorIndication, 5)

static const flatbuffers_voffset_t __e2ap_E2SetupRequest_required[] = { 0 };
typedef flatbuffers_ref_t e2ap_E2SetupRequest_ref_t;
static e2ap_E2SetupRequest_ref_t e2ap_E2SetupRequest_clone(flatbuffers_builder_t *B, e2ap_E2SetupRequest_table_t t);
__flatbuffers_build_table(flatbuffers_, e2ap_E2SetupRequest, 4)

static const flatbuffers_voffset_t __e2ap_RanFunction_required[] = { 0 };
typedef flatbuffers_ref_t e2ap_RanFunction_ref_t;
static e2ap_RanFunction_ref_t e2ap_RanFunction_clone(flatbuffers_builder_t *B, e2ap_RanFunction_table_t t);
__flatbuffers_build_table(flatbuffers_, e2ap_RanFunction, 4)

static const flatbuffers_voffset_t __e2ap_E2NodeCompConfUpdateItem_required[] = { 0 };
typedef flatbuffers_ref_t e2ap_E2NodeCompConfUpdateItem_ref_t;
static e2ap_E2NodeCompConfUpdateItem_ref_t e2ap_E2NodeCompConfUpdateItem_clone(flatbuffers_builder_t *B, e2ap_E2NodeCompConfUpdateItem_table_t t);
__flatbuffers_build_table(flatbuffers_, e2ap_E2NodeCompConfUpdateItem, 5)

static const flatbuffers_voffset_t __e2ap_E2SetupResponse_required[] = { 0 };
typedef flatbuffers_ref_t e2ap_E2SetupResponse_ref_t;
static e2ap_E2SetupResponse_ref_t e2ap_E2SetupResponse_clone(flatbuffers_builder_t *B, e2ap_E2SetupResponse_table_t t);
__flatbuffers_build_table(flatbuffers_, e2ap_E2SetupResponse, 4)

static const flatbuffers_voffset_t __e2ap_RejectedRanFunction_required[] = { 0 };
typedef flatbuffers_ref_t e2ap_RejectedRanFunction_ref_t;
static e2ap_RejectedRanFunction_ref_t e2ap_RejectedRanFunction_clone(flatbuffers_builder_t *B, e2ap_RejectedRanFunction_table_t t);
__flatbuffers_build_table(flatbuffers_, e2ap_RejectedRanFunction, 3)

static const flatbuffers_voffset_t __e2ap_E2NodeCompConfUpdateAckItem_required[] = { 0 };
typedef flatbuffers_ref_t e2ap_E2NodeCompConfUpdateAckItem_ref_t;
static e2ap_E2NodeCompConfUpdateAckItem_ref_t e2ap_E2NodeCompConfUpdateAckItem_clone(flatbuffers_builder_t *B, e2ap_E2NodeCompConfUpdateAckItem_table_t t);
__flatbuffers_build_table(flatbuffers_, e2ap_E2NodeCompConfUpdateAckItem, 4)

static const flatbuffers_voffset_t __e2ap_E2SetupFailure_required[] = { 0 };
typedef flatbuffers_ref_t e2ap_E2SetupFailure_ref_t;
static e2ap_E2SetupFailure_ref_t e2ap_E2SetupFailure_clone(flatbuffers_builder_t *B, e2ap_E2SetupFailure_table_t t);
__flatbuffers_build_table(flatbuffers_, e2ap_E2SetupFailure, 5)

static const flatbuffers_voffset_t __e2ap_ResetRequest_required[] = { 0 };
typedef flatbuffers_ref_t e2ap_ResetRequest_ref_t;
static e2ap_ResetRequest_ref_t e2ap_ResetRequest_clone(flatbuffers_builder_t *B, e2ap_ResetRequest_table_t t);
__flatbuffers_build_table(flatbuffers_, e2ap_ResetRequest, 2)

static const flatbuffers_voffset_t __e2ap_ResetResponse_required[] = { 0 };
typedef flatbuffers_ref_t e2ap_ResetResponse_ref_t;
static e2ap_ResetResponse_ref_t e2ap_ResetResponse_clone(flatbuffers_builder_t *B, e2ap_ResetResponse_table_t t);
__flatbuffers_build_table(flatbuffers_, e2ap_ResetResponse, 1)

#define __e2ap_ErrorIndication_formal_args , e2ap_RicRequestId_t *v0, uint16_t v1, e2ap_Cause_union_ref_t v3, e2ap_CriticalityDiagnostics_ref_t v4
#define __e2ap_ErrorIndication_call_args , v0, v1, v3, v4
static inline e2ap_ErrorIndication_ref_t e2ap_ErrorIndication_create(flatbuffers_builder_t *B __e2ap_ErrorIndication_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, e2ap_ErrorIndication, e2ap_ErrorIndication_file_identifier, e2ap_ErrorIndication_type_identifier)

#define __e2ap_E2SetupRequest_formal_args , e2ap_GlobalE2NodeId_union_ref_t v1, e2ap_RanFunction_vec_ref_t v2, e2ap_E2NodeCompConfUpdateItem_vec_ref_t v3
#define __e2ap_E2SetupRequest_call_args , v1, v2, v3
static inline e2ap_E2SetupRequest_ref_t e2ap_E2SetupRequest_create(flatbuffers_builder_t *B __e2ap_E2SetupRequest_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, e2ap_E2SetupRequest, e2ap_E2SetupRequest_file_identifier, e2ap_E2SetupRequest_type_identifier)

#define __e2ap_RanFunction_formal_args , uint16_t v0, flatbuffers_uint8_vec_ref_t v1, uint16_t v2, flatbuffers_string_ref_t v3
#define __e2ap_RanFunction_call_args , v0, v1, v2, v3
static inline e2ap_RanFunction_ref_t e2ap_RanFunction_create(flatbuffers_builder_t *B __e2ap_RanFunction_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, e2ap_RanFunction, e2ap_RanFunction_file_identifier, e2ap_RanFunction_type_identifier)

#define __e2ap_E2NodeCompConfUpdateItem_formal_args , e2ap_E2NodeCompType_enum_t v0, e2ap_E2NodeCompId_union_ref_t v2, e2ap_E2NodeCompConfUpdate_union_ref_t v4
#define __e2ap_E2NodeCompConfUpdateItem_call_args , v0, v2, v4
static inline e2ap_E2NodeCompConfUpdateItem_ref_t e2ap_E2NodeCompConfUpdateItem_create(flatbuffers_builder_t *B __e2ap_E2NodeCompConfUpdateItem_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, e2ap_E2NodeCompConfUpdateItem, e2ap_E2NodeCompConfUpdateItem_file_identifier, e2ap_E2NodeCompConfUpdateItem_type_identifier)

#define __e2ap_E2SetupResponse_formal_args , e2ap_GlobalRicId_ref_t v0, flatbuffers_uint16_vec_ref_t v1, e2ap_RejectedRanFunction_vec_ref_t v2, e2ap_E2NodeCompConfUpdateAckItem_vec_ref_t v3
#define __e2ap_E2SetupResponse_call_args , v0, v1, v2, v3
static inline e2ap_E2SetupResponse_ref_t e2ap_E2SetupResponse_create(flatbuffers_builder_t *B __e2ap_E2SetupResponse_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, e2ap_E2SetupResponse, e2ap_E2SetupResponse_file_identifier, e2ap_E2SetupResponse_type_identifier)

#define __e2ap_RejectedRanFunction_formal_args , uint16_t v0, e2ap_Cause_union_ref_t v2
#define __e2ap_RejectedRanFunction_call_args , v0, v2
static inline e2ap_RejectedRanFunction_ref_t e2ap_RejectedRanFunction_create(flatbuffers_builder_t *B __e2ap_RejectedRanFunction_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, e2ap_RejectedRanFunction, e2ap_RejectedRanFunction_file_identifier, e2ap_RejectedRanFunction_type_identifier)

#define __e2ap_E2NodeCompConfUpdateAckItem_formal_args , e2ap_E2NodeCompType_enum_t v0, e2ap_E2NodeCompId_union_ref_t v2, e2ap_E2NodeCompConfUpdateAck_ref_t v3
#define __e2ap_E2NodeCompConfUpdateAckItem_call_args , v0, v2, v3
static inline e2ap_E2NodeCompConfUpdateAckItem_ref_t e2ap_E2NodeCompConfUpdateAckItem_create(flatbuffers_builder_t *B __e2ap_E2NodeCompConfUpdateAckItem_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, e2ap_E2NodeCompConfUpdateAckItem, e2ap_E2NodeCompConfUpdateAckItem_file_identifier, e2ap_E2NodeCompConfUpdateAckItem_type_identifier)

#define __e2ap_E2SetupFailure_formal_args , e2ap_Cause_union_ref_t v1, uint32_t v2, e2ap_CriticalityDiagnostics_ref_t v3, e2ap_TransportLayerInformation_ref_t v4
#define __e2ap_E2SetupFailure_call_args , v1, v2, v3, v4
static inline e2ap_E2SetupFailure_ref_t e2ap_E2SetupFailure_create(flatbuffers_builder_t *B __e2ap_E2SetupFailure_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, e2ap_E2SetupFailure, e2ap_E2SetupFailure_file_identifier, e2ap_E2SetupFailure_type_identifier)

#define __e2ap_ResetRequest_formal_args , e2ap_Cause_union_ref_t v1
#define __e2ap_ResetRequest_call_args , v1
static inline e2ap_ResetRequest_ref_t e2ap_ResetRequest_create(flatbuffers_builder_t *B __e2ap_ResetRequest_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, e2ap_ResetRequest, e2ap_ResetRequest_file_identifier, e2ap_ResetRequest_type_identifier)

#define __e2ap_ResetResponse_formal_args , e2ap_CriticalityDiagnostics_ref_t v0
#define __e2ap_ResetResponse_call_args , v0
static inline e2ap_ResetResponse_ref_t e2ap_ResetResponse_create(flatbuffers_builder_t *B __e2ap_ResetResponse_formal_args);
__flatbuffers_build_table_prolog(flatbuffers_, e2ap_ResetResponse, e2ap_ResetResponse_file_identifier, e2ap_ResetResponse_type_identifier)

__flatbuffers_build_struct_field(0, flatbuffers_, e2ap_ErrorIndication_ricRequestId, e2ap_RicRequestId, 4, 2, e2ap_ErrorIndication)
__flatbuffers_build_scalar_field(1, flatbuffers_, e2ap_ErrorIndication_ranFunctionId, flatbuffers_uint16, uint16_t, 2, 2, UINT16_C(0), e2ap_ErrorIndication)
__flatbuffers_build_union_field(3, flatbuffers_, e2ap_ErrorIndication_cause, e2ap_Cause, e2ap_ErrorIndication)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_ErrorIndication_cause, e2ap_Cause, ricRequest, e2ap_RicRequest)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_ErrorIndication_cause, e2ap_Cause, ricService, e2ap_RicService)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_ErrorIndication_cause, e2ap_Cause, transportLayer, e2ap_TransportLayer)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_ErrorIndication_cause, e2ap_Cause, protocol, e2ap_Protocol)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_ErrorIndication_cause, e2ap_Cause, misc, e2ap_Misc)
__flatbuffers_build_table_field(4, flatbuffers_, e2ap_ErrorIndication_criticalityDiagnostics, e2ap_CriticalityDiagnostics, e2ap_ErrorIndication)

static inline e2ap_ErrorIndication_ref_t e2ap_ErrorIndication_create(flatbuffers_builder_t *B __e2ap_ErrorIndication_formal_args)
{
    if (e2ap_ErrorIndication_start(B)
        || e2ap_ErrorIndication_cause_add_value(B, v3)
        || e2ap_ErrorIndication_criticalityDiagnostics_add(B, v4)
        || e2ap_ErrorIndication_ricRequestId_add(B, v0)
        || e2ap_ErrorIndication_ranFunctionId_add(B, v1)
        || e2ap_ErrorIndication_cause_add_type(B, v3.type)) {
        return 0;
    }
    return e2ap_ErrorIndication_end(B);
}

static e2ap_ErrorIndication_ref_t e2ap_ErrorIndication_clone(flatbuffers_builder_t *B, e2ap_ErrorIndication_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (e2ap_ErrorIndication_start(B)
        || e2ap_ErrorIndication_cause_pick(B, t)
        || e2ap_ErrorIndication_criticalityDiagnostics_pick(B, t)
        || e2ap_ErrorIndication_ricRequestId_pick(B, t)
        || e2ap_ErrorIndication_ranFunctionId_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, e2ap_ErrorIndication_end(B));
}

__flatbuffers_build_union_field(1, flatbuffers_, e2ap_E2SetupRequest_id, e2ap_GlobalE2NodeId, e2ap_E2SetupRequest)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2SetupRequest_id, e2ap_GlobalE2NodeId, gNB, e2ap_GNB)
__flatbuffers_build_union_struct_value_field(flatbuffers_, e2ap_E2SetupRequest_id, e2ap_GlobalE2NodeId, engNB, e2ap_EngNB)
__flatbuffers_build_union_struct_value_field(flatbuffers_, e2ap_E2SetupRequest_id, e2ap_GlobalE2NodeId, ngeNB, e2ap_NgeNB)
__flatbuffers_build_union_struct_value_field(flatbuffers_, e2ap_E2SetupRequest_id, e2ap_GlobalE2NodeId, eNB, e2ap_ENB)
__flatbuffers_build_table_vector_field(2, flatbuffers_, e2ap_E2SetupRequest_ranFunctions, e2ap_RanFunction, e2ap_E2SetupRequest)
__flatbuffers_build_table_vector_field(3, flatbuffers_, e2ap_E2SetupRequest_e2NodeComponentConfigurationUpdateList, e2ap_E2NodeCompConfUpdateItem, e2ap_E2SetupRequest)

static inline e2ap_E2SetupRequest_ref_t e2ap_E2SetupRequest_create(flatbuffers_builder_t *B __e2ap_E2SetupRequest_formal_args)
{
    if (e2ap_E2SetupRequest_start(B)
        || e2ap_E2SetupRequest_id_add_value(B, v1)
        || e2ap_E2SetupRequest_ranFunctions_add(B, v2)
        || e2ap_E2SetupRequest_e2NodeComponentConfigurationUpdateList_add(B, v3)
        || e2ap_E2SetupRequest_id_add_type(B, v1.type)) {
        return 0;
    }
    return e2ap_E2SetupRequest_end(B);
}

static e2ap_E2SetupRequest_ref_t e2ap_E2SetupRequest_clone(flatbuffers_builder_t *B, e2ap_E2SetupRequest_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (e2ap_E2SetupRequest_start(B)
        || e2ap_E2SetupRequest_id_pick(B, t)
        || e2ap_E2SetupRequest_ranFunctions_pick(B, t)
        || e2ap_E2SetupRequest_e2NodeComponentConfigurationUpdateList_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, e2ap_E2SetupRequest_end(B));
}

__flatbuffers_build_scalar_field(0, flatbuffers_, e2ap_RanFunction_id, flatbuffers_uint16, uint16_t, 2, 2, UINT16_C(0), e2ap_RanFunction)
__flatbuffers_build_vector_field(1, flatbuffers_, e2ap_RanFunction_definition, flatbuffers_uint8, uint8_t, e2ap_RanFunction)
__flatbuffers_build_scalar_field(2, flatbuffers_, e2ap_RanFunction_revision, flatbuffers_uint16, uint16_t, 2, 2, UINT16_C(0), e2ap_RanFunction)
__flatbuffers_build_string_field(3, flatbuffers_, e2ap_RanFunction_oid, e2ap_RanFunction)

static inline e2ap_RanFunction_ref_t e2ap_RanFunction_create(flatbuffers_builder_t *B __e2ap_RanFunction_formal_args)
{
    if (e2ap_RanFunction_start(B)
        || e2ap_RanFunction_definition_add(B, v1)
        || e2ap_RanFunction_oid_add(B, v3)
        || e2ap_RanFunction_id_add(B, v0)
        || e2ap_RanFunction_revision_add(B, v2)) {
        return 0;
    }
    return e2ap_RanFunction_end(B);
}

static e2ap_RanFunction_ref_t e2ap_RanFunction_clone(flatbuffers_builder_t *B, e2ap_RanFunction_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (e2ap_RanFunction_start(B)
        || e2ap_RanFunction_definition_pick(B, t)
        || e2ap_RanFunction_oid_pick(B, t)
        || e2ap_RanFunction_id_pick(B, t)
        || e2ap_RanFunction_revision_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, e2ap_RanFunction_end(B));
}

__flatbuffers_build_scalar_field(0, flatbuffers_, e2ap_E2NodeCompConfUpdateItem_type, e2ap_E2NodeCompType, e2ap_E2NodeCompType_enum_t, 1, 1, UINT8_C(0), e2ap_E2NodeCompConfUpdateItem)
__flatbuffers_build_union_field(2, flatbuffers_, e2ap_E2NodeCompConfUpdateItem_id, e2ap_E2NodeCompId, e2ap_E2NodeCompConfUpdateItem)
__flatbuffers_build_union_struct_value_field(flatbuffers_, e2ap_E2NodeCompConfUpdateItem_id, e2ap_E2NodeCompId, gnb_cu_up, e2ap_E2NCId)
__flatbuffers_build_union_struct_value_field(flatbuffers_, e2ap_E2NodeCompConfUpdateItem_id, e2ap_E2NodeCompId, gnb_du, e2ap_E2NCId)
__flatbuffers_build_union_field(4, flatbuffers_, e2ap_E2NodeCompConfUpdateItem_update, e2ap_E2NodeCompConfUpdate, e2ap_E2NodeCompConfUpdateItem)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2NodeCompConfUpdateItem_update, e2ap_E2NodeCompConfUpdate, gnb, e2ap_gnbE2NodeCompConfUpdate)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2NodeCompConfUpdateItem_update, e2ap_E2NodeCompConfUpdate, en_gnb, e2ap_en_gnbE2NodeCompConfUpdate)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2NodeCompConfUpdateItem_update, e2ap_E2NodeCompConfUpdate, ng_enb, e2ap_ng_enbE2NodeCompConfUpdate)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2NodeCompConfUpdateItem_update, e2ap_E2NodeCompConfUpdate, enb, e2ap_enbE2NodeCompConfUpdate)

static inline e2ap_E2NodeCompConfUpdateItem_ref_t e2ap_E2NodeCompConfUpdateItem_create(flatbuffers_builder_t *B __e2ap_E2NodeCompConfUpdateItem_formal_args)
{
    if (e2ap_E2NodeCompConfUpdateItem_start(B)
        || e2ap_E2NodeCompConfUpdateItem_id_add_value(B, v2)
        || e2ap_E2NodeCompConfUpdateItem_update_add_value(B, v4)
        || e2ap_E2NodeCompConfUpdateItem_type_add(B, v0)
        || e2ap_E2NodeCompConfUpdateItem_id_add_type(B, v2.type)
        || e2ap_E2NodeCompConfUpdateItem_update_add_type(B, v4.type)) {
        return 0;
    }
    return e2ap_E2NodeCompConfUpdateItem_end(B);
}

static e2ap_E2NodeCompConfUpdateItem_ref_t e2ap_E2NodeCompConfUpdateItem_clone(flatbuffers_builder_t *B, e2ap_E2NodeCompConfUpdateItem_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (e2ap_E2NodeCompConfUpdateItem_start(B)
        || e2ap_E2NodeCompConfUpdateItem_id_pick(B, t)
        || e2ap_E2NodeCompConfUpdateItem_update_pick(B, t)
        || e2ap_E2NodeCompConfUpdateItem_type_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, e2ap_E2NodeCompConfUpdateItem_end(B));
}

__flatbuffers_build_table_field(0, flatbuffers_, e2ap_E2SetupResponse_globalRicId, e2ap_GlobalRicId, e2ap_E2SetupResponse)
__flatbuffers_build_vector_field(1, flatbuffers_, e2ap_E2SetupResponse_acceptedRanFunctions, flatbuffers_uint16, uint16_t, e2ap_E2SetupResponse)
__flatbuffers_build_table_vector_field(2, flatbuffers_, e2ap_E2SetupResponse_rejectedRanFunctions, e2ap_RejectedRanFunction, e2ap_E2SetupResponse)
__flatbuffers_build_table_vector_field(3, flatbuffers_, e2ap_E2SetupResponse_updateAck, e2ap_E2NodeCompConfUpdateAckItem, e2ap_E2SetupResponse)

static inline e2ap_E2SetupResponse_ref_t e2ap_E2SetupResponse_create(flatbuffers_builder_t *B __e2ap_E2SetupResponse_formal_args)
{
    if (e2ap_E2SetupResponse_start(B)
        || e2ap_E2SetupResponse_globalRicId_add(B, v0)
        || e2ap_E2SetupResponse_acceptedRanFunctions_add(B, v1)
        || e2ap_E2SetupResponse_rejectedRanFunctions_add(B, v2)
        || e2ap_E2SetupResponse_updateAck_add(B, v3)) {
        return 0;
    }
    return e2ap_E2SetupResponse_end(B);
}

static e2ap_E2SetupResponse_ref_t e2ap_E2SetupResponse_clone(flatbuffers_builder_t *B, e2ap_E2SetupResponse_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (e2ap_E2SetupResponse_start(B)
        || e2ap_E2SetupResponse_globalRicId_pick(B, t)
        || e2ap_E2SetupResponse_acceptedRanFunctions_pick(B, t)
        || e2ap_E2SetupResponse_rejectedRanFunctions_pick(B, t)
        || e2ap_E2SetupResponse_updateAck_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, e2ap_E2SetupResponse_end(B));
}

__flatbuffers_build_scalar_field(0, flatbuffers_, e2ap_RejectedRanFunction_ranFunctionId, flatbuffers_uint16, uint16_t, 2, 2, UINT16_C(0), e2ap_RejectedRanFunction)
__flatbuffers_build_union_field(2, flatbuffers_, e2ap_RejectedRanFunction_cause, e2ap_Cause, e2ap_RejectedRanFunction)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_RejectedRanFunction_cause, e2ap_Cause, ricRequest, e2ap_RicRequest)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_RejectedRanFunction_cause, e2ap_Cause, ricService, e2ap_RicService)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_RejectedRanFunction_cause, e2ap_Cause, transportLayer, e2ap_TransportLayer)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_RejectedRanFunction_cause, e2ap_Cause, protocol, e2ap_Protocol)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_RejectedRanFunction_cause, e2ap_Cause, misc, e2ap_Misc)

static inline e2ap_RejectedRanFunction_ref_t e2ap_RejectedRanFunction_create(flatbuffers_builder_t *B __e2ap_RejectedRanFunction_formal_args)
{
    if (e2ap_RejectedRanFunction_start(B)
        || e2ap_RejectedRanFunction_cause_add_value(B, v2)
        || e2ap_RejectedRanFunction_ranFunctionId_add(B, v0)
        || e2ap_RejectedRanFunction_cause_add_type(B, v2.type)) {
        return 0;
    }
    return e2ap_RejectedRanFunction_end(B);
}

static e2ap_RejectedRanFunction_ref_t e2ap_RejectedRanFunction_clone(flatbuffers_builder_t *B, e2ap_RejectedRanFunction_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (e2ap_RejectedRanFunction_start(B)
        || e2ap_RejectedRanFunction_cause_pick(B, t)
        || e2ap_RejectedRanFunction_ranFunctionId_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, e2ap_RejectedRanFunction_end(B));
}

__flatbuffers_build_scalar_field(0, flatbuffers_, e2ap_E2NodeCompConfUpdateAckItem_type, e2ap_E2NodeCompType, e2ap_E2NodeCompType_enum_t, 1, 1, UINT8_C(0), e2ap_E2NodeCompConfUpdateAckItem)
__flatbuffers_build_union_field(2, flatbuffers_, e2ap_E2NodeCompConfUpdateAckItem_id, e2ap_E2NodeCompId, e2ap_E2NodeCompConfUpdateAckItem)
__flatbuffers_build_union_struct_value_field(flatbuffers_, e2ap_E2NodeCompConfUpdateAckItem_id, e2ap_E2NodeCompId, gnb_cu_up, e2ap_E2NCId)
__flatbuffers_build_union_struct_value_field(flatbuffers_, e2ap_E2NodeCompConfUpdateAckItem_id, e2ap_E2NodeCompId, gnb_du, e2ap_E2NCId)
__flatbuffers_build_table_field(3, flatbuffers_, e2ap_E2NodeCompConfUpdateAckItem_updateAck, e2ap_E2NodeCompConfUpdateAck, e2ap_E2NodeCompConfUpdateAckItem)

static inline e2ap_E2NodeCompConfUpdateAckItem_ref_t e2ap_E2NodeCompConfUpdateAckItem_create(flatbuffers_builder_t *B __e2ap_E2NodeCompConfUpdateAckItem_formal_args)
{
    if (e2ap_E2NodeCompConfUpdateAckItem_start(B)
        || e2ap_E2NodeCompConfUpdateAckItem_id_add_value(B, v2)
        || e2ap_E2NodeCompConfUpdateAckItem_updateAck_add(B, v3)
        || e2ap_E2NodeCompConfUpdateAckItem_type_add(B, v0)
        || e2ap_E2NodeCompConfUpdateAckItem_id_add_type(B, v2.type)) {
        return 0;
    }
    return e2ap_E2NodeCompConfUpdateAckItem_end(B);
}

static e2ap_E2NodeCompConfUpdateAckItem_ref_t e2ap_E2NodeCompConfUpdateAckItem_clone(flatbuffers_builder_t *B, e2ap_E2NodeCompConfUpdateAckItem_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (e2ap_E2NodeCompConfUpdateAckItem_start(B)
        || e2ap_E2NodeCompConfUpdateAckItem_id_pick(B, t)
        || e2ap_E2NodeCompConfUpdateAckItem_updateAck_pick(B, t)
        || e2ap_E2NodeCompConfUpdateAckItem_type_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, e2ap_E2NodeCompConfUpdateAckItem_end(B));
}

__flatbuffers_build_union_field(1, flatbuffers_, e2ap_E2SetupFailure_cause, e2ap_Cause, e2ap_E2SetupFailure)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2SetupFailure_cause, e2ap_Cause, ricRequest, e2ap_RicRequest)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2SetupFailure_cause, e2ap_Cause, ricService, e2ap_RicService)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2SetupFailure_cause, e2ap_Cause, transportLayer, e2ap_TransportLayer)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2SetupFailure_cause, e2ap_Cause, protocol, e2ap_Protocol)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_E2SetupFailure_cause, e2ap_Cause, misc, e2ap_Misc)
__flatbuffers_build_scalar_field(2, flatbuffers_, e2ap_E2SetupFailure_timeToWait, flatbuffers_uint32, uint32_t, 4, 4, UINT32_C(0), e2ap_E2SetupFailure)
__flatbuffers_build_table_field(3, flatbuffers_, e2ap_E2SetupFailure_criticalityDiagnostics, e2ap_CriticalityDiagnostics, e2ap_E2SetupFailure)
__flatbuffers_build_table_field(4, flatbuffers_, e2ap_E2SetupFailure_transportLayerInformation, e2ap_TransportLayerInformation, e2ap_E2SetupFailure)

static inline e2ap_E2SetupFailure_ref_t e2ap_E2SetupFailure_create(flatbuffers_builder_t *B __e2ap_E2SetupFailure_formal_args)
{
    if (e2ap_E2SetupFailure_start(B)
        || e2ap_E2SetupFailure_cause_add_value(B, v1)
        || e2ap_E2SetupFailure_timeToWait_add(B, v2)
        || e2ap_E2SetupFailure_criticalityDiagnostics_add(B, v3)
        || e2ap_E2SetupFailure_transportLayerInformation_add(B, v4)
        || e2ap_E2SetupFailure_cause_add_type(B, v1.type)) {
        return 0;
    }
    return e2ap_E2SetupFailure_end(B);
}

static e2ap_E2SetupFailure_ref_t e2ap_E2SetupFailure_clone(flatbuffers_builder_t *B, e2ap_E2SetupFailure_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (e2ap_E2SetupFailure_start(B)
        || e2ap_E2SetupFailure_cause_pick(B, t)
        || e2ap_E2SetupFailure_timeToWait_pick(B, t)
        || e2ap_E2SetupFailure_criticalityDiagnostics_pick(B, t)
        || e2ap_E2SetupFailure_transportLayerInformation_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, e2ap_E2SetupFailure_end(B));
}

__flatbuffers_build_union_field(1, flatbuffers_, e2ap_ResetRequest_cause, e2ap_Cause, e2ap_ResetRequest)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_ResetRequest_cause, e2ap_Cause, ricRequest, e2ap_RicRequest)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_ResetRequest_cause, e2ap_Cause, ricService, e2ap_RicService)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_ResetRequest_cause, e2ap_Cause, transportLayer, e2ap_TransportLayer)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_ResetRequest_cause, e2ap_Cause, protocol, e2ap_Protocol)
__flatbuffers_build_union_table_value_field(flatbuffers_, e2ap_ResetRequest_cause, e2ap_Cause, misc, e2ap_Misc)

static inline e2ap_ResetRequest_ref_t e2ap_ResetRequest_create(flatbuffers_builder_t *B __e2ap_ResetRequest_formal_args)
{
    if (e2ap_ResetRequest_start(B)
        || e2ap_ResetRequest_cause_add_value(B, v1)
        || e2ap_ResetRequest_cause_add_type(B, v1.type)) {
        return 0;
    }
    return e2ap_ResetRequest_end(B);
}

static e2ap_ResetRequest_ref_t e2ap_ResetRequest_clone(flatbuffers_builder_t *B, e2ap_ResetRequest_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (e2ap_ResetRequest_start(B)
        || e2ap_ResetRequest_cause_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, e2ap_ResetRequest_end(B));
}

__flatbuffers_build_table_field(0, flatbuffers_, e2ap_ResetResponse_criticalityDiagnostics, e2ap_CriticalityDiagnostics, e2ap_ResetResponse)

static inline e2ap_ResetResponse_ref_t e2ap_ResetResponse_create(flatbuffers_builder_t *B __e2ap_ResetResponse_formal_args)
{
    if (e2ap_ResetResponse_start(B)
        || e2ap_ResetResponse_criticalityDiagnostics_add(B, v0)) {
        return 0;
    }
    return e2ap_ResetResponse_end(B);
}

static e2ap_ResetResponse_ref_t e2ap_ResetResponse_clone(flatbuffers_builder_t *B, e2ap_ResetResponse_table_t t)
{
    __flatbuffers_memoize_begin(B, t);
    if (e2ap_ResetResponse_start(B)
        || e2ap_ResetResponse_criticalityDiagnostics_pick(B, t)) {
        return 0;
    }
    __flatbuffers_memoize_end(B, t, e2ap_ResetResponse_end(B));
}

#include "flatcc/flatcc_epilogue.h"
#endif /* GLOBAL_PROCEDURES_BUILDER_H */
