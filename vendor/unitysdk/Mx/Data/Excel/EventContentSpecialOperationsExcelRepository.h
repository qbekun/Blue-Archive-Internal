#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B02930)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B02C50)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B02DC0)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B02E00)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1B03100)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSpecialOperationsExcelRepository_TypeDefinitionIndex = 17849;

	class EventContentSpecialOperationsExcelRepository : public <>c__DisplayClass34_1
	{
	public:
		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

