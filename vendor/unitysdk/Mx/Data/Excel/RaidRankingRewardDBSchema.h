#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RAIDRANKINGREWARDDBSCHEMA_SET_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C43C70)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDDBSCHEMA_GET_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C43C80)
#define MX_DATA_EXCEL_RAIDRANKINGREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C43C90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidRankingRewardDBSchema_TypeDefinitionIndex = 19159;

	class RaidRankingRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _RankingRewardGroupId_k__BackingField; // 0x20

		::System::Void set_RankingRewardGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDDBSCHEMA_SET_RANKINGREWARDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankingRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDDBSCHEMA_GET_RANKINGREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDRANKINGREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

