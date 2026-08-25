#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIODBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB82E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BB82F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIODBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB8300)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamReplayScenarioDBSchema_TypeDefinitionIndex = 18655;

	class MiniGameDreamReplayScenarioDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIODBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMREPLAYSCENARIODBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

