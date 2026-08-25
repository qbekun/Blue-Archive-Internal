#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1A0EBB0)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A0EFB0)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A0F2C0)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F5B0)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A0F5F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterCombatSkinExcelRepository_TypeDefinitionIndex = 16940;

	class CharacterCombatSkinExcelRepository : public ::FlatData::AchievementType
	{
	public:
		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

