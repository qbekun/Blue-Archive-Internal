#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPChatSteamIDInstanceFlags; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int ENXPChatSteamIDInstanceFlags_TypeDefinitionIndex = 26000;

	class ENXPChatSteamIDInstanceFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::ENXPChatSteamIDInstanceFlags* k_EChatAccountInstanceMask; // 0x0
		::NPA::Ex::Steam::ENXPChatSteamIDInstanceFlags* k_EChatInstanceFlagClan; // 0x0
		::NPA::Ex::Steam::ENXPChatSteamIDInstanceFlags* k_EChatInstanceFlagLobby; // 0x0
		::NPA::Ex::Steam::ENXPChatSteamIDInstanceFlags* k_EChatInstanceFlagMMSLobby; // 0x0

	};
}

