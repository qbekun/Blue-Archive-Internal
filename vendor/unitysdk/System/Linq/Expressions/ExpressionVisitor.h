#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x965D1F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x965FC30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x965FC60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITARGUMENTS_OFFSET UNITYSDK_OFFSET(0x965FF00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITPARAMETERS_OFFSET UNITYSDK_OFFSET(0x965FF10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITANDCONVERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITANDCONVERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITBINARY_OFFSET UNITYSDK_OFFSET(0x965FF20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x9660160)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCONDITIONAL_OFFSET UNITYSDK_OFFSET(0x9660230)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCONSTANT_OFFSET UNITYSDK_OFFSET(0x9660350)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITDEFAULT_OFFSET UNITYSDK_OFFSET(0x9660360)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITEXTENSION_OFFSET UNITYSDK_OFFSET(0x9660370)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITGOTO_OFFSET UNITYSDK_OFFSET(0x96603A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITINVOCATION_OFFSET UNITYSDK_OFFSET(0x9660510)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLABELTARGET_OFFSET UNITYSDK_OFFSET(0x9660590)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLABEL_OFFSET UNITYSDK_OFFSET(0x96605A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLAMBDA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLOOP_OFFSET UNITYSDK_OFFSET(0x96606C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITMEMBER_OFFSET UNITYSDK_OFFSET(0x9660820)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITINDEX_OFFSET UNITYSDK_OFFSET(0x9660940)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITMETHODCALL_OFFSET UNITYSDK_OFFSET(0x9660AD0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITNEWARRAY_OFFSET UNITYSDK_OFFSET(0x9660B80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITNEW_OFFSET UNITYSDK_OFFSET(0x9660D00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x9660E20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x9660E30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITTRY_OFFSET UNITYSDK_OFFSET(0x9660F40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITTYPEBINARY_OFFSET UNITYSDK_OFFSET(0x9661130)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITUNARY_OFFSET UNITYSDK_OFFSET(0x9661210)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATEUNARY_OFFSET UNITYSDK_OFFSET(0x9661380)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATEBINARY_OFFSET UNITYSDK_OFFSET(0x965FFF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATECHILDTYPE_OFFSET UNITYSDK_OFFSET(0x9661480)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITDYNAMIC_OFFSET UNITYSDK_OFFSET(0x9661530)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ExpressionVisitor_TypeDefinitionIndex = 33050;

	class ExpressionVisitor : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Visit(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Visit(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* VisitArguments(::System::Linq::Expressions::IArgumentProvider* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Linq::Expressions::IArgumentProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITARGUMENTS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* VisitParameters(::System::Linq::Expressions::IParameterProvider* arg, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Linq::Expressions::IParameterProvider*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITPARAMETERS_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* Visit(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISIT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* VisitAndConvert(Il2CppObject* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITANDCONVERT_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* VisitAndConvert(Il2CppObject* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITANDCONVERT_OFFSET))(arg, str, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitBinary(::System::Linq::Expressions::BinaryExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::BinaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITBINARY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::BlockExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ConditionalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCONDITIONAL_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitConstant(::System::Linq::Expressions::ConstantExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ConstantExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCONSTANT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitDefault(::System::Linq::Expressions::DefaultExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::DefaultExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitExtension(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITEXTENSION_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitGoto(::System::Linq::Expressions::GotoExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::GotoExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITGOTO_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitInvocation(::System::Linq::Expressions::InvocationExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::InvocationExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITINVOCATION_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::LabelTarget* VisitLabelTarget(::System::Linq::Expressions::LabelTarget* arg)
		{
			return (return (::System::Linq::Expressions::LabelTarget*(*)(::System::Linq::Expressions::LabelTarget*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLABELTARGET_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitLabel(::System::Linq::Expressions::LabelExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::LabelExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLABEL_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitLambda(Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLAMBDA_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitLoop(::System::Linq::Expressions::LoopExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::LoopExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITLOOP_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitMember(::System::Linq::Expressions::MemberExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::MemberExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitIndex(::System::Linq::Expressions::IndexExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::IndexExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITINDEX_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitMethodCall(::System::Linq::Expressions::MethodCallExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::MethodCallExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITMETHODCALL_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitNewArray(::System::Linq::Expressions::NewArrayExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::NewArrayExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITNEWARRAY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitNew(::System::Linq::Expressions::NewExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::NewExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITNEW_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ParameterExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* arg)
		{
			return (return (::System::Linq::Expressions::CatchBlock*(*)(::System::Linq::Expressions::CatchBlock*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITCATCHBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitTry(::System::Linq::Expressions::TryExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::TryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITTRY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitTypeBinary(::System::Linq::Expressions::TypeBinaryExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::TypeBinaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITTYPEBINARY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitUnary(::System::Linq::Expressions::UnaryExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::UnaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITUNARY_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::UnaryExpression* ValidateUnary(::System::Linq::Expressions::UnaryExpression* arg, ::System::Linq::Expressions::UnaryExpression* arg)
		{
			return (return (::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::UnaryExpression*, ::System::Linq::Expressions::UnaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATEUNARY_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::BinaryExpression* ValidateBinary(::System::Linq::Expressions::BinaryExpression* arg, ::System::Linq::Expressions::BinaryExpression* arg)
		{
			return (return (::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::BinaryExpression*, ::System::Linq::Expressions::BinaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATEBINARY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateChildType(::System::Type* arg, ::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VALIDATECHILDTYPE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitDynamic(::System::Linq::Expressions::DynamicExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::DynamicExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONVISITOR_VISITDYNAMIC_OFFSET))(arg, nullptr);
		}

	};
}

