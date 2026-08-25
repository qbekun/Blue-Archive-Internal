#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class StoryStrategyStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4DE00)
#define MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONRESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4DE10)
#define MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONRESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4DE20)
#define MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DE30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioDeployEchelonResponse_TypeDefinitionIndex = 12080;

	class ScenarioDeployEchelonResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* _SaveDataDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONRESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONRESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

