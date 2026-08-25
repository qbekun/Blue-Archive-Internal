#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPCGameID; }
namespace NPA::Ex::Steam { class NXPCSteamID; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamFriendGameInfo_t_TypeDefinitionIndex = 26010;

	class NXPSteamFriendGameInfo_t : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPCGameID* m_gameID; // 0x10
		::System::UInt32 m_unGameIP; // 0x18
		::System::UInt16 m_usGamePort; // 0x1C
		::System::UInt16 m_usQueryPort; // 0x1E
		::NPA::Ex::Steam::NXPCSteamID* m_steamIDLobby; // 0x20

	};
}

