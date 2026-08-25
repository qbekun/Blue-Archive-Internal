#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CraftPresetSlotDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42380)
#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETRESPONSE_SET_PRESETSLOTDB_OFFSET UNITYSDK_OFFSET(0xF42390)
#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETRESPONSE_GET_PRESETSLOTDB_OFFSET UNITYSDK_OFFSET(0xF423A0)
#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF423B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftSavePresetResponse_TypeDefinitionIndex = 11624;

	class CraftSavePresetResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CraftPresetSlotDB* _PresetSlotDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PresetSlotDB(::MX::GameLogic::DBModel::CraftPresetSlotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftPresetSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETRESPONSE_SET_PRESETSLOTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CraftPresetSlotDB* get_PresetSlotDB()
		{
			return ((::MX::GameLogic::DBModel::CraftPresetSlotDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETRESPONSE_GET_PRESETSLOTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

