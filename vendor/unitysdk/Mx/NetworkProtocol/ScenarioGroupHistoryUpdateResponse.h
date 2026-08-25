#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ScenarioGroupHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATERESPONSE_GET_SCENARIOGROUPHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4D9A0)
#define MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D9B0)
#define MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D9C0)
#define MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATERESPONSE_SET_SCENARIOGROUPHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4D9D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioGroupHistoryUpdateResponse_TypeDefinitionIndex = 12064;

	class ScenarioGroupHistoryUpdateResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ScenarioGroupHistoryDB* _ScenarioGroupHistoryDB_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::ScenarioGroupHistoryDB* get_ScenarioGroupHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::ScenarioGroupHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATERESPONSE_GET_SCENARIOGROUPHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioGroupHistoryDB(::MX::GameLogic::DBModel::ScenarioGroupHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ScenarioGroupHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATERESPONSE_SET_SCENARIOGROUPHISTORYDB_OFFSET))(arg, nullptr);
		}

	};
}

