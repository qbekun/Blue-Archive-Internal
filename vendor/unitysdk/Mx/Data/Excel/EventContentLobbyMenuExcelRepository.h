#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EventContentType; }

#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AE4D40)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE4EB0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE52F0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE5720)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5CC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentLobbyMenuExcelRepository_TypeDefinitionIndex = 17726;

	class EventContentLobbyMenuExcelRepository : public UCBTTaskMovePathFormatter
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_EventContentType(::System::Int64 arg, ::FlatData::EventContentType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::EventContentType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_EVENTCONTENTTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EventContentType(::System::Int64 arg, ::FlatData::EventContentType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::EventContentType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EventContentType(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

