#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CC1A90)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CC1C00)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CC1F20)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1CC2220)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2620)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WelcomeCampaignEnterRewardExcelRepository_TypeDefinitionIndex = 19770;

	class WelcomeCampaignEnterRewardExcelRepository : public ::MXUnderCover::FocusedSectionMessage
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

