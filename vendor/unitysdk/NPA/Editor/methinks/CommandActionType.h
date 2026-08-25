#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::methinks { class CommandActionType; }

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int CommandActionType_TypeDefinitionIndex = 26748;

	class CommandActionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::methinks::CommandActionType* SCREEN_CAPTURE; // 0x0
		::NPA::Editor::methinks::CommandActionType* SURVEY; // 0x0
		::NPA::Editor::methinks::CommandActionType* RECORDING; // 0x0
		::NPA::Editor::methinks::CommandActionType* ALWAYS_ON_RECORDING; // 0x0

	};
}

