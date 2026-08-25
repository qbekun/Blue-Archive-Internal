#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A00E80)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A01180)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A012F0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A016F0)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A01730)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CampaignChapterRewardExcelRepository_TypeDefinitionIndex = 16881;

	class CampaignChapterRewardExcelRepository : public ::FlatData::AccountAchievementType
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTERREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

