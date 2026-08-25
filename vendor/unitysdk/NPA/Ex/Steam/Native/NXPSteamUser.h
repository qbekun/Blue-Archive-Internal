#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPCSteamID; }
namespace NPA::Ex::Steam { class NXPHAuthTicket; }

#define NPA_EX_STEAM_NATIVE_NXPSTEAMUSER_GETSTEAMID_OFFSET UNITYSDK_OFFSET(0x9D39290)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMUSER_GETAUTHSESSIONTICKET_OFFSET UNITYSDK_OFFSET(0x9D393D0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMUSER_BLOGGEDON_OFFSET UNITYSDK_OFFSET(0x9D39520)

namespace NPA::Ex::Steam::Native
{
	inline static constexpr unsigned int NXPSteamUser_TypeDefinitionIndex = 26081;

	class NXPSteamUser : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPCSteamID* GetSteamID()
		{
			return (return (::NPA::Ex::Steam::NXPCSteamID*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMUSER_GETSTEAMID_OFFSET))(nullptr);
		}

		::NPA::Ex::Steam::NXPHAuthTicket* GetAuthSessionTicket(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, uint32_t&* arg)
		{
			return (return (::NPA::Ex::Steam::NXPHAuthTicket*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMUSER_GETAUTHSESSIONTICKET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean BLoggedOn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMUSER_BLOGGEDON_OFFSET))(nullptr);
		}

	};
}

