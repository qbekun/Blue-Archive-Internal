#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprBinOp; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprCall; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprWrap; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprArrayInit; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9085B50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_REWRITE_OFFSET UNITYSDK_OFFSET(0x9085BF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_VISITSAVE_OFFSET UNITYSDK_OFFSET(0x9085CC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_VISITCALL_OFFSET UNITYSDK_OFFSET(0x9085D70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_VISITWRAP_OFFSET UNITYSDK_OFFSET(0x9087C60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATELAMBDA_OFFSET UNITYSDK_OFFSET(0x9085F30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATECALL_OFFSET UNITYSDK_OFFSET(0x9085FA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x9086190)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATECONVERT_OFFSET UNITYSDK_OFFSET(0x9086310)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x90866B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEFIELD_OFFSET UNITYSDK_OFFSET(0x9086880)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEINVOKE_OFFSET UNITYSDK_OFFSET(0x9086A30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATENEW_OFFSET UNITYSDK_OFFSET(0x9086B00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATECONSTANTTYPE_OFFSET UNITYSDK_OFFSET(0x9087A90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x9087B80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEBINARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x9086C00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEUSERDEFINEDBINARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x9087150)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x90877E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEUSERDEFINEDUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x90878E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x9087CE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GETARGUMENTSFROMARRAYINIT_OFFSET UNITYSDK_OFFSET(0x9087FB0)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int ExpressionTreeCallRewriter_TypeDefinitionIndex = 34438;

	class ExpressionTreeCallRewriter : public Il2CppObject
	{
	public:
		Il2CppObject* _DictionaryOfParameters; // 0x10
		::Il2CppArray<::System::Object*>* _ListOfParameters; // 0x18
		::System::Int32 _currentParameterIndex; // 0x20

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* Rewrite(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_REWRITE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitSAVE(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_VISITSAVE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitCALL(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_VISITCALL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* VisitWRAP(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWrap* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWrap*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_VISITWRAP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateLambda(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATELAMBDA_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateCall(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATECALL_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateArrayIndex(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEARRAYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateConvert(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATECONVERT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateProperty(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEPROPERTY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateField(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEFIELD_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateInvoke(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateNew(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATENEW_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateConstantType(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATECONSTANTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateAssignment(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEASSIGNMENT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateBinaryOperator(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEBINARYOPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateUserDefinedBinaryOperator(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEUSERDEFINEDBINARYOPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateUnaryOperator(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEUNARYOPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GenerateUserDefinedUnaryOperator(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GENERATEUSERDEFINEDUNARYOPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetExpression(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GETEXPRESSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetArgumentsFromArrayInit(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayInit* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayInit*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_EXPRESSIONTREECALLREWRITER_GETARGUMENTSFROMARRAYINIT_OFFSET))(arg, nullptr);
		}

	};
}

