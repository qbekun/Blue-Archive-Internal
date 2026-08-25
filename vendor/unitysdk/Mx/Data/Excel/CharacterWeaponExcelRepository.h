#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERWEAPONEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A49910)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A49D10)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A49E80)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A4A1A0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A4A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterWeaponExcelRepository_TypeDefinitionIndex = 17147;

	class CharacterWeaponExcelRepository : public ::FlatData::Anniversary
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

