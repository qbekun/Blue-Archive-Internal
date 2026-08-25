#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DialogCategory; }

#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B057F0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B05A50)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B05D70)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1B06070)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B06470)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_SELECT_EVENTCONTENTID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B068B0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_SELECT_EVENTCONTENTID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B06CE0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B07280)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSpineDisplayPeriodExcelRepository_TypeDefinitionIndex = 17866;

	class EventContentSpineDisplayPeriodExcelRepository : public ::MXUnderCover::UCPlayer
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_DialogCategory(::System::Int64 arg, ::FlatData::DialogCategory* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::DialogCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_DIALOGCATEGORY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_DialogCategory(::System::Int64 arg, ::FlatData::DialogCategory* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::DialogCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_SELECT_EVENTCONTENTID_DIALOGCATEGORY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_DialogCategory(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_SELECT_EVENTCONTENTID_DIALOGCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

