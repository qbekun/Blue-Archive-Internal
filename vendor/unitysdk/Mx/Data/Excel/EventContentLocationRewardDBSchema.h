#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AE8FF0)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AE9000)
#define MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AE9010)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentLocationRewardDBSchema_TypeDefinitionIndex = 17735;

	class EventContentLocationRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOCATIONREWARDDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

