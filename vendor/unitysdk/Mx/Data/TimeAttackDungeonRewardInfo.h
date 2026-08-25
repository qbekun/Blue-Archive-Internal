#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class TimeAttackDungeonRewardExcel; }

#define MX_DATA_TIMEATTACKDUNGEONREWARDINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x18606D0)
#define MX_DATA_TIMEATTACKDUNGEONREWARDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x18606E0)
#define MX_DATA_TIMEATTACKDUNGEONREWARDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x18606F0)
#define MX_DATA_TIMEATTACKDUNGEONREWARDINFO_GET_DISTINCTREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x1860700)
#define MX_DATA_TIMEATTACKDUNGEONREWARDINFO_SET_REWARDMAXPOINT_OFFSET UNITYSDK_OFFSET(0x1860710)
#define MX_DATA_TIMEATTACKDUNGEONREWARDINFO_GET_REWARDMAXPOINT_OFFSET UNITYSDK_OFFSET(0x1860720)
#define MX_DATA_TIMEATTACKDUNGEONREWARDINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1860730)
#define MX_DATA_TIMEATTACKDUNGEONREWARDINFO_SET_DISTINCTREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x1860740)
#define MX_DATA_TIMEATTACKDUNGEONREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1860750)

namespace MX::Data
{
	inline static constexpr unsigned int TimeAttackDungeonRewardInfo_TypeDefinitionIndex = 15904;

	class TimeAttackDungeonRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _RewardMaxPoint_k__BackingField; // 0x18
		Il2CppObject* _Rewards_k__BackingField; // 0x20
		Il2CppObject* _DistinctRewardParcels_k__BackingField; // 0x28

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DistinctRewardParcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDINFO_GET_DISTINCTREWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void set_RewardMaxPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDINFO_SET_REWARDMAXPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RewardMaxPoint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDINFO_GET_REWARDMAXPOINT_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDINFO_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_DistinctRewardParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDINFO_SET_DISTINCTREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::TimeAttackDungeonRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::TimeAttackDungeonRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

