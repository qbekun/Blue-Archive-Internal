#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamFriendFlags; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int ENXPSteamFriendFlags_TypeDefinitionIndex = 26003;

	class ENXPSteamFriendFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::ENXPSteamFriendFlags* k_EFriendFlagNone; // 0x0
		::NPA::Ex::Steam::ENXPSteamFriendFlags* k_EFriendFlagBlocked; // 0x0
		::NPA::Ex::Steam::ENXPSteamFriendFlags* k_EFriendFlagFriendshipRequested; // 0x0
		::NPA::Ex::Steam::ENXPSteamFriendFlags* k_EFriendFlagImmediate; // 0x0
		::NPA::Ex::Steam::ENXPSteamFriendFlags* k_EFriendFlagClanMember; // 0x0
		::NPA::Ex::Steam::ENXPSteamFriendFlags* k_EFriendFlagOnGameServer; // 0x0
		::NPA::Ex::Steam::ENXPSteamFriendFlags* k_EFriendFlagRequestingFriendship; // 0x0
		::NPA::Ex::Steam::ENXPSteamFriendFlags* k_EFriendFlagRequestingInfo; // 0x0
		::NPA::Ex::Steam::ENXPSteamFriendFlags* k_EFriendFlagIgnored; // 0x0
		::NPA::Ex::Steam::ENXPSteamFriendFlags* k_EFriendFlagIgnoredFriend; // 0x0
		::NPA::Ex::Steam::ENXPSteamFriendFlags* k_EFriendFlagChatMember; // 0x0
		::NPA::Ex::Steam::ENXPSteamFriendFlags* k_EFriendFlagAll; // 0x0

	};
}

