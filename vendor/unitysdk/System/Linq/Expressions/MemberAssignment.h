#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x9662F40)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberAssignment_TypeDefinitionIndex = 33077;

	class MemberAssignment : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _expression; // 0x20

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERASSIGNMENT_GET_EXPRESSION_OFFSET))(nullptr);
		}

	};
}

