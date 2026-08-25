#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class WeaponType; }

#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A4AB40)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSDBSCHEMA_GET_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x1A4AB50)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSDBSCHEMA_SET_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x1A4AB60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterWeaponExpBonusDBSchema_TypeDefinitionIndex = 17149;

	class CharacterWeaponExpBonusDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::WeaponType* _WeaponType_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::WeaponType* get_WeaponType()
		{
			return (return (::FlatData::WeaponType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSDBSCHEMA_GET_WEAPONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_WeaponType(::FlatData::WeaponType* arg)
		{
			((::System::Void(*)(::FlatData::WeaponType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSDBSCHEMA_SET_WEAPONTYPE_OFFSET))(arg, nullptr);
		}

	};
}

