#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CC08D0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CC0910)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCELREPOSITORY_SELECT_SEASONIDS_OFFSET UNITYSDK_OFFSET(0x1CC0A80)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCELREPOSITORY_SELECTFIRST_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CC0E80)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCELREPOSITORY_SELECT_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CC11A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WelcomeCampaignAttendanceRewardExcelRepository_TypeDefinitionIndex = 19763;

	class WelcomeCampaignAttendanceRewardExcelRepository : public ::MXUnderCover::ButtonRequestMessage
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_SeasonIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCELREPOSITORY_SELECT_SEASONIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_SeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCELREPOSITORY_SELECTFIRST_SEASONID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCELREPOSITORY_SELECT_SEASONID_OFFSET))(arg, arg, nullptr);
		}

	};
}

