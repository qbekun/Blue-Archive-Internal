#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_STEAM_NXPSTEAMAPICONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x9D2E680)
#define NPA_EX_STEAM_NXPSTEAMAPICONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x9D2E760)
#define NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMCLIENT_OFFSET UNITYSDK_OFFSET(0x9D2FE40)
#define NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMAPPS_OFFSET UNITYSDK_OFFSET(0x9D2FE80)
#define NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMFRIENDS_OFFSET UNITYSDK_OFFSET(0x9D2FEC0)
#define NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMUTILS_OFFSET UNITYSDK_OFFSET(0x9D2FF00)
#define NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMUSER_OFFSET UNITYSDK_OFFSET(0x9D2FF40)
#define NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMINVENTORY_OFFSET UNITYSDK_OFFSET(0x9D2FF80)
#define NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMINPUT_OFFSET UNITYSDK_OFFSET(0x9D2FFC0)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamAPIContext_TypeDefinitionIndex = 26069;

	class NXPSteamAPIContext : public Il2CppObject
	{
	public:
		::System::Int32 m_pSteamClient; // 0x0
		::System::Int32 m_pSteamApps; // 0x8
		::System::Int32 m_pSteamFriends; // 0x10
		::System::Int32 m_pSteamUtils; // 0x18
		::System::Int32 m_pSteamUser; // 0x20
		::System::Int32 m_pSteamInventory; // 0x28
		::System::Int32 m_pSteamInput; // 0x30

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICONTEXT_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Init()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICONTEXT_INIT_OFFSET))(nullptr);
		}

		::System::Int32 GetSteamClient()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMCLIENT_OFFSET))(nullptr);
		}

		::System::Int32 GetSteamApps()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMAPPS_OFFSET))(nullptr);
		}

		::System::Int32 GetSteamFriends()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMFRIENDS_OFFSET))(nullptr);
		}

		::System::Int32 GetSteamUtils()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMUTILS_OFFSET))(nullptr);
		}

		::System::Int32 GetSteamUser()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMUSER_OFFSET))(nullptr);
		}

		::System::Int32 GetSteamInventory()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMINVENTORY_OFFSET))(nullptr);
		}

		::System::Int32 GetSteamInput()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPICONTEXT_GETSTEAMINPUT_OFFSET))(nullptr);
		}

	};
}

