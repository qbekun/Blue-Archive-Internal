#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class StoryStrategyStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4DEA0)
#define MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONRESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4DEB0)
#define MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONRESPONSE_SET_WITHDRAWECHELONDBS_OFFSET UNITYSDK_OFFSET(0xF4DEC0)
#define MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DED0)
#define MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONRESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4DEE0)
#define MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONRESPONSE_GET_WITHDRAWECHELONDBS_OFFSET UNITYSDK_OFFSET(0xF4DEF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioWithdrawEchelonResponse_TypeDefinitionIndex = 12082;

	class ScenarioWithdrawEchelonResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* _SaveDataDB_k__BackingField; // 0x50
		Il2CppObject* _WithdrawEchelonDBs_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONRESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void set_WithdrawEchelonDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONRESPONSE_SET_WITHDRAWECHELONDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONRESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WithdrawEchelonDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONRESPONSE_GET_WITHDRAWECHELONDBS_OFFSET))(nullptr);
		}

	};
}

