#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class RoadPuzzleMapTileType; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1BCF830)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECTFIRST_MAPTILETYPE_OFFSET UNITYSDK_OFFSET(0x1BCFC40)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECT_MAPTILETYPES_OFFSET UNITYSDK_OFFSET(0x1BCFFB0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BD03C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BD0400)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BD0760)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECT_MAPTILETYPE_OFFSET UNITYSDK_OFFSET(0x1BD0B60)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BD0EB0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BD11B0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BD14D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BD17F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameRoadPuzzleMapTileExcelRepository_TypeDefinitionIndex = 18768;

	class MinigameRoadPuzzleMapTileExcelRepository : public ::MXUnderCover::UCEntityComposition
	{
	public:
		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_MapTileType(::FlatData::RoadPuzzleMapTileType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::RoadPuzzleMapTileType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECTFIRST_MAPTILETYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_MapTileTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECT_MAPTILETYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_MapTileType(::FlatData::RoadPuzzleMapTileType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::RoadPuzzleMapTileType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECT_MAPTILETYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

