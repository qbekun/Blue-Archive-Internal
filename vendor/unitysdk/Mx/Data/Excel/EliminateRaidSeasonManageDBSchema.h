#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A82620)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEDBSCHEMA_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1A82630)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEDBSCHEMA_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1A82640)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidSeasonManageDBSchema_TypeDefinitionIndex = 17393;

	class EliminateRaidSeasonManageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEDBSCHEMA_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEDBSCHEMA_SET_SEASONID_OFFSET))(arg, nullptr);
		}

	};
}

