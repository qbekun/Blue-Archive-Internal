#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ConquestTileType; }

#define MX_DATA_EXCEL_CONQUESTTILEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A68580)
#define MX_DATA_EXCEL_CONQUESTTILEDBSCHEMA_GET_TILETYPE_OFFSET UNITYSDK_OFFSET(0x1A68590)
#define MX_DATA_EXCEL_CONQUESTTILEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A685A0)
#define MX_DATA_EXCEL_CONQUESTTILEDBSCHEMA_SET_TILETYPE_OFFSET UNITYSDK_OFFSET(0x1A685B0)
#define MX_DATA_EXCEL_CONQUESTTILEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A685C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestTileDBSchema_TypeDefinitionIndex = 17286;

	class ConquestTileDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::FlatData::ConquestTileType* _TileType_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ConquestTileType* get_TileType()
		{
			return (return (::FlatData::ConquestTileType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEDBSCHEMA_GET_TILETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_TileType(::FlatData::ConquestTileType* arg)
		{
			((::System::Void(*)(::FlatData::ConquestTileType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEDBSCHEMA_SET_TILETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTTILEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

