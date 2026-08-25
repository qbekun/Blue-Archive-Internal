#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class StoryStrategyStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E490)
#define MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E4A0)
#define MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E4B0)
#define MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E4C0)
#define MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4E4D0)
#define MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF4E4E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioRestartMainStageResponse_TypeDefinitionIndex = 12096;

	class ScenarioRestartMainStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* _SaveDataDB_k__BackingField; // 0x58

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

	};
}

