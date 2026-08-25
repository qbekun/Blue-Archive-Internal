#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CC61D0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CC6210)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1CC6380)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CC6780)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CC6AA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WelcomeCampaignRewardIncreaseExcelRepository_TypeDefinitionIndex = 19787;

	class WelcomeCampaignRewardIncreaseExcelRepository : public ::MXUnderCover::EndGameMessage
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}

