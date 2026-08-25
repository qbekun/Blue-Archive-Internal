#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A63980)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A639C0)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A63B30)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A63E30)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1A64150)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestPlayGuideExcelRepository_TypeDefinitionIndex = 17270;

	class ConquestPlayGuideExcelRepository : public ::FlatData::PurchaseServerTag
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

