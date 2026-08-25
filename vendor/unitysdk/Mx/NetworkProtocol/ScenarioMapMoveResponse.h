#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class StoryStrategyStageSaveDB; }
namespace MX::Campaign { class Strategy; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DF90)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4DFA0)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4DFB0)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_SET_STRATEGYOBJECTPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xF4DFC0)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_SET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF4DFD0)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_GET_STRATEGYOBJECTPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xF4DFE0)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_GET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF4DFF0)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_SET_SCENARIOIDS_OFFSET UNITYSDK_OFFSET(0xF4E000)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_GET_SCENARIOIDS_OFFSET UNITYSDK_OFFSET(0xF4E010)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_SET_STRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF4E020)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_GET_STRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF4E030)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E040)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioMapMoveResponse_TypeDefinitionIndex = 12084;

	class ScenarioMapMoveResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* _SaveDataDB_k__BackingField; // 0x50
		Il2CppObject* _ScenarioIds_k__BackingField; // 0x58
		::System::Int64 _EchelonEntityId_k__BackingField; // 0x60
		::MX::Campaign::Strategy* _StrategyObject_k__BackingField; // 0x68
		Il2CppObject* _StrategyObjectParcelInfos_k__BackingField; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::System::Void set_StrategyObjectParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_SET_STRATEGYOBJECTPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_SET_ECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StrategyObjectParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_GET_STRATEGYOBJECTPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_GET_ECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_SET_SCENARIOIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ScenarioIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_GET_SCENARIOIDS_OFFSET))(nullptr);
		}

		::System::Void set_StrategyObject(::MX::Campaign::Strategy* arg)
		{
			((::System::Void(*)(::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_SET_STRATEGYOBJECT_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::Strategy* get_StrategyObject()
		{
			return ((::MX::Campaign::Strategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_GET_STRATEGYOBJECT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

