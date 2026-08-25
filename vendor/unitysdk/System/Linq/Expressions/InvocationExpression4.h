#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_.CTOR_OFFSET UNITYSDK_OFFSET(0x96623D0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x96624B0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9662570)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_REWRITE_OFFSET UNITYSDK_OFFSET(0x9662580)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InvocationExpression4_TypeDefinitionIndex = 33062;

	class InvocationExpression4 : public Il2CppObject
	{
	public:
		::System::Object* _arg0; // 0x20
		::System::Linq::Expressions::Expression* _arg1; // 0x28
		::System::Linq::Expressions::Expression* _arg2; // 0x30
		::System::Linq::Expressions::Expression* _arg3; // 0x38

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Type* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::InvocationExpression*(*)(::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION4_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

