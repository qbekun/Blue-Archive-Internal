#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WEEKDUNGEONDBSCHEMA_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1CBBBD0)
#define MX_DATA_EXCEL_WEEKDUNGEONDBSCHEMA_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1CBBBE0)
#define MX_DATA_EXCEL_WEEKDUNGEONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBBF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WeekDungeonDBSchema_TypeDefinitionIndex = 19730;

	class WeekDungeonDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _StageId_k__BackingField; // 0x20

		::System::Int64 get_StageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONDBSCHEMA_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONDBSCHEMA_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

