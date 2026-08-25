#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CraftPresetSlotDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42340)
#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42350)
#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETREQUEST_GET_PRESETSLOTDB_OFFSET UNITYSDK_OFFSET(0xF42360)
#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETREQUEST_SET_PRESETSLOTDB_OFFSET UNITYSDK_OFFSET(0xF42370)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftSavePresetRequest_TypeDefinitionIndex = 11623;

	class CraftSavePresetRequest : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CraftPresetSlotDB* _PresetSlotDB_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CraftPresetSlotDB* get_PresetSlotDB()
		{
			return ((::MX::GameLogic::DBModel::CraftPresetSlotDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETREQUEST_GET_PRESETSLOTDB_OFFSET))(nullptr);
		}

		::System::Void set_PresetSlotDB(::MX::GameLogic::DBModel::CraftPresetSlotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftPresetSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETREQUEST_SET_PRESETSLOTDB_OFFSET))(arg, nullptr);
		}

	};
}

