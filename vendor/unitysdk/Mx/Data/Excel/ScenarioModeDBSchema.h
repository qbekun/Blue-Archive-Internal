#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOMODEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C61920)
#define MX_DATA_EXCEL_SCENARIOMODEDBSCHEMA_SET_MODEID_OFFSET UNITYSDK_OFFSET(0x1C61930)
#define MX_DATA_EXCEL_SCENARIOMODEDBSCHEMA_GET_MODEID_OFFSET UNITYSDK_OFFSET(0x1C61940)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioModeDBSchema_TypeDefinitionIndex = 19291;

	class ScenarioModeDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ModeId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ModeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEDBSCHEMA_SET_MODEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEDBSCHEMA_GET_MODEID_OFFSET))(nullptr);
		}

	};
}

