#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TimeAttackDungeonRewardType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1860C00)
#define MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_SET_REWARDMINPOINT_OFFSET UNITYSDK_OFFSET(0x1860CB0)
#define MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1860CC0)
#define MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_SET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1860CD0)
#define MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_CALCREWARDPARCELFROMTOTALPOINTSUM_OFFSET UNITYSDK_OFFSET(0x1860CE0)
#define MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_GET_REWARDMINPOINT_OFFSET UNITYSDK_OFFSET(0x1860DE0)
#define MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_GET_PARCELMAXAMOUNT_OFFSET UNITYSDK_OFFSET(0x1860DF0)
#define MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_SET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x1860E00)
#define MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_GET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x1860E10)
#define MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_SET_PARCELMAXAMOUNT_OFFSET UNITYSDK_OFFSET(0x1860E20)

namespace MX::Data
{
	inline static constexpr unsigned int TimeAttackDungeonRewardParcelInfo_TypeDefinitionIndex = 15905;

	class TimeAttackDungeonRewardParcelInfo : public Il2CppObject
	{
	public:
		::FlatData::TimeAttackDungeonRewardType* _RewardType_k__BackingField; // 0x10
		::System::Int64 _RewardMinPoint_k__BackingField; // 0x18
		::MX::GameLogic::Parcel::ParcelInfo* _RewardParcel_k__BackingField; // 0x20
		::System::Int64 _ParcelMaxAmount_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RewardMinPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_SET_REWARDMINPOINT_OFFSET))(arg, nullptr);
		}

		::FlatData::TimeAttackDungeonRewardType* get_RewardType()
		{
			return (return (::FlatData::TimeAttackDungeonRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_GET_REWARDTYPE_OFFSET))(nullptr);
		}

		::System::Void set_RewardType(::FlatData::TimeAttackDungeonRewardType* arg)
		{
			((::System::Void(*)(::FlatData::TimeAttackDungeonRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_SET_REWARDTYPE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* CalcRewardParcelFromTotalPointSum(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_CALCREWARDPARCELFROMTOTALPOINTSUM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_RewardMinPoint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_GET_REWARDMINPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelMaxAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_GET_PARCELMAXAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_RewardParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_SET_REWARDPARCEL_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_GET_REWARDPARCEL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelMaxAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDPARCELINFO_SET_PARCELMAXAMOUNT_OFFSET))(arg, nullptr);
		}

	};
}

