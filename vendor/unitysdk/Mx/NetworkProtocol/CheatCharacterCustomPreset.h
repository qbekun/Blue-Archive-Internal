#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class CheatWeaponCustomPreset; }
namespace MX::NetworkProtocol { class CheatCharacterCustomPreset; }

#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_PUBLICSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xF3F4A0)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF3F4B0)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xF3F4C0)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xF3F4D0)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF3F4E0)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_EXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xF3F4F0)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_CLONE_OFFSET UNITYSDK_OFFSET(0xF3F500)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_EXPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xF3F7B0)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF3F7C0)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_EXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xF3F7D0)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_PASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xF3F7E0)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3F720)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_EXPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xF3F7F0)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_PUBLICSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xF3F800)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_WEAPON_OFFSET UNITYSDK_OFFSET(0xF3F810)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF3F820)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_EQUIPMENTS_OFFSET UNITYSDK_OFFSET(0xF3F830)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_WEAPON_OFFSET UNITYSDK_OFFSET(0xF3F840)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_EQUIPMENTS_OFFSET UNITYSDK_OFFSET(0xF3F850)
#define MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_PASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xF3F860)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CheatCharacterCustomPreset_TypeDefinitionIndex = 11534;

	class CheatCharacterCustomPreset : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int32 _StarGrade_k__BackingField; // 0x18
		::System::Int32 _Level_k__BackingField; // 0x1C
		::System::Int32 _ExSkillLevel_k__BackingField; // 0x20
		::System::Int32 _PublicSkillLevel_k__BackingField; // 0x24
		::System::Int32 _PassiveSkillLevel_k__BackingField; // 0x28
		::System::Int32 _ExPassiveSkillLevel_k__BackingField; // 0x2C
		::Il2CppArray<::System::Object*>* _Equipments_k__BackingField; // 0x30
		::MX::NetworkProtocol::CheatWeaponCustomPreset* _Weapon_k__BackingField; // 0x38

		::System::Void set_PublicSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_PUBLICSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_StarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_STARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_EXSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CheatCharacterCustomPreset* Clone()
		{
			return ((::MX::NetworkProtocol::CheatCharacterCustomPreset*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 get_ExPassiveSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_EXPASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_ExSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_EXSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_PassiveSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_PASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ExPassiveSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_EXPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PublicSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_PUBLICSKILLLEVEL_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::CheatWeaponCustomPreset* get_Weapon()
		{
			return ((::MX::NetworkProtocol::CheatWeaponCustomPreset*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_WEAPON_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Equipments()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_EQUIPMENTS_OFFSET))(nullptr);
		}

		::System::Void set_Weapon(::MX::NetworkProtocol::CheatWeaponCustomPreset* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CheatWeaponCustomPreset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_WEAPON_OFFSET))(arg, nullptr);
		}

		::System::Void set_Equipments(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_SET_EQUIPMENTS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PassiveSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHEATCHARACTERCUSTOMPRESET_GET_PASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

	};
}

