#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RAIDSEASONMANAGEDBSCHEMA_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1C456A0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEDBSCHEMA_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1C456B0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C456C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidSeasonManageDBSchema_TypeDefinitionIndex = 19166;

	class RaidSeasonManageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x20

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEDBSCHEMA_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEDBSCHEMA_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

