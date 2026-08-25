#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentStageTotalRewardExcel; }

#define MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1840CC0)
#define MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1840CD0)
#define MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_GET_REWARDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1840CE0)
#define MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_SET_REWARDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1840CF0)
#define MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_GET_REQUIREDEVENTITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1840D00)
#define MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_SET_REQUIREDEVENTITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1840D10)
#define MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x1840D20)
#define MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_SET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x1840D30)
#define MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1840D40)
#define MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_GET_ITEMEXCELS_OFFSET UNITYSDK_OFFSET(0x1840F10)
#define MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_SET_ITEMEXCELS_OFFSET UNITYSDK_OFFSET(0x1840F20)
#define MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1840F30)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentStageTotalRewardInfo_TypeDefinitionIndex = 15782;

	class EventContentStageTotalRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _RewardUniqueId_k__BackingField; // 0x18
		::System::Int64 _RequiredEventItemAmount_k__BackingField; // 0x20
		Il2CppObject* _RewardParcels_k__BackingField; // 0x28
		Il2CppObject* _ItemExcels_k__BackingField; // 0x30

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RewardUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_GET_REWARDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_RewardUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_SET_REWARDUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RequiredEventItemAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_GET_REQUIREDEVENTITEMAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_RequiredEventItemAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_SET_REQUIREDEVENTITEMAMOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardParcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void set_RewardParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_SET_REWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentStageTotalRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentStageTotalRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ItemExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_GET_ITEMEXCELS_OFFSET))(nullptr);
		}

		::System::Void set_ItemExcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_SET_ITEMEXCELS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentStageTotalRewardExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentStageTotalRewardExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGETOTALREWARDINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

