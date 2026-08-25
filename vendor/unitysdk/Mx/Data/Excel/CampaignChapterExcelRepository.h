#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x19FF860)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x19FFC60)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x19FFF60)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A00280)
#define MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A003F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CampaignChapterExcelRepository_TypeDefinitionIndex = 16874;

	class CampaignChapterExcelRepository : public ::FlatData::MissionCompleteConditionType
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNCHAPTEREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

