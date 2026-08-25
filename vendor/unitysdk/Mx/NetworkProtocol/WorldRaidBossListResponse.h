#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50C40)
#define MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50C50)
#define MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTRESPONSE_SET_BOSSLISTINFODBS_OFFSET UNITYSDK_OFFSET(0xF50C60)
#define MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTRESPONSE_GET_BOSSLISTINFODBS_OFFSET UNITYSDK_OFFSET(0xF50C70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WorldRaidBossListResponse_TypeDefinitionIndex = 12202;

	class WorldRaidBossListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _BossListInfoDBs_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_BossListInfoDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTRESPONSE_SET_BOSSLISTINFODBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BossListInfoDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTRESPONSE_GET_BOSSLISTINFODBS_OFFSET))(nullptr);
		}

	};
}

