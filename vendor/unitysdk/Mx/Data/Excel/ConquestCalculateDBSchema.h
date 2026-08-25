#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTCALCULATEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A51820)
#define MX_DATA_EXCEL_CONQUESTCALCULATEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A51830)
#define MX_DATA_EXCEL_CONQUESTCALCULATEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A51840)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestCalculateDBSchema_TypeDefinitionIndex = 17190;

	class ConquestCalculateDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTCALCULATEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

