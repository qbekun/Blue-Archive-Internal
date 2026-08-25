#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C15D60)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCELREPOSITORY_SELECTFIRST_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C15ED0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCELREPOSITORY_SELECT_REWARDGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C161F0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCELREPOSITORY_SELECT_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C165F0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C168F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MultiFloorRaidRewardExcelRepository_TypeDefinitionIndex = 18956;

	class MultiFloorRaidRewardExcelRepository : public NoiseMaker
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_RewardGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCELREPOSITORY_SELECTFIRST_REWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_RewardGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCELREPOSITORY_SELECT_REWARDGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_RewardGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCELREPOSITORY_SELECT_REWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

