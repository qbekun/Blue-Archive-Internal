#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96527C0)
#define SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSION_GETFALSE_OFFSET UNITYSDK_OFFSET(0x9652A00)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int FullConditionalExpression_TypeDefinitionIndex = 33027;

	class FullConditionalExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _false; // 0x20

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetFalse()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSION_GETFALSE_OFFSET))(nullptr);
		}

	};
}

