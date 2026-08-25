#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMINFODBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB3E60)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BB3E70)
#define MX_DATA_EXCEL_MINIGAMEDREAMINFODBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB3E80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamInfoDBSchema_TypeDefinitionIndex = 18635;

	class MiniGameDreamInfoDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFODBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMINFODBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

