#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprBinOp; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprList; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprAssignment; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprArrayIndex; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprUnaryOp; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprUserLogicalOp; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprTypeOf; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprCast; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprUserDefinedConversion; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprZeroInit; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMemberGroup; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprCall; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprProperty; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprField; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprLocal; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprConstant; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMultiGet; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMulti; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprWrap; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprConcat; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprArrayInit; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprFieldInfo; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMethodInfo; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISIT_OFFSET UNITYSDK_OFFSET(0x90D1760)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_DISPATCH_OFFSET UNITYSDK_OFFSET(0x90D1780)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITCHILDREN_OFFSET UNITYSDK_OFFSET(0x90D1C40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITEXPR_OFFSET UNITYSDK_OFFSET(0x90D2820)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITBINOP_OFFSET UNITYSDK_OFFSET(0x90D2840)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLIST_OFFSET UNITYSDK_OFFSET(0x90D2860)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x90D2880)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x90D28A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITUNARYOP_OFFSET UNITYSDK_OFFSET(0x90D28C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITUSERLOGOP_OFFSET UNITYSDK_OFFSET(0x90D28E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITTYPEOF_OFFSET UNITYSDK_OFFSET(0x90D2900)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITCAST_OFFSET UNITYSDK_OFFSET(0x90D2920)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITUSERDEFINEDCONVERSION_OFFSET UNITYSDK_OFFSET(0x90D2940)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITZEROINIT_OFFSET UNITYSDK_OFFSET(0x90D2960)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITMEMGRP_OFFSET UNITYSDK_OFFSET(0x90D2980)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITCALL_OFFSET UNITYSDK_OFFSET(0x90D29A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITPROP_OFFSET UNITYSDK_OFFSET(0x90D29C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITFIELD_OFFSET UNITYSDK_OFFSET(0x90D29E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLOCAL_OFFSET UNITYSDK_OFFSET(0x90D2A00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITCONSTANT_OFFSET UNITYSDK_OFFSET(0x90D2A20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITMULTIGET_OFFSET UNITYSDK_OFFSET(0x90D2A40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITMULTI_OFFSET UNITYSDK_OFFSET(0x90D2A60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITWRAP_OFFSET UNITYSDK_OFFSET(0x90D2A80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITCONCAT_OFFSET UNITYSDK_OFFSET(0x90D2AA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITARRINIT_OFFSET UNITYSDK_OFFSET(0x90D2AC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITFIELDINFO_OFFSET UNITYSDK_OFFSET(0x90D2AE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITMETHODINFO_OFFSET UNITYSDK_OFFSET(0x90D2B00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITEQUALS_OFFSET UNITYSDK_OFFSET(0x90D2B20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITCOMPARE_OFFSET UNITYSDK_OFFSET(0x90D2B40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITEQ_OFFSET UNITYSDK_OFFSET(0x90D2B60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITNE_OFFSET UNITYSDK_OFFSET(0x90D2B80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLE_OFFSET UNITYSDK_OFFSET(0x90D2BA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITGE_OFFSET UNITYSDK_OFFSET(0x90D2BC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITADD_OFFSET UNITYSDK_OFFSET(0x90D2BE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITSUB_OFFSET UNITYSDK_OFFSET(0x90D2C00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDIV_OFFSET UNITYSDK_OFFSET(0x90D2C20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITBITAND_OFFSET UNITYSDK_OFFSET(0x90D2C40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITBITOR_OFFSET UNITYSDK_OFFSET(0x90D2C60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLSHIFT_OFFSET UNITYSDK_OFFSET(0x90D2C80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLOGAND_OFFSET UNITYSDK_OFFSET(0x90D2CA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITSEQUENCE_OFFSET UNITYSDK_OFFSET(0x90D2CC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITSAVE_OFFSET UNITYSDK_OFFSET(0x90D2CE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITINDIR_OFFSET UNITYSDK_OFFSET(0x90D2D00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITSTRINGEQ_OFFSET UNITYSDK_OFFSET(0x90D2D20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDELEGATEEQ_OFFSET UNITYSDK_OFFSET(0x90D2D40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDELEGATEADD_OFFSET UNITYSDK_OFFSET(0x90D2D60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLT_OFFSET UNITYSDK_OFFSET(0x90D2D80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITMUL_OFFSET UNITYSDK_OFFSET(0x90D2DA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITBITXOR_OFFSET UNITYSDK_OFFSET(0x90D2DC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITRSHIFT_OFFSET UNITYSDK_OFFSET(0x90D2DE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLOGOR_OFFSET UNITYSDK_OFFSET(0x90D2E00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITSTRINGNE_OFFSET UNITYSDK_OFFSET(0x90D2E20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDELEGATENE_OFFSET UNITYSDK_OFFSET(0x90D2E40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITGT_OFFSET UNITYSDK_OFFSET(0x90D2E60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITMOD_OFFSET UNITYSDK_OFFSET(0x90D2E80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITSWAP_OFFSET UNITYSDK_OFFSET(0x90D2EA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDELEGATESUB_OFFSET UNITYSDK_OFFSET(0x90D2EC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITTRUE_OFFSET UNITYSDK_OFFSET(0x90D2EE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITINC_OFFSET UNITYSDK_OFFSET(0x90D2F00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLOGNOT_OFFSET UNITYSDK_OFFSET(0x90D2F20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITNEG_OFFSET UNITYSDK_OFFSET(0x90D2F40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITBITNOT_OFFSET UNITYSDK_OFFSET(0x90D2F60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITADDR_OFFSET UNITYSDK_OFFSET(0x90D2F80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDECIMALNEG_OFFSET UNITYSDK_OFFSET(0x90D2FA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDECIMALDEC_OFFSET UNITYSDK_OFFSET(0x90D2FC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITFALSE_OFFSET UNITYSDK_OFFSET(0x90D2FE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDEC_OFFSET UNITYSDK_OFFSET(0x90D3000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITUPLUS_OFFSET UNITYSDK_OFFSET(0x90D3020)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDECIMALINC_OFFSET UNITYSDK_OFFSET(0x90D3040)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D3060)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprVisitorBase_TypeDefinitionIndex = 34584;

	class ExprVisitorBase : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* Visit(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISIT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* Dispatch(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_DISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void VisitChildren(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITCHILDREN_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitEXPR(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITEXPR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitBINOP(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITBINOP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitLIST(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprList* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprList*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLIST_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitASSIGNMENT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprAssignment* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprAssignment*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITASSIGNMENT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitARRAYINDEX(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayIndex* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayIndex*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITARRAYINDEX_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitUNARYOP(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITUNARYOP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitUSERLOGOP(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUserLogicalOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUserLogicalOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITUSERLOGOP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitTYPEOF(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprTypeOf* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprTypeOf*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITTYPEOF_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitCAST(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCast* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCast*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITCAST_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitUSERDEFINEDCONVERSION(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUserDefinedConversion* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUserDefinedConversion*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITUSERDEFINEDCONVERSION_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitZEROINIT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprZeroInit* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprZeroInit*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITZEROINIT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitMEMGRP(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITMEMGRP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitCALL(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITCALL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitPROP(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprProperty* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITPROP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitFIELD(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprField* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprField*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITFIELD_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitLOCAL(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprLocal* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprLocal*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLOCAL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitCONSTANT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITCONSTANT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitMULTIGET(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMultiGet* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMultiGet*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITMULTIGET_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitMULTI(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITMULTI_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitWRAP(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWrap* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWrap*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITWRAP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitCONCAT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConcat* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConcat*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITCONCAT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitARRINIT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayInit* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayInit*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITARRINIT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitFIELDINFO(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprFieldInfo* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprFieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITFIELDINFO_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitMETHODINFO(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMethodInfo* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITMETHODINFO_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitEQUALS(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITEQUALS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitCOMPARE(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITCOMPARE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitEQ(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITEQ_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitNE(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITNE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitLE(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitGE(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITGE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitADD(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITADD_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitSUB(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITSUB_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitDIV(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDIV_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitBITAND(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITBITAND_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitBITOR(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITBITOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitLSHIFT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLSHIFT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitLOGAND(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLOGAND_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitSEQUENCE(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITSEQUENCE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitSAVE(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITSAVE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitINDIR(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITINDIR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitSTRINGEQ(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITSTRINGEQ_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitDELEGATEEQ(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDELEGATEEQ_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitDELEGATEADD(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDELEGATEADD_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitLT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitMUL(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITMUL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitBITXOR(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITBITXOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitRSHIFT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITRSHIFT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitLOGOR(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLOGOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitSTRINGNE(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITSTRINGNE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitDELEGATENE(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDELEGATENE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitGT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITGT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitMOD(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITMOD_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitSWAP(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITSWAP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitDELEGATESUB(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDELEGATESUB_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitTRUE(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITTRUE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitINC(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITINC_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitLOGNOT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITLOGNOT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitNEG(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITNEG_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitBITNOT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITBITNOT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitADDR(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITADDR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitDECIMALNEG(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDECIMALNEG_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitDECIMALDEC(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDECIMALDEC_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitFALSE(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITFALSE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitDEC(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDEC_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitUPLUS(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITUPLUS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitDECIMALINC(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_VISITDECIMALINC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRVISITORBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

