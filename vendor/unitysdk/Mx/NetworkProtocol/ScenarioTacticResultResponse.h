#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class Strategy; }
namespace MX::GameLogic::DBModel { class StoryStrategyStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E250)
#define MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4E260)
#define MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_SET_ISPLAYERWIN_OFFSET UNITYSDK_OFFSET(0xF4E270)
#define MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_GET_STRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF4E280)
#define MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_SET_STRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF4E290)
#define MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4E2A0)
#define MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_GET_ISPLAYERWIN_OFFSET UNITYSDK_OFFSET(0xF4E2B0)
#define MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E2C0)
#define MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_GET_SCENARIOIDS_OFFSET UNITYSDK_OFFSET(0xF4E2D0)
#define MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_SET_SCENARIOIDS_OFFSET UNITYSDK_OFFSET(0xF4E2E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioTacticResultResponse_TypeDefinitionIndex = 12090;

	class ScenarioTacticResultResponse : public Il2CppObject
	{
	public:
		::MX::Campaign::Strategy* _StrategyObject_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* _SaveDataDB_k__BackingField; // 0x58
		::System::Boolean _IsPlayerWin_k__BackingField; // 0x60
		Il2CppObject* _ScenarioIds_k__BackingField; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void set_IsPlayerWin(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_SET_ISPLAYERWIN_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::Strategy* get_StrategyObject()
		{
			return ((::MX::Campaign::Strategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_GET_STRATEGYOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_StrategyObject(::MX::Campaign::Strategy* arg)
		{
			((::System::Void(*)(::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_SET_STRATEGYOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlayerWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_GET_ISPLAYERWIN_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ScenarioIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_GET_SCENARIOIDS_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOTACTICRESULTRESPONSE_SET_SCENARIOIDS_OFFSET))(arg, nullptr);
		}

	};
}

