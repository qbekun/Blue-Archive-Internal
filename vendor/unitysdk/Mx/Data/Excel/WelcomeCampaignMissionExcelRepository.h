#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CC3EF0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1CC4150)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1CC4470)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1CC4770)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_SELECTFIRST_SEASONID_ID_OFFSET UNITYSDK_OFFSET(0x1CC4B70)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_SELECT_SEASONID_ID_OFFSET UNITYSDK_OFFSET(0x1CC4F70)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_SELECT_SEASONID_ID_OFFSET UNITYSDK_OFFSET(0x1CC5350)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CC58F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WelcomeCampaignMissionExcelRepository_TypeDefinitionIndex = 19780;

	class WelcomeCampaignMissionExcelRepository : public ::MXUnderCover::ChangedActionButtonTriggerMessage
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_SeasonId_Id(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_SELECTFIRST_SEASONID_ID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonId_Id(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_SELECT_SEASONID_ID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonId_Id(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_SELECT_SEASONID_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNMISSIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

