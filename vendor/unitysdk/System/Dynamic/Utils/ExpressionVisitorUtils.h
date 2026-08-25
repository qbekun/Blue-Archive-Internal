#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITBLOCKEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x96BFF80)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITPARAMETERS_OFFSET UNITYSDK_OFFSET(0x96C01C0)
#define SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITARGUMENTS_OFFSET UNITYSDK_OFFSET(0x96C0560)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ExpressionVisitorUtils_TypeDefinitionIndex = 33576;

	class ExpressionVisitorUtils : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* VisitBlockExpressions(::System::Linq::Expressions::ExpressionVisitor* arg, ::System::Linq::Expressions::BlockExpression* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::BlockExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITBLOCKEXPRESSIONS_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* VisitParameters(::System::Linq::Expressions::ExpressionVisitor* arg, ::System::Linq::Expressions::IParameterProvider* arg, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::IParameterProvider*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITPARAMETERS_OFFSET))(arg, arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* VisitArguments(::System::Linq::Expressions::ExpressionVisitor* arg, ::System::Linq::Expressions::IArgumentProvider* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::System::Linq::Expressions::IArgumentProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_EXPRESSIONVISITORUTILS_VISITARGUMENTS_OFFSET))(arg, arg, nullptr);
		}

	};
}

