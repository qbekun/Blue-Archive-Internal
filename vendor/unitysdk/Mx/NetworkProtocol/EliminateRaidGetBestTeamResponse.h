#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43220)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMRESPONSE_SET_RAIDTEAMSETTINGDBSDICT_OFFSET UNITYSDK_OFFSET(0xF43230)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMRESPONSE_GET_RAIDTEAMSETTINGDBSDICT_OFFSET UNITYSDK_OFFSET(0xF43240)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43250)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidGetBestTeamResponse_TypeDefinitionIndex = 11660;

	class EliminateRaidGetBestTeamResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _RaidTeamSettingDBsDict_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RaidTeamSettingDBsDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMRESPONSE_SET_RAIDTEAMSETTINGDBSDICT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RaidTeamSettingDBsDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMRESPONSE_GET_RAIDTEAMSETTINGDBSDICT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

