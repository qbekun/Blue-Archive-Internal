#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION0`1_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION0`1_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION0`1_REWRITE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression0`1_TypeDefinitionIndex = 33069;

	class Expression0`1 : public <>c__DisplayClass3_3
	{
	public:
		::System::Void .ctor(::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION0`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION0`1_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ParameterExpression* GetParameter(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::ParameterExpression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION0`1_GETPARAMETER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Rewrite(::System::Linq::Expressions::Expression* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION0`1_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

