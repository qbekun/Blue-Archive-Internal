#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A97D50)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCELREPOSITORY_SELECT_EVENTCONTENTBUFFIDS_OFFSET UNITYSDK_OFFSET(0x1A97D90)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCELREPOSITORY_SELECT_EVENTCONTENTBUFFID_OFFSET UNITYSDK_OFFSET(0x1A98190)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A98490)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTBUFFID_OFFSET UNITYSDK_OFFSET(0x1A98600)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentBuffExcelRepository_TypeDefinitionIndex = 17495;

	class EventContentBuffExcelRepository : public ::FlatData::StrategyObjectType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_EventContentBuffIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCELREPOSITORY_SELECT_EVENTCONTENTBUFFIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentBuffId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCELREPOSITORY_SELECT_EVENTCONTENTBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentBuffId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTBUFFID_OFFSET))(arg, arg, nullptr);
		}

	};
}

