#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprBinOp; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprBoundLambda; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprAssignment; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMultiGet; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMulti; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprConstant; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprLocal; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprField; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprUserDefinedConversion; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprCast; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprConcat; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprUnaryOp; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprArrayIndex; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprCall; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprProperty; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprArrayInit; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprZeroInit; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprTypeOf; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PREDEFMETH; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr&; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_REWRITE_OFFSET UNITYSDK_OFFSET(0x90D3070)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_DISPATCH_OFFSET UNITYSDK_OFFSET(0x90D3530)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x90D3580)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITMULTIGET_OFFSET UNITYSDK_OFFSET(0x90D3E10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITMULTI_OFFSET UNITYSDK_OFFSET(0x90D3E50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITBOUNDLAMBDA_OFFSET UNITYSDK_OFFSET(0x90D30E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITCONSTANT_OFFSET UNITYSDK_OFFSET(0x90D4230)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITLOCAL_OFFSET UNITYSDK_OFFSET(0x90D42E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITFIELD_OFFSET UNITYSDK_OFFSET(0x90D4310)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITUSERDEFINEDCONVERSION_OFFSET UNITYSDK_OFFSET(0x90D43F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITCAST_OFFSET UNITYSDK_OFFSET(0x90D47A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITCONCAT_OFFSET UNITYSDK_OFFSET(0x90D49C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITBINOP_OFFSET UNITYSDK_OFFSET(0x90D4B30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITUNARYOP_OFFSET UNITYSDK_OFFSET(0x90D5350)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x90D5640)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITCALL_OFFSET UNITYSDK_OFFSET(0x90D57F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITPROP_OFFSET UNITYSDK_OFFSET(0x90D5BE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITARRINIT_OFFSET UNITYSDK_OFFSET(0x90D5D80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITZEROINIT_OFFSET UNITYSDK_OFFSET(0x90D5E20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITTYPEOF_OFFSET UNITYSDK_OFFSET(0x90D5E30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEDELEGATEINVOKE_OFFSET UNITYSDK_OFFSET(0x90D5B70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEBUILTINBINARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x90D4EB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEBUILTINUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x90D5560)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEUSERDEFINEDBINARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x90D4B70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEUSERDEFINEDUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x90D5390)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEUSERDEFINEDCOMPARISONOPERATOR_OFFSET UNITYSDK_OFFSET(0x90D6230)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECONVERSION_OFFSET UNITYSDK_OFFSET(0x90D4930)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECONVERSIONWITHSOURCE_OFFSET UNITYSDK_OFFSET(0x90D6830)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEVALUEACCESSCONVERSION_OFFSET UNITYSDK_OFFSET(0x90D6870)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEUSERDEFINEDCONVERSION_OFFSET UNITYSDK_OFFSET(0x90D5AC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEUSERDEFINEDCONVERSION_OFFSET UNITYSDK_OFFSET(0x90D68E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEUSERDEFINEDCONVERSION_OFFSET UNITYSDK_OFFSET(0x90D4410)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEPARAMETER_OFFSET UNITYSDK_OFFSET(0x90D6F20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GETPREDEFMETHOD_OFFSET UNITYSDK_OFFSET(0x90D3ED0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_CREATETYPEOF_OFFSET UNITYSDK_OFFSET(0x90D5E10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_CREATEWRAPS_OFFSET UNITYSDK_OFFSET(0x90D4110)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x90D5B10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEARGSLIST_OFFSET UNITYSDK_OFFSET(0x90D3740)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEINDEXLIST_OFFSET UNITYSDK_OFFSET(0x90D56E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECONSTANT_OFFSET UNITYSDK_OFFSET(0x90D4240)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECALL_OFFSET UNITYSDK_OFFSET(0x90D6050)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECALL_OFFSET UNITYSDK_OFFSET(0x90D3C10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECALL_OFFSET UNITYSDK_OFFSET(0x90D3A10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECALL_OFFSET UNITYSDK_OFFSET(0x90D6620)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEPARAMSARRAY_OFFSET UNITYSDK_OFFSET(0x90D3810)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_FIXLIFTEDUSERDEFINEDBINARYOPERATORS_OFFSET UNITYSDK_OFFSET(0x90D63C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_ISNULLABLEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x90D6E00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_ISNULLABLEVALUEACCESS_OFFSET UNITYSDK_OFFSET(0x90D6E90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_ISENUMTODECIMALCONVERSION_OFFSET UNITYSDK_OFFSET(0x90D6D70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D30D0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExpressionTreeRewriter_TypeDefinitionIndex = 34585;

	class ExpressionTreeRewriter : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* Rewrite(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBoundLambda* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBoundLambda*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_REWRITE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* Dispatch(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_DISPATCH_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitASSIGNMENT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprAssignment* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprAssignment*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITASSIGNMENT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitMULTIGET(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMultiGet* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMultiGet*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITMULTIGET_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitMULTI(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITMULTI_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* VisitBoundLambda(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBoundLambda* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBoundLambda*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITBOUNDLAMBDA_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitCONSTANT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITCONSTANT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitLOCAL(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprLocal* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprLocal*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITLOCAL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitFIELD(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprField* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprField*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITFIELD_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitUSERDEFINEDCONVERSION(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUserDefinedConversion* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUserDefinedConversion*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITUSERDEFINEDCONVERSION_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitCAST(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCast* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCast*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITCAST_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitCONCAT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConcat* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConcat*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITCONCAT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitBINOP(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITBINOP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitUNARYOP(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITUNARYOP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitARRAYINDEX(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayIndex* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayIndex*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITARRAYINDEX_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitCALL(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITCALL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitPROP(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprProperty* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITPROP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitARRINIT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayInit* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayInit*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITARRINIT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitZEROINIT(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprZeroInit* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprZeroInit*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITZEROINIT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitTYPEOF(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprTypeOf* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprTypeOf*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_VISITTYPEOF_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateDelegateInvoke(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEDELEGATEINVOKE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateBuiltInBinaryOperator(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEBUILTINBINARYOPERATOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateBuiltInUnaryOperator(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEBUILTINUNARYOPERATOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateUserDefinedBinaryOperator(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEUSERDEFINEDBINARYOPERATOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateUserDefinedUnaryOperator(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEUSERDEFINEDUNARYOPERATOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateUserDefinedComparisonOperator(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEUSERDEFINEDCOMPARISONOPERATOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECONVERSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateConversionWithSource(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECONVERSIONWITHSOURCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateValueAccessConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEVALUEACCESSCONVERSION_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateUserDefinedConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEUSERDEFINEDCONVERSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateUserDefinedConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEUSERDEFINEDCONVERSION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateUserDefinedConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUserDefinedConversion* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUserDefinedConversion*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEUSERDEFINEDCONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateParameter(::System::String* str, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::System::String*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEPARAMETER_OFFSET))(str, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* GetPreDefMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GETPREDEFMETHOD_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprTypeOf* CreateTypeOf(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprTypeOf*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_CREATETYPEOF_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* CreateWraps(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBoundLambda* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBoundLambda*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_CREATEWRAPS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateConstructor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECONSTRUCTOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateArgsList(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEARGSLIST_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateIndexList(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEINDEXLIST_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateConstant(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECONSTANT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* GenerateCall(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECALL_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* GenerateCall(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* GenerateCall(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECALL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* GenerateCall(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATECALL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayInit* GenerateParamsArray(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayInit*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_GENERATEPARAMSARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FixLiftedUserDefinedBinaryOperators(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_FIXLIFTEDUSERDEFINEDBINARYOPERATORS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsNullableValueType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_ISNULLABLEVALUETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNullableValueAccess(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_ISNULLABLEVALUEACCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean isEnumToDecimalConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_ISENUMTODECIMALCONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONTREEREWRITER_.CTOR_OFFSET))(nullptr);
		}

	};
}

