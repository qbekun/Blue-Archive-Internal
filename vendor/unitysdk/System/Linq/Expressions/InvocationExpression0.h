#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9661BF0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x9661C70)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9661CD0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_REWRITE_OFFSET UNITYSDK_OFFSET(0x9661CE0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InvocationExpression0_TypeDefinitionIndex = 33058;

	class InvocationExpression0 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::InvocationExpression*(*)(::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION0_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

