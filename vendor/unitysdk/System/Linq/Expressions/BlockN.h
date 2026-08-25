#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_BLOCKN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9650B30)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKN_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x9650B90)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKN_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9650C30)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKN_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x9650CD0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKN_REWRITE_OFFSET UNITYSDK_OFFSET(0x9650D10)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BlockN_TypeDefinitionIndex = 33015;

	class BlockN : public Il2CppObject
	{
	public:
		Il2CppObject* _expressions; // 0x10

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKN_GETEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExpressionCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKN_GET_EXPRESSIONCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeExpressions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKN_GETORMAKEEXPRESSIONS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::BlockExpression*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKN_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

