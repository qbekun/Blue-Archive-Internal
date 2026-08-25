#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCELREPOSITORY_SELECT_RANKINGREWARDGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C43CA0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C440A0)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCELREPOSITORY_SELECT_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C44210)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C44510)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDEXCELREPOSITORY_SELECTFIRST_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C44550)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidRankingRewardExcelRepository_TypeDefinitionIndex = 19164;

	class RaidRankingRewardExcelRepository : public UIButtonBindType
	{
	public:
		Il2CppObject* Select_RankingRewardGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCELREPOSITORY_SELECT_RANKINGREWARDGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_RankingRewardGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCELREPOSITORY_SELECT_RANKINGREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_RankingRewardGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDEXCELREPOSITORY_SELECTFIRST_RANKINGREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}

