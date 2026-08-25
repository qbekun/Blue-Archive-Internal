#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1A5A210)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A5A610)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A5A910)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_SELECTFIRST_MAINSTORYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A5AB70)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A5AE90)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_SELECT_MAINSTORYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A5AED0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_SELECT_MAINSTORYEVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1A5B1E0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A5B5F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestEventExcelRepository_TypeDefinitionIndex = 17232;

	class ConquestEventExcelRepository : public ::FlatData::ScenarioContentType
	{
	public:
		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_MainStoryEventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_SELECTFIRST_MAINSTORYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_MainStoryEventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_SELECT_MAINSTORYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_MainStoryEventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_SELECT_MAINSTORYEVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

	};
}

