#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::methinks { class CommandFilterOperatorType; }

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int CommandFilterOperatorType_TypeDefinitionIndex = 26751;

	class CommandFilterOperatorType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::methinks::CommandFilterOperatorType* EQUAL; // 0x0
		::NPA::Editor::methinks::CommandFilterOperatorType* NOT_EQUAL; // 0x0
		::NPA::Editor::methinks::CommandFilterOperatorType* GREATER; // 0x0
		::NPA::Editor::methinks::CommandFilterOperatorType* GREATER_EQUAL; // 0x0
		::NPA::Editor::methinks::CommandFilterOperatorType* LESS; // 0x0
		::NPA::Editor::methinks::CommandFilterOperatorType* LESS_EQUAL; // 0x0
		::NPA::Editor::methinks::CommandFilterOperatorType* RANGE; // 0x0

	};
}

