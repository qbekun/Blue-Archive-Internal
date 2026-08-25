#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class RoadPuzzleRailTileType; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BD45D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BD45E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BD45F0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BD4600)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BD4610)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_SET_RAILTILETYPE_OFFSET UNITYSDK_OFFSET(0x1BD4620)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_GET_RAILTILETYPE_OFFSET UNITYSDK_OFFSET(0x1BD4630)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameRoadPuzzleRailTileDBSchema_TypeDefinitionIndex = 18780;

	class MinigameRoadPuzzleRailTileDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _UniqueId_k__BackingField; // 0x28
		::FlatData::RoadPuzzleRailTileType* _RailTileType_k__BackingField; // 0x30

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_RailTileType(::FlatData::RoadPuzzleRailTileType* arg)
		{
			((::System::Void(*)(::FlatData::RoadPuzzleRailTileType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_SET_RAILTILETYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::RoadPuzzleRailTileType* get_RailTileType()
		{
			return (return (::FlatData::RoadPuzzleRailTileType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEDBSCHEMA_GET_RAILTILETYPE_OFFSET))(nullptr);
		}

	};
}

