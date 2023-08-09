/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_CellReselectionPriorities_H_
#define	_CellReselectionPriorities_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellReselectionPriorities__t320 {
	CellReselectionPriorities__t320_min5	= 0,
	CellReselectionPriorities__t320_min10	= 1,
	CellReselectionPriorities__t320_min20	= 2,
	CellReselectionPriorities__t320_min30	= 3,
	CellReselectionPriorities__t320_min60	= 4,
	CellReselectionPriorities__t320_min120	= 5,
	CellReselectionPriorities__t320_min180	= 6,
	CellReselectionPriorities__t320_spare1	= 7
} e_CellReselectionPriorities__t320;

/* Forward declarations */
struct FreqPriorityListEUTRA;
struct FreqPriorityListNR;

/* CellReselectionPriorities */
typedef struct CellReselectionPriorities {
	struct FreqPriorityListEUTRA	*freqPriorityListEUTRA;	/* OPTIONAL */
	struct FreqPriorityListNR	*freqPriorityListNR;	/* OPTIONAL */
	long	*t320;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellReselectionPriorities_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t320_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionPriorities;
extern asn_SEQUENCE_specifics_t asn_SPC_CellReselectionPriorities_specs_1;
extern asn_TYPE_member_t asn_MBR_CellReselectionPriorities_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CellReselectionPriorities_H_ */
#include <asn_internal.h>
