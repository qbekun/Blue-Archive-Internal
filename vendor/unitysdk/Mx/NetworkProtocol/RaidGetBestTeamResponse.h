#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDGETBESTTEAMRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D4A0)
#define MX_NETWORKPROTOCOL_RAIDGETBESTTEAMRESPONSE_GET_RAIDTEAMSETTINGDBS_OFFSET UNITYSDK_OFFSET(0xF4D4B0)
#define MX_NETWORKPROTOCOL_RAIDGETBESTTEAMRESPONSE_SET_RAIDTEAMSETTINGDBS_OFFSET UNITYSDK_OFFSET(0xF4D4C0)
#define MX_NETWORKPROTOCOL_RAIDGETBESTTEAMRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D4D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidGetBestTeamResponse_TypeDefinitionIndex = 12048;

	class RaidGetBestTeamResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _RaidTeamSettingDBs_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGETBESTTEAMRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_RaidTeamSettingDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGETBESTTEAMRESPONSE_GET_RAIDTEAMSETTINGDBS_OFFSET))(nullptr);
		}

		::System::Void set_RaidTeamSettingDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGETBESTTEAMRESPONSE_SET_RAIDTEAMSETTINGDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGETBESTTEAMRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

