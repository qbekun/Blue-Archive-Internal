#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDDBSCHEMA_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1AB0A30)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB0A40)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB0A50)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0A60)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDDBSCHEMA_SET_CARDID_OFFSET UNITYSDK_OFFSET(0x1AB0A70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentConcentrationCardDBSchema_TypeDefinitionIndex = 17605;

	class EventContentConcentrationCardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _CardId_k__BackingField; // 0x28

		::System::Int64 get_CardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDDBSCHEMA_GET_CARDID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDDBSCHEMA_SET_CARDID_OFFSET))(arg, nullptr);
		}

	};
}

