#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class StoryStrategyStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4DD20)
#define MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_GET_SCENARIOIDS_OFFSET UNITYSDK_OFFSET(0xF4DD30)
#define MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DD40)
#define MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4DD50)
#define MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_SET_SCENARIOIDS_OFFSET UNITYSDK_OFFSET(0xF4DD60)
#define MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4DD70)
#define MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4DD80)
#define MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4DD90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioConfirmMainStageResponse_TypeDefinitionIndex = 12078;

	class ScenarioConfirmMainStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* _SaveDataDB_k__BackingField; // 0x58
		Il2CppObject* _ScenarioIds_k__BackingField; // 0x60

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ScenarioIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_GET_SCENARIOIDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_SET_SCENARIOIDS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCONFIRMMAINSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

