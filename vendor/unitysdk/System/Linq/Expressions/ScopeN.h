#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9651240)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GET_BODY_OFFSET UNITYSDK_OFFSET(0x96512C0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x96512D0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9651370)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x9651410)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEN_REWRITE_OFFSET UNITYSDK_OFFSET(0x9651450)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ScopeN_TypeDefinitionIndex = 33018;

	class ScopeN : public Il2CppObject
	{
	public:
		Il2CppObject* _body; // 0x18

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Body()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GET_BODY_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GETEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExpressionCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GET_EXPRESSIONCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeExpressions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN_GETORMAKEEXPRESSIONS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::BlockExpression*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEN_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

