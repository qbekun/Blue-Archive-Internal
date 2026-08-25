#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDDBSCHEMA_SET_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C15D30)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDDBSCHEMA_GET_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C15D40)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C15D50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MultiFloorRaidRewardDBSchema_TypeDefinitionIndex = 18951;

	class MultiFloorRaidRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _RewardGroupId_k__BackingField; // 0x20

		::System::Void set_RewardGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDDBSCHEMA_SET_REWARDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDDBSCHEMA_GET_REWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

