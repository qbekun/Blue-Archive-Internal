#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C46FA0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECTFIRST_BOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1C47200)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECT_BOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1C47510)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECT_BOSSGROUPS_OFFSET UNITYSDK_OFFSET(0x1C47800)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECTFIRST_BOSSGROUP_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C47C00)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECT_BOSSGROUP_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C48020)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECT_BOSSGROUP_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C48420)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C489C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidSkillDescriptionListExcelRepository_TypeDefinitionIndex = 19181;

	class RaidSkillDescriptionListExcelRepository : public ::MXUnderCover::ItemDataAsset
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_BossGroup(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECTFIRST_BOSSGROUP_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_BossGroup(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECT_BOSSGROUP_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_BossGroups(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECT_BOSSGROUPS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_BossGroup_Difficulty(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECTFIRST_BOSSGROUP_DIFFICULTY_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* Select_BossGroup_Difficulty(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECT_BOSSGROUP_DIFFICULTY_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* Select_BossGroup_Difficulty(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_SELECT_BOSSGROUP_DIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

