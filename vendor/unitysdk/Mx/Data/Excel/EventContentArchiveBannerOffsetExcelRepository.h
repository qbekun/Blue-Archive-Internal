#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1A93FA0)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A943A0)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A946C0)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A949C0)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A94B30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentArchiveBannerOffsetExcelRepository_TypeDefinitionIndex = 17474;

	class EventContentArchiveBannerOffsetExcelRepository : public ::FlatData::StageDifficulty
	{
	public:
		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

