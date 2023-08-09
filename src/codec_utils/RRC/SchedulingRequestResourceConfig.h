/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SchedulingRequestResourceConfig_H_
#define	_SchedulingRequestResourceConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SchedulingRequestResourceId.h"
#include "SchedulingRequestId.h"
#include "PUCCH-ResourceId.h"
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SchedulingRequestResourceConfig__periodicityAndOffset_PR {
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_NOTHING,	/* No components present */
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sym2,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sym6or7,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl1,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl2,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl4,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl5,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl8,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl10,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl16,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl20,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl40,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl80,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl160,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl320,
	SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl640
} SchedulingRequestResourceConfig__periodicityAndOffset_PR;

/* SchedulingRequestResourceConfig */
typedef struct SchedulingRequestResourceConfig {
	SchedulingRequestResourceId_t	 schedulingRequestResourceId;
	SchedulingRequestId_t	 schedulingRequestID;
	struct SchedulingRequestResourceConfig__periodicityAndOffset {
		SchedulingRequestResourceConfig__periodicityAndOffset_PR present;
		union SchedulingRequestResourceConfig__periodicityAndOffset_u {
			NULL_t	 sym2;
			NULL_t	 sym6or7;
			NULL_t	 sl1;
			long	 sl2;
			long	 sl4;
			long	 sl5;
			long	 sl8;
			long	 sl10;
			long	 sl16;
			long	 sl20;
			long	 sl40;
			long	 sl80;
			long	 sl160;
			long	 sl320;
			long	 sl640;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *periodicityAndOffset;
	PUCCH_ResourceId_t	*resource;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingRequestResourceConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingRequestResourceConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_SchedulingRequestResourceConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingRequestResourceConfig_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingRequestResourceConfig_H_ */
#include <asn_internal.h>
