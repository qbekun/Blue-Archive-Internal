#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CBB0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONDBSCHEMA_GET_WORLDRAIDPHASEID_OFFSET UNITYSDK_OFFSET(0x1B5CBC0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONDBSCHEMA_GET_WORLDRAIDSEASONID_OFFSET UNITYSDK_OFFSET(0x1B5CBD0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONDBSCHEMA_SET_WORLDRAIDSEASONID_OFFSET UNITYSDK_OFFSET(0x1B5CBE0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONDBSCHEMA_SET_WORLDRAIDPHASEID_OFFSET UNITYSDK_OFFSET(0x1B5CBF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidConditionDBSchema_TypeDefinitionIndex = 18240;

	class InteractiveWorldRaidConditionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _WorldRaidSeasonId_k__BackingField; // 0x20
		::System::Int64 _WorldRaidPhaseId_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidPhaseId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONDBSCHEMA_GET_WORLDRAIDPHASEID_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidSeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONDBSCHEMA_GET_WORLDRAIDSEASONID_OFFSET))(nullptr);
		}

		::System::Void set_WorldRaidSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONDBSCHEMA_SET_WORLDRAIDSEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_WorldRaidPhaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCONDITIONDBSCHEMA_SET_WORLDRAIDPHASEID_OFFSET))(arg, nullptr);
		}

	};
}

