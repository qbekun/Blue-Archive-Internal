#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class CheatEquipmentCustomPreset; }

#define MX_NETWORKPROTOCOL_CHEATEQUIPMENTCUSTOMPRESET_CLONE_OFFSET UNITYSDK_OFFSET(0xF3F2E0)
#define MX_NETWORKPROTOCOL_CHEATEQUIPMENTCUSTOMPRESET_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF3F380)
#define MX_NETWORKPROTOCOL_CHEATEQUIPMENTCUSTOMPRESET_SET_TIER_OFFSET UNITYSDK_OFFSET(0xF3F390)
#define MX_NETWORKPROTOCOL_CHEATEQUIPMENTCUSTOMPRESET_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF3F3A0)
#define MX_NETWORKPROTOCOL_CHEATEQUIPMENTCUSTOMPRESET_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3F350)
#define MX_NETWORKPROTOCOL_CHEATEQUIPMENTCUSTOMPRESET_GET_TIER_OFFSET UNITYSDK_OFFSET(0xF3F3B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CheatEquipmentCustomPreset_TypeDefinitionIndex = 11532;

	class CheatEquipmentCustomPreset : public Il2CppObject
	{
	public:
		::System::Int32 _Tier_k__BackingField; // 0x10
		::System::Int32 _Level_k__BackingField; // 0x14

		::MX::NetworkProtocol::CheatEquipmentCustomPreset* Clone()
		{
			return ((::MX::NetworkProtocol::CheatEquipmentCustomPreset*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATEQUIPMENTCUSTOMPRESET_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATEQUIPMENTCUSTOMPRESET_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Tier(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATEQUIPMENTCUSTOMPRESET_SET_TIER_OFFSET))(arg, nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATEQUIPMENTCUSTOMPRESET_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATEQUIPMENTCUSTOMPRESET_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_Tier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATEQUIPMENTCUSTOMPRESET_GET_TIER_OFFSET))(nullptr);
		}

	};
}

