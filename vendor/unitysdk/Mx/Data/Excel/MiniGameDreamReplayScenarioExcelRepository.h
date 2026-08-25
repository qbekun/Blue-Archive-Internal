#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BB8310)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB8710)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB8A30)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BB8D30)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BB8EA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamReplayScenarioExcelRepository_TypeDefinitionIndex = 18660;

	class MiniGameDreamReplayScenarioExcelRepository : public <co_InternalInvoke>d__2
	{
	public:
		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

