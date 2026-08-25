#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION2`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION2`1_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION2`1_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION2`1_REWRITE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression2`1_TypeDefinitionIndex = 33071;

	class Expression2`1 : public ::MX::Logic::GenericCondition::HasLogicEffectCondition
	{
	public:
		::System::Object* _par0; // 0x0
		::System::Linq::Expressions::ParameterExpression* _par1; // 0x0

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::ParameterExpression* arg, ::System::Linq::Expressions::ParameterExpression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::ParameterExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION2`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION2`1_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ParameterExpression* GetParameter(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::ParameterExpression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION2`1_GETPARAMETER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Rewrite(::System::Linq::Expressions::Expression* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION2`1_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

