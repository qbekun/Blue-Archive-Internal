#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B0CA90)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B0CAA0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B0CAB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentStageRewardDBSchema_TypeDefinitionIndex = 17885;

	class EventContentStageRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

