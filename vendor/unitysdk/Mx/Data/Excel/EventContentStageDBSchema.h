#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTSTAGEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B0AB10)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B0AB20)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B0AB30)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B0AB40)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B0AB50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentStageDBSchema_TypeDefinitionIndex = 17875;

	class EventContentStageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _EventContentId_k__BackingField; // 0x28

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

