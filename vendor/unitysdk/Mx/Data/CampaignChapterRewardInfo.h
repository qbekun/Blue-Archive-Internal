#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CampaignChapterRewardExcel; }

#define MX_DATA_CAMPAIGNCHAPTERREWARDINFO_SET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1834B00)
#define MX_DATA_CAMPAIGNCHAPTERREWARDINFO_GET_CAMPAIGNCHAPTERSTAR_OFFSET UNITYSDK_OFFSET(0x1834B10)
#define MX_DATA_CAMPAIGNCHAPTERREWARDINFO_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1834B20)
#define MX_DATA_CAMPAIGNCHAPTERREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18344E0)
#define MX_DATA_CAMPAIGNCHAPTERREWARDINFO_SET_CAMPAIGNCHAPTERSTAR_OFFSET UNITYSDK_OFFSET(0x1834B30)

namespace MX::Data
{
	inline static constexpr unsigned int CampaignChapterRewardInfo_TypeDefinitionIndex = 15737;

	class CampaignChapterRewardInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _ParcelInfos_k__BackingField; // 0x10
		::System::Int64 _CampaignChapterStar_k__BackingField; // 0x18

		::System::Void set_ParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERREWARDINFO_SET_PARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CampaignChapterStar()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERREWARDINFO_GET_CAMPAIGNCHAPTERSTAR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERREWARDINFO_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CampaignChapterRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CampaignChapterRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_CampaignChapterStar(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNCHAPTERREWARDINFO_SET_CAMPAIGNCHAPTERSTAR_OFFSET))(arg, nullptr);
		}

	};
}

