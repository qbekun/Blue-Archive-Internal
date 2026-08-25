#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B51F70)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B520E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B523E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B52700)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1B52740)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidArcadeMachineExcelRepository_TypeDefinitionIndex = 18204;

	class InteractiveWorldRaidArcadeMachineExcelRepository : public RepeatTypes
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

