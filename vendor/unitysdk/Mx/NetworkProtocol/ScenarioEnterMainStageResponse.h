#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class StoryStrategyStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOENTERMAINSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4DCA0)
#define MX_NETWORKPROTOCOL_SCENARIOENTERMAINSTAGERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4DCB0)
#define MX_NETWORKPROTOCOL_SCENARIOENTERMAINSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DCC0)
#define MX_NETWORKPROTOCOL_SCENARIOENTERMAINSTAGERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4DCD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioEnterMainStageResponse_TypeDefinitionIndex = 12076;

	class ScenarioEnterMainStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* _SaveDataDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERMAINSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERMAINSTAGERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERMAINSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERMAINSTAGERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

	};
}

