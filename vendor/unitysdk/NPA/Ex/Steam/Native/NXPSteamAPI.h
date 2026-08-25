#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPHSteamUser; }
namespace NPA::Ex::Steam { class NXPHSteamPipe; }
namespace NPA::Ex::Steam { class NXPSteamAppId_t; }

#define NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_INIT_OFFSET UNITYSDK_OFFSET(0x9D35D80)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9D35A60)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_GETHSTEAMUSER_OFFSET UNITYSDK_OFFSET(0x9D2EEF0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_GETHSTEAMPIPE_OFFSET UNITYSDK_OFFSET(0x9D2EFC0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_RUNCALLBACKS_OFFSET UNITYSDK_OFFSET(0x9D35CE0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_ISSTEAMRUNNING_OFFSET UNITYSDK_OFFSET(0x9D374D0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_RESTARTAPPIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9D375A0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D37680)

namespace NPA::Ex::Steam::Native
{
	inline static constexpr unsigned int NXPSteamAPI_TypeDefinitionIndex = 26075;

	class NXPSteamAPI : public Il2CppObject
	{
	public:
		::System::Boolean Init()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_INIT_OFFSET))(nullptr);
		}

		::System::Void ShutDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_SHUTDOWN_OFFSET))(nullptr);
		}

		::NPA::Ex::Steam::NXPHSteamUser* GetHSteamUser()
		{
			return (return (::NPA::Ex::Steam::NXPHSteamUser*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_GETHSTEAMUSER_OFFSET))(nullptr);
		}

		::NPA::Ex::Steam::NXPHSteamPipe* GetHSteamPipe()
		{
			return (return (::NPA::Ex::Steam::NXPHSteamPipe*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_GETHSTEAMPIPE_OFFSET))(nullptr);
		}

		::System::Void RunCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_RUNCALLBACKS_OFFSET))(nullptr);
		}

		::System::Boolean IsSteamRunning()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_ISSTEAMRUNNING_OFFSET))(nullptr);
		}

		::System::Boolean RestartAppIfNecessary(::NPA::Ex::Steam::NXPSteamAppId_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_RESTARTAPPIFNECESSARY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMAPI_.CTOR_OFFSET))(nullptr);
		}

	};
}

