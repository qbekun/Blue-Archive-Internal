#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamGamepadTextInputMode; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int ENXPSteamGamepadTextInputMode_TypeDefinitionIndex = 26005;

	class ENXPSteamGamepadTextInputMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::ENXPSteamGamepadTextInputMode* k_EGamepadTextInputModeNormal; // 0x0
		::NPA::Ex::Steam::ENXPSteamGamepadTextInputMode* k_EGamepadTextInputModePassword; // 0x0

	};
}

