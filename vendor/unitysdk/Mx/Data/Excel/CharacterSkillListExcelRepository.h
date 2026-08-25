#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A35540)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCELREPOSITORY_SELECTFIRST_CHARACTERSKILLLISTGROUPID_MINIMUMGRADECHARACTERWEAPON_MINIMUMTIERCHARACTERGEAR_FORMINDEX_TSAINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1A356B0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCELREPOSITORY_SELECT_CHARACTERSKILLLISTGROUPID_MINIMUMGRADECHARACTERWEAPON_MINIMUMTIERCHARACTERGEAR_FORMINDEX_TSAINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1A35D50)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCELREPOSITORY_SELECT_CHARACTERSKILLLISTGROUPID_MINIMUMGRADECHARACTERWEAPON_MINIMUMTIERCHARACTERGEAR_FORMINDEX_TSAINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1A363E0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A36B70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterSkillListExcelRepository_TypeDefinitionIndex = 17081;

	class CharacterSkillListExcelRepository : public ::FlatData::ScenarioTypes
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_CharacterSkillListGroupId_MinimumGradeCharacterWeapon_MinimumTierCharacterGear_FormIndex_TSAInteractionId(::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCELREPOSITORY_SELECTFIRST_CHARACTERSKILLLISTGROUPID_MINIMUMGRADECHARACTERWEAPON_MINIMUMTIERCHARACTERGEAR_FORMINDEX_TSAINTERACTIONID_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterSkillListGroupId_MinimumGradeCharacterWeapon_MinimumTierCharacterGear_FormIndex_TSAInteractionId(::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCELREPOSITORY_SELECT_CHARACTERSKILLLISTGROUPID_MINIMUMGRADECHARACTERWEAPON_MINIMUMTIERCHARACTERGEAR_FORMINDEX_TSAINTERACTIONID_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterSkillListGroupId_MinimumGradeCharacterWeapon_MinimumTierCharacterGear_FormIndex_TSAInteractionId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCELREPOSITORY_SELECT_CHARACTERSKILLLISTGROUPID_MINIMUMGRADECHARACTERWEAPON_MINIMUMTIERCHARACTERGEAR_FORMINDEX_TSAINTERACTIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

