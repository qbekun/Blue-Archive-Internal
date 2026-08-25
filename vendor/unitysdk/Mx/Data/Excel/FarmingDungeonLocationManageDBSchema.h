#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B18A50)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEDBSCHEMA_GET_FARMINGDUNGEONLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B18A60)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEDBSCHEMA_SET_FARMINGDUNGEONLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B18A70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FarmingDungeonLocationManageDBSchema_TypeDefinitionIndex = 17941;

	class FarmingDungeonLocationManageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _FarmingDungeonLocationId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_FarmingDungeonLocationId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEDBSCHEMA_GET_FARMINGDUNGEONLOCATIONID_OFFSET))(nullptr);
		}

		::System::Void set_FarmingDungeonLocationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEDBSCHEMA_SET_FARMINGDUNGEONLOCATIONID_OFFSET))(arg, nullptr);
		}

	};
}

