/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_MeasResultNR_H_
#define	_MeasResultNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasQuantityResults;
struct ResultsPerSSB_IndexList;
struct ResultsPerCSI_RS_IndexList;
struct CGI_Info;

/* MeasResultNR */
typedef struct MeasResultNR {
	PhysCellId_t	*physCellId;	/* OPTIONAL */
	struct MeasResultNR__measResult {
		struct MeasResultNR__measResult__cellResults {
			struct MeasQuantityResults	*resultsSSB_Cell;	/* OPTIONAL */
			struct MeasQuantityResults	*resultsCSI_RS_Cell;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} cellResults;
		struct MeasResultNR__measResult__rsIndexResults {
			struct ResultsPerSSB_IndexList	*resultsSSB_Indexes;	/* OPTIONAL */
			struct ResultsPerCSI_RS_IndexList	*resultsCSI_RS_Indexes;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *rsIndexResults;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasResultNR__ext1 {
		struct CGI_Info	*cgi_Info;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultNR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultNR;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultNR_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultNR_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultNR_H_ */
#include <asn_internal.h>
