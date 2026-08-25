#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class BattlePassRewardExcel; }

#define MX_DATA_BATTLEPASSREWARD_SET_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1830220)
#define MX_DATA_BATTLEPASSREWARD_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x1830230)
#define MX_DATA_BATTLEPASSREWARD_GETREWARD_OFFSET UNITYSDK_OFFSET(0x1830240)
#define MX_DATA_BATTLEPASSREWARD_VALIDATEHASREWARD_OFFSET UNITYSDK_OFFSET(0x18303D0)
#define MX_DATA_BATTLEPASSREWARD_BUILDREWARD_OFFSET UNITYSDK_OFFSET(0x1830560)
#define MX_DATA_BATTLEPASSREWARD_GET_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1830790)
#define MX_DATA_BATTLEPASSREWARD_SET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x18307A0)
#define MX_DATA_BATTLEPASSREWARD_ADDREWARD_OFFSET UNITYSDK_OFFSET(0x18307B0)
#define MX_DATA_BATTLEPASSREWARD_VALIDATECURRENCYTYPEGEM_OFFSET UNITYSDK_OFFSET(0x1830920)
#define MX_DATA_BATTLEPASSREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1830B30)

namespace MX::Data
{
	inline static constexpr unsigned int BattlePassReward_TypeDefinitionIndex = 15722;

	class BattlePassReward : public Il2CppObject
	{
	public:
		::System::Int64 _RewardGroupId_k__BackingField; // 0x10
		Il2CppObject* _RewardList_k__BackingField; // 0x18

		::System::Void set_RewardGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSREWARD_SET_REWARDGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSREWARD_GET_REWARDLIST_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetReward(::System::Int32 arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSREWARD_GETREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateHasReward(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSREWARD_VALIDATEHASREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void BuildReward(::System::Int64 arg, ::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSREWARD_BUILDREWARD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 get_RewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSREWARD_GET_REWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_RewardList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSREWARD_SET_REWARDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void AddReward(::MX::Data::Excel::BattlePassRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::BattlePassRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSREWARD_ADDREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateCurrencyTypeGem(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSREWARD_VALIDATECURRENCYTYPEGEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::BattlePassRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::BattlePassRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSREWARD_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

