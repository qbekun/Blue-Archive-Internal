#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B07A00)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B07D00)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B07E70)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1B08190)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B08590)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSpoilerPopupExcelRepository_TypeDefinitionIndex = 17873;

	class EventContentSpoilerPopupExcelRepository : public <>c
	{
	public:
		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

