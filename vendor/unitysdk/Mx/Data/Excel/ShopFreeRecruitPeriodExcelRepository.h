#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCELREPOSITORY_SELECTFIRST_SHOPFREERECRUITID_OFFSET UNITYSDK_OFFSET(0x1C79A90)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C79DB0)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCELREPOSITORY_SELECT_SHOPFREERECRUITID_OFFSET UNITYSDK_OFFSET(0x1C79F20)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C7A220)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCELREPOSITORY_SELECT_SHOPFREERECRUITIDS_OFFSET UNITYSDK_OFFSET(0x1C7A260)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopFreeRecruitPeriodExcelRepository_TypeDefinitionIndex = 19411;

	class ShopFreeRecruitPeriodExcelRepository : public ::MXUnderCover::UCDesignLevel
	{
	public:
		Il2CppObject* SelectFirst_ShopFreeRecruitId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCELREPOSITORY_SELECTFIRST_SHOPFREERECRUITID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_ShopFreeRecruitId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCELREPOSITORY_SELECT_SHOPFREERECRUITID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_ShopFreeRecruitIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCELREPOSITORY_SELECT_SHOPFREERECRUITIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

