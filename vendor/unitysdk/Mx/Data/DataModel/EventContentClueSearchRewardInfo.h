#pragma once
#include "../../../unitysdk.h"

namespace MX::Data::Excel { class EventContentClueSearchRewardExcel; }

#define MX_DATA_DATAMODEL_EVENTCONTENTCLUESEARCHREWARDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x19841F0)
#define MX_DATA_DATAMODEL_EVENTCONTENTCLUESEARCHREWARDINFO_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1984210)
#define MX_DATA_DATAMODEL_EVENTCONTENTCLUESEARCHREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1984220)

namespace MX::Data::DataModel
{
	inline static constexpr unsigned int EventContentClueSearchRewardInfo_TypeDefinitionIndex = 16532;

	class EventContentClueSearchRewardInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentClueSearchRewardExcel* _excel; // 0x10
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_EVENTCONTENTCLUESEARCHREWARDINFO_GET_ID_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcelInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_EVENTCONTENTCLUESEARCHREWARDINFO_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentClueSearchRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentClueSearchRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_EVENTCONTENTCLUESEARCHREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

