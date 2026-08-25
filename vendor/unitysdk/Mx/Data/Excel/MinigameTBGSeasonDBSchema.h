#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMETBGSEASONDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0A500)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0A510)
#define MX_DATA_EXCEL_MINIGAMETBGSEASONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A520)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGSeasonDBSchema_TypeDefinitionIndex = 18902;

	class MinigameTBGSeasonDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGSEASONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

