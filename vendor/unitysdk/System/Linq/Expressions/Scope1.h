#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_SCOPE1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9650EE0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPE1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9650F60)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPE1_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x9650FE0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPE1_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9651050)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPE1_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x9651060)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPE1_REWRITE_OFFSET UNITYSDK_OFFSET(0x9651070)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Scope1_TypeDefinitionIndex = 33017;

	class Scope1 : public Il2CppObject
	{
	public:
		::System::Object* _body; // 0x18

		::System::Void .ctor(Il2CppObject* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPE1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Object* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPE1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPE1_GETEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExpressionCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPE1_GET_EXPRESSIONCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeExpressions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPE1_GETORMAKEEXPRESSIONS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::BlockExpression*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPE1_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

