#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class StoryStrategyStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOPORTALRESPONSE_SET_STORYSTRATEGYSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0xF4E3F0)
#define MX_NETWORKPROTOCOL_SCENARIOPORTALRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E400)
#define MX_NETWORKPROTOCOL_SCENARIOPORTALRESPONSE_GET_STORYSTRATEGYSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0xF4E410)
#define MX_NETWORKPROTOCOL_SCENARIOPORTALRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E420)
#define MX_NETWORKPROTOCOL_SCENARIOPORTALRESPONSE_GET_SCENARIOIDS_OFFSET UNITYSDK_OFFSET(0xF4E430)
#define MX_NETWORKPROTOCOL_SCENARIOPORTALRESPONSE_SET_SCENARIOIDS_OFFSET UNITYSDK_OFFSET(0xF4E440)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioPortalResponse_TypeDefinitionIndex = 12094;

	class ScenarioPortalResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* _StoryStrategyStageSaveDB_k__BackingField; // 0x50
		Il2CppObject* _ScenarioIds_k__BackingField; // 0x58

		::System::Void set_StoryStrategyStageSaveDB(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOPORTALRESPONSE_SET_STORYSTRATEGYSTAGESAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOPORTALRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StoryStrategyStageSaveDB* get_StoryStrategyStageSaveDB()
		{
			return ((::MX::GameLogic::DBModel::StoryStrategyStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOPORTALRESPONSE_GET_STORYSTRATEGYSTAGESAVEDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOPORTALRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ScenarioIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOPORTALRESPONSE_GET_SCENARIOIDS_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOPORTALRESPONSE_SET_SCENARIOIDS_OFFSET))(arg, nullptr);
		}

	};
}

