#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class WelcomeCampaignEnterRewardExcel; }

#define MX_DATA_WELCOMECAMPAIGNENTERREWARDINFO_SET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x18641F0)
#define MX_DATA_WELCOMECAMPAIGNENTERREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1864200)
#define MX_DATA_WELCOMECAMPAIGNENTERREWARDINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1864290)
#define MX_DATA_WELCOMECAMPAIGNENTERREWARDINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18642A0)
#define MX_DATA_WELCOMECAMPAIGNENTERREWARDINFO_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x18642B0)
#define MX_DATA_WELCOMECAMPAIGNENTERREWARDINFO_ADDREWARD_OFFSET UNITYSDK_OFFSET(0x18642C0)

namespace MX::Data
{
	inline static constexpr unsigned int WelcomeCampaignEnterRewardInfo_TypeDefinitionIndex = 15919;

	class WelcomeCampaignEnterRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x10
		Il2CppObject* _RewardList_k__BackingField; // 0x18

		::System::Void set_RewardList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNENTERREWARDINFO_SET_REWARDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNENTERREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNENTERREWARDINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNENTERREWARDINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNENTERREWARDINFO_GET_REWARDLIST_OFFSET))(nullptr);
		}

		::System::Void AddReward(::MX::Data::Excel::WelcomeCampaignEnterRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WelcomeCampaignEnterRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNENTERREWARDINFO_ADDREWARD_OFFSET))(arg, nullptr);
		}

	};
}

