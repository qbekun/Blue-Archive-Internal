#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AEE050)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1AEE090)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AEE390)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1AEE500)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1AEE900)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMiniEventShortCutExcelRepository_TypeDefinitionIndex = 17767;

	class EventContentMiniEventShortCutExcelRepository : public ::MXUnderCover::UCBTTaskUCBTTaskStunReady
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

