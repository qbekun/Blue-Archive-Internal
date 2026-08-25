#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentTreasureCellRewardExcel; }

#define MX_DATA_EVENTCONTENTTREASURECELLREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18468F0)
#define MX_DATA_EVENTCONTENTTREASURECELLREWARDINFO_SET_ROUND_OFFSET UNITYSDK_OFFSET(0x1846AD0)
#define MX_DATA_EVENTCONTENTTREASURECELLREWARDINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1846AE0)
#define MX_DATA_EVENTCONTENTTREASURECELLREWARDINFO_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1846AF0)
#define MX_DATA_EVENTCONTENTTREASURECELLREWARDINFO_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1846B00)
#define MX_DATA_EVENTCONTENTTREASURECELLREWARDINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1846B10)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentTreasureCellRewardInfo_TypeDefinitionIndex = 15814;

	class EventContentTreasureCellRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		Il2CppObject* _Rewards_k__BackingField; // 0x18
		::System::String* _LocalizeCodeID_k__BackingField; // 0x20
		::System::Int32 _Round_k__BackingField; // 0x28

		::System::Void .ctor(::MX::Data::Excel::EventContentTreasureCellRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentTreasureCellRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASURECELLREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Round(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASURECELLREWARDINFO_SET_ROUND_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASURECELLREWARDINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Int32 get_Round()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASURECELLREWARDINFO_GET_ROUND_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCodeID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASURECELLREWARDINFO_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASURECELLREWARDINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

