#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RAIDSTAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C4AA10)
#define MX_DATA_EXCEL_RAIDSTAGEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C4AB80)
#define MX_DATA_EXCEL_RAIDSTAGEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C4AE80)
#define MX_DATA_EXCEL_RAIDSTAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B1A0)
#define MX_DATA_EXCEL_RAIDSTAGEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C4B1E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidStageExcelRepository_TypeDefinitionIndex = 19188;

	class RaidStageExcelRepository : public ::MXUnderCover::SkillDataAsset
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

