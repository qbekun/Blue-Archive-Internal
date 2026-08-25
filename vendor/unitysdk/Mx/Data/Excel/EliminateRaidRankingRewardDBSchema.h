#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A80570)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDDBSCHEMA_SET_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A80580)
#define MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDDBSCHEMA_GET_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A80590)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidRankingRewardDBSchema_TypeDefinitionIndex = 17386;

	class EliminateRaidRankingRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _RankingRewardGroupId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RankingRewardGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDDBSCHEMA_SET_RANKINGREWARDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankingRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDRANKINGREWARDDBSCHEMA_GET_RANKINGREWARDGROUPID_OFFSET))(nullptr);
		}

	};
}

