#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9661D30)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x9661DC0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9661E60)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_REWRITE_OFFSET UNITYSDK_OFFSET(0x9661E70)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InvocationExpression1_TypeDefinitionIndex = 33059;

	class InvocationExpression1 : public Il2CppObject
	{
	public:
		::System::Object* _arg0; // 0x20

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Type* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::InvocationExpression*(*)(::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION1_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

