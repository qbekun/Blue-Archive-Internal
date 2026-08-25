#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD6D0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AFD710)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1AFD880)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1AFDC80)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1AFDFA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentShopExcelRepository_TypeDefinitionIndex = 17825;

	class EventContentShopExcelRepository : public ::MXUnderCover::UCNPC
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

