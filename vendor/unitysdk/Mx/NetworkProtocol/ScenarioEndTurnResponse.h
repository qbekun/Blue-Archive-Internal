#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class StoryStrategyStageSaveDB; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_SET_SCENARIOIDS_OFFSET UNITYSDK_OFFSET(0xF4E090)
#define MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E0A0)
#define MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF4E0B0)
#define MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF4E0C0)
#define MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4E0D0)
#define MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_GET_SCENARIOIDS_OFFSET UNITYSDK_OFFSET(0xF4E0E0)
#define MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E0F0)
#define MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4E100)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioEndTurnResponse_TypeDefinitionIndex = 12086;

	class ScenarioEndTurnResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* _SaveDataDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x58
		Il2CppObject* _ScenarioIds_k__BackingField; // 0x60

		::System::Void set_ScenarioIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_SET_SCENARIOIDS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ScenarioIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_GET_SCENARIOIDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENDTURNRESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

	};
}

