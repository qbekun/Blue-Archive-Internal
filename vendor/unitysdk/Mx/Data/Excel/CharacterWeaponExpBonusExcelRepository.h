#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class WeaponType; }

#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A4AB70)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCELREPOSITORY_SELECTFIRST_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x1A4ABB0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCELREPOSITORY_SELECT_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x1A4AF10)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCELREPOSITORY_SELECT_WEAPONTYPES_OFFSET UNITYSDK_OFFSET(0x1A4B260)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A4B660)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterWeaponExpBonusExcelRepository_TypeDefinitionIndex = 17154;

	class CharacterWeaponExpBonusExcelRepository : public ::FlatData::School
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_WeaponType(::FlatData::WeaponType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::WeaponType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCELREPOSITORY_SELECTFIRST_WEAPONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_WeaponType(::FlatData::WeaponType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::WeaponType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCELREPOSITORY_SELECT_WEAPONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_WeaponTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCELREPOSITORY_SELECT_WEAPONTYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXPBONUSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

