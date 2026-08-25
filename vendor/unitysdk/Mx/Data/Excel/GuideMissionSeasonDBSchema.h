#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GUIDEMISSIONSEASONDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B4A050)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A060)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B4A070)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GuideMissionSeasonDBSchema_TypeDefinitionIndex = 18157;

	class GuideMissionSeasonDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

