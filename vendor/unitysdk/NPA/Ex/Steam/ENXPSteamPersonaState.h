#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamPersonaState; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int ENXPSteamPersonaState_TypeDefinitionIndex = 26004;

	class ENXPSteamPersonaState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::ENXPSteamPersonaState* k_EPersonaStateOffline; // 0x0
		::NPA::Ex::Steam::ENXPSteamPersonaState* k_EPersonaStateOnline; // 0x0
		::NPA::Ex::Steam::ENXPSteamPersonaState* k_EPersonaStateBusy; // 0x0
		::NPA::Ex::Steam::ENXPSteamPersonaState* k_EPersonaStateAway; // 0x0
		::NPA::Ex::Steam::ENXPSteamPersonaState* k_EPersonaStateSnooze; // 0x0
		::NPA::Ex::Steam::ENXPSteamPersonaState* k_EPersonaStateLookingToTrade; // 0x0
		::NPA::Ex::Steam::ENXPSteamPersonaState* k_EPersonaStateLookingToPlay; // 0x0
		::NPA::Ex::Steam::ENXPSteamPersonaState* k_EPersonaStateInvisible; // 0x0
		::NPA::Ex::Steam::ENXPSteamPersonaState* k_EPersonaStateMax; // 0x0

	};
}

