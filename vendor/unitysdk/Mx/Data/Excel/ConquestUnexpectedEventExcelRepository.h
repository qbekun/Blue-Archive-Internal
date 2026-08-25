#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A6A8C0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A6ABC0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A6AC00)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A6AD70)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1A6B090)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestUnexpectedEventExcelRepository_TypeDefinitionIndex = 17301;

	class ConquestUnexpectedEventExcelRepository : public ::FlatData::PurchaseSourceType
	{
	public:
		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

