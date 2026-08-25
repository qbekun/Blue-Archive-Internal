#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentDiceRaceTotalRewardExcel; }

#define MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_SET_DISPLAYLAPFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x18464F0)
#define MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1846500)
#define MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_GET_DISPLAYLAPFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1846510)
#define MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1846520)
#define MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1846530)
#define MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1846710)
#define MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1846720)
#define MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_GET_REQUIREDLAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1846730)
#define MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1846740)
#define MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_SET_REQUIREDLAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1846750)
#define MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1846760)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentDiceRaceLapRewardInfo_TypeDefinitionIndex = 15811;

	class EventContentDiceRaceLapRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _RewardId_k__BackingField; // 0x18
		::System::Int64 _RequiredLapCount_k__BackingField; // 0x20
		::System::Int64 _DisplayLapFinishCount_k__BackingField; // 0x28
		Il2CppObject* _Rewards_k__BackingField; // 0x30

		::System::Void set_DisplayLapFinishCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_SET_DISPLAYLAPFINISHCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_SET_REWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DisplayLapFinishCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_GET_DISPLAYLAPFINISHCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentDiceRaceTotalRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentDiceRaceTotalRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_RequiredLapCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_GET_REQUIREDLAPCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_RequiredLapCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_SET_REQUIREDLAPCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACELAPREWARDINFO_GET_REWARDS_OFFSET))(nullptr);
		}

	};
}

