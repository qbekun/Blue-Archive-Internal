#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9661990)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x9661A20)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9661AC0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_REWRITE_OFFSET UNITYSDK_OFFSET(0x9661B60)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InvocationExpressionN_TypeDefinitionIndex = 33057;

	class InvocationExpressionN : public Il2CppObject
	{
	public:
		Il2CppObject* _arguments; // 0x20

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, Il2CppObject* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, Il2CppObject*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::InvocationExpression*(*)(::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSIONN_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

