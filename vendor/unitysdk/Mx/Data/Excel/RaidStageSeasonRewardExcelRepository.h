#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D2A0)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C4D2E0)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCELREPOSITORY_SELECT_SEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1C4D450)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCELREPOSITORY_SELECTFIRST_SEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1C4D750)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCELREPOSITORY_SELECT_SEASONREWARDIDS_OFFSET UNITYSDK_OFFSET(0x1C4DA70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidStageSeasonRewardExcelRepository_TypeDefinitionIndex = 19202;

	class RaidStageSeasonRewardExcelRepository : public ::MXUnderCover::UCSkillBase
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_SeasonRewardId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCELREPOSITORY_SELECT_SEASONREWARDID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_SeasonRewardId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCELREPOSITORY_SELECTFIRST_SEASONREWARDID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonRewardIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDEXCELREPOSITORY_SELECT_SEASONREWARDIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

