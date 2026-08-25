#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B170C0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B170D0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDDBSCHEMA_SET_EVENTCONTENTLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B170E0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B170F0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDDBSCHEMA_GET_EVENTCONTENTLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B17100)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentZoneVisitRewardDBSchema_TypeDefinitionIndex = 17934;

	class EventContentZoneVisitRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _EventContentLocationId_k__BackingField; // 0x28

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentLocationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDDBSCHEMA_SET_EVENTCONTENTLOCATIONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentLocationId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDDBSCHEMA_GET_EVENTCONTENTLOCATIONID_OFFSET))(nullptr);
		}

	};
}

