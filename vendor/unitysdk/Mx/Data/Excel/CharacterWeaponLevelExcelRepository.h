#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A4BD10)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCELREPOSITORY_SELECT_LEVELS_OFFSET UNITYSDK_OFFSET(0x1A4BE80)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C280)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCELREPOSITORY_SELECT_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A4C2C0)
#define MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A4C5C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterWeaponLevelExcelRepository_TypeDefinitionIndex = 17161;

	class CharacterWeaponLevelExcelRepository : public ::FlatData::EtcSchool
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Levels(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCELREPOSITORY_SELECT_LEVELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Level(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCELREPOSITORY_SELECT_LEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Level(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONLEVELEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET))(arg, arg, nullptr);
		}

	};
}

