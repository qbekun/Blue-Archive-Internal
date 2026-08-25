#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EventContentType; }

#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AFAD60)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFAFC0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFB2E0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AFB5E0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AFB9E0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AFBE20)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AFC250)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC7F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSeasonExcelRepository_TypeDefinitionIndex = 17818;

	class EventContentSeasonExcelRepository : public ::MXUnderCover::UCCharacterMovement
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_EventContentType(::System::Int64 arg, ::FlatData::EventContentType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::EventContentType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_EVENTCONTENTTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EventContentType(::System::Int64 arg, ::FlatData::EventContentType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::EventContentType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EventContentType(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

