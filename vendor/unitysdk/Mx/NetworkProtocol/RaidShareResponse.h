#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDSHARERESPONSE_GET_RAIDDB_OFFSET UNITYSDK_OFFSET(0xF4D220)
#define MX_NETWORKPROTOCOL_RAIDSHARERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D230)
#define MX_NETWORKPROTOCOL_RAIDSHARERESPONSE_SET_RAIDDB_OFFSET UNITYSDK_OFFSET(0xF4D240)
#define MX_NETWORKPROTOCOL_RAIDSHARERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D250)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidShareResponse_TypeDefinitionIndex = 12040;

	class RaidShareResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::RaidDB* _RaidDB_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::RaidDB* get_RaidDB()
		{
			return ((::MX::GameLogic::DBModel::RaidDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSHARERESPONSE_GET_RAIDDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSHARERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RaidDB(::MX::GameLogic::DBModel::RaidDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSHARERESPONSE_SET_RAIDDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSHARERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

