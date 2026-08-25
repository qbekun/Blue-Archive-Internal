#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEDBSCHEMA_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CCF500)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEDBSCHEMA_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CCF510)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF520)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidSeasonManageDBSchema_TypeDefinitionIndex = 19820;

	class WorldRaidSeasonManageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x20

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEDBSCHEMA_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEDBSCHEMA_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

