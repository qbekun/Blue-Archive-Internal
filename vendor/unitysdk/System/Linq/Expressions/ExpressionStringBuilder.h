#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x965D180)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x965D200)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETLABELID_OFFSET UNITYSDK_OFFSET(0x965D230)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETPARAMID_OFFSET UNITYSDK_OFFSET(0x965D350)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETID_OFFSET UNITYSDK_OFFSET(0x965D240)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUT_OFFSET UNITYSDK_OFFSET(0x965D360)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUT_OFFSET UNITYSDK_OFFSET(0x965D380)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_EXPRESSIONTOSTRING_OFFSET UNITYSDK_OFFSET(0x965D3A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_CATCHBLOCKTOSTRING_OFFSET UNITYSDK_OFFSET(0x9652090)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITBINARY_OFFSET UNITYSDK_OFFSET(0x965D470)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x965DAB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLAMBDA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCONDITIONAL_OFFSET UNITYSDK_OFFSET(0x965DBB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCONSTANT_OFFSET UNITYSDK_OFFSET(0x965DCC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUTMEMBER_OFFSET UNITYSDK_OFFSET(0x965DE40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBER_OFFSET UNITYSDK_OFFSET(0x965DF10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITINVOCATION_OFFSET UNITYSDK_OFFSET(0x965DF80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMETHODCALL_OFFSET UNITYSDK_OFFSET(0x965E0A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITNEWARRAY_OFFSET UNITYSDK_OFFSET(0x965E2E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITNEW_OFFSET UNITYSDK_OFFSET(0x965E420)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITTYPEBINARY_OFFSET UNITYSDK_OFFSET(0x965E860)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITUNARY_OFFSET UNITYSDK_OFFSET(0x965E970)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x965EDC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITDEFAULT_OFFSET UNITYSDK_OFFSET(0x965F110)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLABEL_OFFSET UNITYSDK_OFFSET(0x965F1C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITGOTO_OFFSET UNITYSDK_OFFSET(0x965F2F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLOOP_OFFSET UNITYSDK_OFFSET(0x965F450)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x965F4A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITTRY_OFFSET UNITYSDK_OFFSET(0x965F5B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITINDEX_OFFSET UNITYSDK_OFFSET(0x965F600)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITEXTENSION_OFFSET UNITYSDK_OFFSET(0x965FA20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_DUMPLABEL_OFFSET UNITYSDK_OFFSET(0x965F240)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_ISBOOL_OFFSET UNITYSDK_OFFSET(0x965D9B0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ExpressionStringBuilder_TypeDefinitionIndex = 33048;

	class ExpressionStringBuilder : public Il2CppObject
	{
	public:
		::System::Text::StringBuilder* _out; // 0x10
		Il2CppObject* _ids; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetLabelId(::System::Linq::Expressions::LabelTarget* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::LabelTarget*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETLABELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetParamId(::System::Linq::Expressions::ParameterExpression* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::ParameterExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETPARAMID_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetId(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_GETID_OFFSET))(arg, nullptr);
		}

		::System::Void Out(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUT_OFFSET))(str, nullptr);
		}

		::System::Void Out(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUT_OFFSET))(arg, nullptr);
		}

		::System::String* ExpressionToString(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::String*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_EXPRESSIONTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* CatchBlockToString(::System::Linq::Expressions::CatchBlock* arg)
		{
			return (return (::System::String*(*)(::System::Linq::Expressions::CatchBlock*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_CATCHBLOCKTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void VisitExpressions(::System::Char arg, Il2CppObject* arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, Il2CppObject*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITEXPRESSIONS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void VisitExpressions(::System::Char arg, Il2CppObject* arg, ::System::Char arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Char, Il2CppObject*, ::System::Char, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITEXPRESSIONS_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitBinary(::System::Linq::Expressions::BinaryExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::BinaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITBINARY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ParameterExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitLambda(Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLAMBDA_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ConditionalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCONDITIONAL_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitConstant(::System::Linq::Expressions::ConstantExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ConstantExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCONSTANT_OFFSET))(arg, nullptr);
		}

		::System::Void OutMember(::System::Linq::Expressions::Expression* arg, ::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_OUTMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitMember(::System::Linq::Expressions::MemberExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::MemberExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitInvocation(::System::Linq::Expressions::InvocationExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::InvocationExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITINVOCATION_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitMethodCall(::System::Linq::Expressions::MethodCallExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::MethodCallExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITMETHODCALL_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitNewArray(::System::Linq::Expressions::NewArrayExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::NewArrayExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITNEWARRAY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitNew(::System::Linq::Expressions::NewExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::NewExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITNEW_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitTypeBinary(::System::Linq::Expressions::TypeBinaryExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::TypeBinaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITTYPEBINARY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitUnary(::System::Linq::Expressions::UnaryExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::UnaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITUNARY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::BlockExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitDefault(::System::Linq::Expressions::DefaultExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::DefaultExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitLabel(::System::Linq::Expressions::LabelExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::LabelExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLABEL_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitGoto(::System::Linq::Expressions::GotoExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::GotoExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITGOTO_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitLoop(::System::Linq::Expressions::LoopExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::LoopExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITLOOP_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* arg)
		{
			return (return (::System::Linq::Expressions::CatchBlock*(*)(::System::Linq::Expressions::CatchBlock*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITCATCHBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitTry(::System::Linq::Expressions::TryExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::TryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITTRY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitIndex(::System::Linq::Expressions::IndexExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::IndexExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITINDEX_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitExtension(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_VISITEXTENSION_OFFSET))(arg, nullptr);
		}

		::System::Void DumpLabel(::System::Linq::Expressions::LabelTarget* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::LabelTarget*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_DUMPLABEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBool(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Boolean(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONSTRINGBUILDER_ISBOOL_OFFSET))(arg, nullptr);
		}

	};
}

