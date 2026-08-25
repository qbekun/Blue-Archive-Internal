#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_BLOCK4_.CTOR_OFFSET UNITYSDK_OFFSET(0x96506E0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK4_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x9650790)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK4_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9650830)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK4_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x9650840)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCK4_REWRITE_OFFSET UNITYSDK_OFFSET(0x9650850)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Block4_TypeDefinitionIndex = 33013;

	class Block4 : public Il2CppObject
	{
	public:
		::System::Object* _arg0; // 0x10
		::System::Linq::Expressions::Expression* _arg1; // 0x18
		::System::Linq::Expressions::Expression* _arg2; // 0x20
		::System::Linq::Expressions::Expression* _arg3; // 0x28

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK4_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK4_GETEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExpressionCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK4_GET_EXPRESSIONCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeExpressions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK4_GETORMAKEEXPRESSIONS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::BlockExpression*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCK4_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

