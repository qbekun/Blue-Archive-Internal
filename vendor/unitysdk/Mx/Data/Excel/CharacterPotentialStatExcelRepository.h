#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A31D40)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_SELECTFIRST_POTENTIALSTATGROUPID_OFFSET UNITYSDK_OFFSET(0x1A31FA0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_SELECT_POTENTIALSTATGROUPID_OFFSET UNITYSDK_OFFSET(0x1A322C0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_SELECT_POTENTIALSTATGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1A325C0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_SELECTFIRST_POTENTIALSTATGROUPID_POTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x1A329C0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_SELECT_POTENTIALSTATGROUPID_POTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x1A32DC0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_SELECT_POTENTIALSTATGROUPID_POTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x1A331A0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A33740)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterPotentialStatExcelRepository_TypeDefinitionIndex = 17074;

	class CharacterPotentialStatExcelRepository : public ::FlatData::ScenarioType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_PotentialStatGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_SELECTFIRST_POTENTIALSTATGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_PotentialStatGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_SELECT_POTENTIALSTATGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_PotentialStatGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_SELECT_POTENTIALSTATGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_PotentialStatGroupId_PotentialLevel(::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_SELECTFIRST_POTENTIALSTATGROUPID_POTENTIALLEVEL_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_PotentialStatGroupId_PotentialLevel(::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_SELECT_POTENTIALSTATGROUPID_POTENTIALLEVEL_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_PotentialStatGroupId_PotentialLevel(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_SELECT_POTENTIALSTATGROUPID_POTENTIALLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

