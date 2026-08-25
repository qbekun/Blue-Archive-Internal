#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTMISSIONDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AF2DC0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF2DD0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2DE0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF2DF0)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AF2E00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMissionDBSchema_TypeDefinitionIndex = 17779;

	class EventContentMissionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _EventContentId_k__BackingField; // 0x28

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

