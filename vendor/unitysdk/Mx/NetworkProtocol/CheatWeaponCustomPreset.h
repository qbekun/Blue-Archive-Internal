#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class CheatWeaponCustomPreset; }

#define MX_NETWORKPROTOCOL_CHEATWEAPONCUSTOMPRESET_SET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xF3F3C0)
#define MX_NETWORKPROTOCOL_CHEATWEAPONCUSTOMPRESET_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3F3D0)
#define MX_NETWORKPROTOCOL_CHEATWEAPONCUSTOMPRESET_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF3F400)
#define MX_NETWORKPROTOCOL_CHEATWEAPONCUSTOMPRESET_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF3F410)
#define MX_NETWORKPROTOCOL_CHEATWEAPONCUSTOMPRESET_CLONE_OFFSET UNITYSDK_OFFSET(0xF3F420)
#define MX_NETWORKPROTOCOL_CHEATWEAPONCUSTOMPRESET_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xF3F490)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CheatWeaponCustomPreset_TypeDefinitionIndex = 11533;

	class CheatWeaponCustomPreset : public Il2CppObject
	{
	public:
		::System::Int32 _StarGrade_k__BackingField; // 0x10
		::System::Int32 _Level_k__BackingField; // 0x14

		::System::Void set_StarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATWEAPONCUSTOMPRESET_SET_STARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATWEAPONCUSTOMPRESET_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATWEAPONCUSTOMPRESET_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATWEAPONCUSTOMPRESET_GET_LEVEL_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::CheatWeaponCustomPreset* Clone()
		{
			return ((::MX::NetworkProtocol::CheatWeaponCustomPreset*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATWEAPONCUSTOMPRESET_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATWEAPONCUSTOMPRESET_GET_STARGRADE_OFFSET))(nullptr);
		}

	};
}

