#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::methinks { class CommandFilterValueType; }

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int CommandFilterValueType_TypeDefinitionIndex = 26752;

	class CommandFilterValueType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::methinks::CommandFilterValueType* INT64; // 0x0
		::NPA::Editor::methinks::CommandFilterValueType* DOUBLE; // 0x0
		::NPA::Editor::methinks::CommandFilterValueType* STRING; // 0x0
		::NPA::Editor::methinks::CommandFilterValueType* TIMESTAMP; // 0x0

	};
}

