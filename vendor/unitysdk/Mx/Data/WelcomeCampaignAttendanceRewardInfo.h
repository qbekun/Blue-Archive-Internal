#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class WelcomeCampaignAttendanceRewardExcel; }
namespace MX::GameLogic::Parcel { class ParcelInfo&; }

#define MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18643E0)
#define MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_SET_CONTINUOUSREWARD_OFFSET UNITYSDK_OFFSET(0x1864470)
#define MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1864480)
#define MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_GET_CONTINUOUSREWARD_OFFSET UNITYSDK_OFFSET(0x1864490)
#define MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_SET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x18644A0)
#define MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_SET_MAXATTENDANCEREWARDDAY_OFFSET UNITYSDK_OFFSET(0x18644B0)
#define MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_ADDREWARD_OFFSET UNITYSDK_OFFSET(0x18644C0)
#define MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x18646F0)
#define MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x1864700)
#define MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_GET_MAXATTENDANCEREWARDDAY_OFFSET UNITYSDK_OFFSET(0x1864710)
#define MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_TRYGETREWARD_OFFSET UNITYSDK_OFFSET(0x1864720)
#define MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_TRYGETATTENDANCEREWARD_OFFSET UNITYSDK_OFFSET(0x1864A90)

namespace MX::Data
{
	inline static constexpr unsigned int WelcomeCampaignAttendanceRewardInfo_TypeDefinitionIndex = 15922;

	class WelcomeCampaignAttendanceRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int16 _MaxAttendanceRewardDay_k__BackingField; // 0x18
		Il2CppObject* _RewardList_k__BackingField; // 0x20
		AttendanceDayReward* _ContinuousReward_k__BackingField; // 0x28

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ContinuousReward(AttendanceDayReward* arg)
		{
			((::System::Void(*)(AttendanceDayReward*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_SET_CONTINUOUSREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		AttendanceDayReward* get_ContinuousReward()
		{
			return (return (AttendanceDayReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_GET_CONTINUOUSREWARD_OFFSET))(nullptr);
		}

		::System::Void set_RewardList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_SET_REWARDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxAttendanceRewardDay(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_SET_MAXATTENDANCEREWARDDAY_OFFSET))(arg, nullptr);
		}

		::System::Void AddReward(::MX::Data::Excel::WelcomeCampaignAttendanceRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WelcomeCampaignAttendanceRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_ADDREWARD_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_GET_REWARDLIST_OFFSET))(nullptr);
		}

		::System::Int16 get_MaxAttendanceRewardDay()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_GET_MAXATTENDANCEREWARDDAY_OFFSET))(nullptr);
		}

		::System::Boolean TryGetReward(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_TRYGETREWARD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetAttendanceReward(::System::Int32 arg, ::MX::GameLogic::Parcel::ParcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::MX::GameLogic::Parcel::ParcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNATTENDANCEREWARDINFO_TRYGETATTENDANCEREWARD_OFFSET))(arg, arg, nullptr);
		}

	};
}

