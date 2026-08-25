#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamFriendFlags; }
namespace NPA::Ex::Steam { class NXPCSteamID; }
namespace NPA::Ex::Steam { class ENXPSteamPersonaState; }
namespace NPA::Ex::Steam { class NXPSteamFriendGameInfo_t&; }
namespace NPA::Ex::Steam { class NXPSteamAppId_t; }
namespace NPA::Ex::Steam { class ENXPSteamOverlayToStoreFlag; }

#define NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_GETPERSONANAME_OFFSET UNITYSDK_OFFSET(0x9D37B10)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_GETFRIENDCOUNT_OFFSET UNITYSDK_OFFSET(0x9D37C30)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_GETFRIENDBYINDEX_OFFSET UNITYSDK_OFFSET(0x9D37D50)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_GETFRIENDPERSONASTATE_OFFSET UNITYSDK_OFFSET(0x9D37E90)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_GETFRIENDPERSONANAME_OFFSET UNITYSDK_OFFSET(0x9D37FB0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_GETFRIENDGAMEPLAYED_OFFSET UNITYSDK_OFFSET(0x9D380D0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_ACTIVATEGAMEOVERLAYTOSTORE_OFFSET UNITYSDK_OFFSET(0x9D381F0)

namespace NPA::Ex::Steam::Native
{
	inline static constexpr unsigned int NXPSteamFriends_TypeDefinitionIndex = 26078;

	class NXPSteamFriends : public Il2CppObject
	{
	public:
		::System::String* GetPersonaName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_GETPERSONANAME_OFFSET))(nullptr);
		}

		::System::Int32 GetFriendCount(::NPA::Ex::Steam::ENXPSteamFriendFlags* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::ENXPSteamFriendFlags*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_GETFRIENDCOUNT_OFFSET))(arg, nullptr);
		}

		::NPA::Ex::Steam::NXPCSteamID* GetFriendByIndex(::System::Int32 arg, ::NPA::Ex::Steam::ENXPSteamFriendFlags* arg)
		{
			return (return (::NPA::Ex::Steam::NXPCSteamID*(*)(::System::Int32, ::NPA::Ex::Steam::ENXPSteamFriendFlags*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_GETFRIENDBYINDEX_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::ENXPSteamPersonaState* GetFriendPersonaState(::NPA::Ex::Steam::NXPCSteamID* arg)
		{
			return (return (::NPA::Ex::Steam::ENXPSteamPersonaState*(*)(::NPA::Ex::Steam::NXPCSteamID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_GETFRIENDPERSONASTATE_OFFSET))(arg, nullptr);
		}

		::System::String* GetFriendPersonaName(::NPA::Ex::Steam::NXPCSteamID* arg)
		{
			return (return (::System::String*(*)(::NPA::Ex::Steam::NXPCSteamID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_GETFRIENDPERSONANAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetFriendGamePlayed(::NPA::Ex::Steam::NXPCSteamID* arg, ::NPA::Ex::Steam::NXPSteamFriendGameInfo_t&* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPCSteamID*, ::NPA::Ex::Steam::NXPSteamFriendGameInfo_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_GETFRIENDGAMEPLAYED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ActivateGameOverlayToStore(::NPA::Ex::Steam::NXPSteamAppId_t* arg, ::NPA::Ex::Steam::ENXPSteamOverlayToStoreFlag* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::NPA::Ex::Steam::ENXPSteamOverlayToStoreFlag*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMFRIENDS_ACTIVATEGAMEOVERLAYTOSTORE_OFFSET))(arg, arg, nullptr);
		}

	};
}

