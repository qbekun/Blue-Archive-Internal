#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSEASONMANAGEDBSCHEMA_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1B5FF10)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSEASONMANAGEDBSCHEMA_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1B5FF20)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSEASONMANAGEDBSCHEMA_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1B5FF30)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSEASONMANAGEDBSCHEMA_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1B5FF40)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSEASONMANAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B5FF50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidSeasonManageDBSchema_TypeDefinitionIndex = 18250;

	class InteractiveWorldRaidSeasonManageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x20
		::System::Int64 _PhaseId_k__BackingField; // 0x28

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSEASONMANAGEDBSCHEMA_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSEASONMANAGEDBSCHEMA_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_PhaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSEASONMANAGEDBSCHEMA_SET_PHASEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PhaseId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSEASONMANAGEDBSCHEMA_GET_PHASEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSEASONMANAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

