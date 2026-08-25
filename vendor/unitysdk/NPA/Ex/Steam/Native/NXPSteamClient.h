#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPHSteamPipe; }
namespace NPA::Ex::Steam { class NXPHSteamUser; }
namespace NPA::Ex::Steam { class NXPSteamAPIWarningMessageHook; }

#define NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_GETISTEAMUTILS_OFFSET UNITYSDK_OFFSET(0x9D2F580)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_GETISTEAMFRIENDS_OFFSET UNITYSDK_OFFSET(0x9D2F360)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_GETISTEAMUSER_OFFSET UNITYSDK_OFFSET(0x9D2F790)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_GETISTEAMAPPS_OFFSET UNITYSDK_OFFSET(0x9D2F9B0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_GETISTEAMINVENTORY_OFFSET UNITYSDK_OFFSET(0x9D2FBD0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_SETWARNINGMESSAGEHOOK_OFFSET UNITYSDK_OFFSET(0x9D379E0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D37B00)

namespace NPA::Ex::Steam::Native
{
	inline static constexpr unsigned int NXPSteamClient_TypeDefinitionIndex = 26077;

	class NXPSteamClient : public Il2CppObject
	{
	public:
		::System::Int32 GetISteamUtils(::NPA::Ex::Steam::NXPHSteamPipe* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPHSteamPipe*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_GETISTEAMUTILS_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 GetISteamFriends(::NPA::Ex::Steam::NXPHSteamUser* arg, ::NPA::Ex::Steam::NXPHSteamPipe* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPHSteamUser*, ::NPA::Ex::Steam::NXPHSteamPipe*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_GETISTEAMFRIENDS_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Int32 GetISteamUser(::NPA::Ex::Steam::NXPHSteamUser* arg, ::NPA::Ex::Steam::NXPHSteamPipe* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPHSteamUser*, ::NPA::Ex::Steam::NXPHSteamPipe*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_GETISTEAMUSER_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Int32 GetISteamApps(::NPA::Ex::Steam::NXPHSteamUser* arg, ::NPA::Ex::Steam::NXPHSteamPipe* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPHSteamUser*, ::NPA::Ex::Steam::NXPHSteamPipe*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_GETISTEAMAPPS_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Int32 GetISteamInventory(::NPA::Ex::Steam::NXPHSteamUser* arg, ::NPA::Ex::Steam::NXPHSteamPipe* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::NPA::Ex::Steam::NXPHSteamUser*, ::NPA::Ex::Steam::NXPHSteamPipe*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_GETISTEAMINVENTORY_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void SetWarningMessageHook(::NPA::Ex::Steam::NXPSteamAPIWarningMessageHook* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAPIWarningMessageHook*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_SETWARNINGMESSAGEHOOK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMCLIENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

