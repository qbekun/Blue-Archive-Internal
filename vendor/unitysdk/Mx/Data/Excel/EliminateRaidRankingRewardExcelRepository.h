#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A805A0)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A80710)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCELREPOSITORY_SELECT_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A80750)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCELREPOSITORY_SELECTFIRST_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A80A50)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCELREPOSITORY_SELECT_RANKINGREWARDGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1A80D70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidRankingRewardExcelRepository_TypeDefinitionIndex = 17391;

	class EliminateRaidRankingRewardExcelRepository : public ::FlatData::ProductSaleType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_RankingRewardGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCELREPOSITORY_SELECT_RANKINGREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_RankingRewardGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCELREPOSITORY_SELECTFIRST_RANKINGREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_RankingRewardGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDEXCELREPOSITORY_SELECT_RANKINGREWARDGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

