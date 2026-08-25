#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A04EE0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A05050)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A05090)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A053B0)
#define MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1A056B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CampaignStageRewardExcelRepository_TypeDefinitionIndex = 16895;

	class CampaignStageRewardExcelRepository : public ::FlatData::GetStickerConditionType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

