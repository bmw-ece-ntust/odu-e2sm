/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Descriptions"
 * 	found in "../../ASN1_Input/E2APV0300.asn1"
 * 	`asn1c -D ../../E2_v3.0_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_UnsuccessfulOutcomeE2_H_
#define	_UnsuccessfulOutcomeE2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCodeE2.h"
#include "CriticalityE2.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "RICsubscriptionRequest.h"
#include "RICsubscriptionResponse.h"
#include "RICsubscriptionFailure.h"
#include "RICsubscriptionDeleteRequest.h"
#include "RICsubscriptionDeleteResponse.h"
#include "RICsubscriptionDeleteFailure.h"
#include "RICsubscriptionModificationRequest.h"
#include "RICsubscriptionModificationResponse.h"
#include "RICsubscriptionModificationFailure.h"
#include "RICsubscriptionModificationRequired.h"
#include "RICsubscriptionModificationConfirm.h"
#include "RICsubscriptionModificationRefuse.h"
#include "RICQueryRequest.h"
#include "RICQueryResponse.h"
#include "RICQueryFailure.h"
#include "RICserviceUpdate.h"
#include "RICserviceUpdateAcknowledge.h"
#include "RICserviceUpdateFailure.h"
#include "RICcontrolRequest.h"
#include "RICcontrolAcknowledge.h"
#include "RICcontrolFailure.h"
#include "E2setupRequest.h"
#include "E2setupResponse.h"
#include "E2setupFailure.h"
#include "E2nodeConfigurationUpdate.h"
#include "E2nodeConfigurationUpdateAcknowledge.h"
#include "E2nodeConfigurationUpdateFailure.h"
#include "E2connectionUpdate.h"
#include "E2connectionUpdateAcknowledge.h"
#include "E2connectionUpdateFailure.h"
#include "ResetRequestE2.h"
#include "ResetResponseE2.h"
#include "E2RemovalRequest.h"
#include "E2RemovalResponse.h"
#include "E2RemovalFailure.h"
#include "RICindication.h"
#include "RICserviceQuery.h"
#include "ErrorIndicationE2.h"
#include "RICsubscriptionDeleteRequired.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UnsuccessfulOutcomeE2__value_PR {
	UnsuccessfulOutcomeE2__value_PR_NOTHING,	/* No components present */
	UnsuccessfulOutcomeE2__value_PR_RICsubscriptionFailure,
	UnsuccessfulOutcomeE2__value_PR_RICsubscriptionDeleteFailure,
	UnsuccessfulOutcomeE2__value_PR_RICsubscriptionModificationFailure,
	UnsuccessfulOutcomeE2__value_PR_RICsubscriptionModificationRefuse,
	UnsuccessfulOutcomeE2__value_PR_RICQueryFailure,
	UnsuccessfulOutcomeE2__value_PR_RICserviceUpdateFailure,
	UnsuccessfulOutcomeE2__value_PR_RICcontrolFailure,
	UnsuccessfulOutcomeE2__value_PR_E2setupFailure,
	UnsuccessfulOutcomeE2__value_PR_E2nodeConfigurationUpdateFailure,
	UnsuccessfulOutcomeE2__value_PR_E2connectionUpdateFailure,
	UnsuccessfulOutcomeE2__value_PR_E2RemovalFailure
} UnsuccessfulOutcomeE2__value_PR;

/* UnsuccessfulOutcomeE2 */
typedef struct UnsuccessfulOutcomeE2 {
	ProcedureCodeE2_t	 procedureCode;
	CriticalityE2_t	 criticality;
	struct UnsuccessfulOutcomeE2__value {
		UnsuccessfulOutcomeE2__value_PR present;
		union UnsuccessfulOutcomeE2__value_u {
			RICsubscriptionFailure_t	 RICsubscriptionFailure;
			RICsubscriptionDeleteFailure_t	 RICsubscriptionDeleteFailure;
			RICsubscriptionModificationFailure_t	 RICsubscriptionModificationFailure;
			RICsubscriptionModificationRefuse_t	 RICsubscriptionModificationRefuse;
			RICQueryFailure_t	 RICQueryFailure;
			RICserviceUpdateFailure_t	 RICserviceUpdateFailure;
			RICcontrolFailure_t	 RICcontrolFailure;
			E2setupFailure_t	 E2setupFailure;
			E2nodeConfigurationUpdateFailure_t	 E2nodeConfigurationUpdateFailure;
			E2connectionUpdateFailure_t	 E2connectionUpdateFailure;
			E2RemovalFailure_t	 E2RemovalFailure;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UnsuccessfulOutcomeE2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UnsuccessfulOutcomeE2;
extern asn_SEQUENCE_specifics_t asn_SPC_UnsuccessfulOutcomeE2_specs_1;
extern asn_TYPE_member_t asn_MBR_UnsuccessfulOutcomeE2_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UnsuccessfulOutcomeE2_H_ */
#include <asn_internal.h>
