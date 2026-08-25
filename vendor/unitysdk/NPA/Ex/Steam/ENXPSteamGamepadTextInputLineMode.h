#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamGamepadTextInputLineMode; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int ENXPSteamGamepadTextInputLineMode_TypeDefinitionIndex = 26006;

	class ENXPSteamGamepadTextInputLineMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::ENXPSteamGamepadTextInputLineMode* k_EGamepadTextInputLineModeSingleLine; // 0x0
		::NPA::Ex::Steam::ENXPSteamGamepadTextInputLineMode* k_EGamepadTextInputLineModeMultipleLines; // 0x0

	};
}

