#pragma once
#include "../../../unitysdk.h"

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int GotoExpressionKind_TypeDefinitionIndex = 33051;

	class GotoExpressionKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Linq::Expressions::GotoExpressionKind* Goto; // 0x0
		::System::Linq::Expressions::GotoExpressionKind* Return; // 0x0
		::System::Linq::Expressions::GotoExpressionKind* Break; // 0x0
		::System::Linq::Expressions::GotoExpressionKind* Continue; // 0x0

	};
}

