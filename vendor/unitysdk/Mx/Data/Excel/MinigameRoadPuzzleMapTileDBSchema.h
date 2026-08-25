#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class RoadPuzzleMapTileType; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BCF7C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCF7D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCF7E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BCF7F0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BCF800)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_SET_MAPTILETYPE_OFFSET UNITYSDK_OFFSET(0x1BCF810)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_GET_MAPTILETYPE_OFFSET UNITYSDK_OFFSET(0x1BCF820)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameRoadPuzzleMapTileDBSchema_TypeDefinitionIndex = 18757;

	class MinigameRoadPuzzleMapTileDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _UniqueId_k__BackingField; // 0x28
		::FlatData::RoadPuzzleMapTileType* _MapTileType_k__BackingField; // 0x30

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_MapTileType(::FlatData::RoadPuzzleMapTileType* arg)
		{
			((::System::Void(*)(::FlatData::RoadPuzzleMapTileType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_SET_MAPTILETYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::RoadPuzzleMapTileType* get_MapTileType()
		{
			return (return (::FlatData::RoadPuzzleMapTileType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEDBSCHEMA_GET_MAPTILETYPE_OFFSET))(nullptr);
		}

	};
}

