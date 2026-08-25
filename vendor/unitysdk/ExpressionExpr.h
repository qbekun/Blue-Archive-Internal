#pragma once
#include "unitysdk.h"

#define EXPRESSIONEXPR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9087C30)

	inline static constexpr unsigned int ExpressionExpr_TypeDefinitionIndex = 34437;

	class ExpressionExpr : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* Expression; // 0x40

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONEXPR_.CTOR_OFFSET))(arg, nullptr);
		}

	};

