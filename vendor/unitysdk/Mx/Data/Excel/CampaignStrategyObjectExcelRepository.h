#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A06810)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A06850)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A06C50)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A06F70)
#define MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A07270)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CampaignStrategyObjectExcelRepository_TypeDefinitionIndex = 16902;

	class CampaignStrategyObjectExcelRepository : public ::FlatData::StickerCheckPassType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMPAIGNSTRATEGYOBJECTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

