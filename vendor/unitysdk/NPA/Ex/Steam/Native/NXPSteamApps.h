#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamAppId_t; }

#define NPA_EX_STEAM_NATIVE_NXPSTEAMAPPS_GETCURRENTGAMELANGUAGE_OFFSET UNITYSDK_OFFSET(0x9D37690)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMAPPS_BISSUBSCRIBED_OFFSET UNITYSDK_OFFSET(0x9D377B0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMAPPS_GETEARLIESTPURCHASEUNIXTIME_OFFSET UNITYSDK_OFFSET(0x9D378C0)

namespace NPA::Ex::Steam::Native
{
	inline static constexpr unsigned int NXPSteamApps_TypeDefinitionIndex = 26076;

	class NXPSteamApps : public Il2CppObject
	{
	public:
		::System::String* GetCurrentGameLanguage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMAPPS_GETCURRENTGAMELANGUAGE_OFFSET))(nullptr);
		}

		::System::Boolean BIsSubscribed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMAPPS_BISSUBSCRIBED_OFFSET))(nullptr);
		}

		::System::UInt32 GetEarliestPurchaseUnixTime(::NPA::Ex::Steam::NXPSteamAppId_t* arg)
		{
			return (return (::System::UInt32(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMAPPS_GETEARLIESTPURCHASEUNIXTIME_OFFSET))(arg, nullptr);
		}

	};
}

