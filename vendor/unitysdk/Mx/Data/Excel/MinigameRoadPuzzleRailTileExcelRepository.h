#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class RoadPuzzleRailTileType; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BD4640)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECT_RAILTILETYPE_OFFSET UNITYSDK_OFFSET(0x1BD4950)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BD4CA0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECT_RAILTILETYPES_OFFSET UNITYSDK_OFFSET(0x1BD50A0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1BD54B0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BD58C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BD5BE0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BD5F00)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECTFIRST_RAILTILETYPE_OFFSET UNITYSDK_OFFSET(0x1BD6260)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BD65D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BD6610)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameRoadPuzzleRailTileExcelRepository_TypeDefinitionIndex = 18791;

	class MinigameRoadPuzzleRailTileExcelRepository : public ::MXUnderCover::UCEntityMonoComposition
	{
	public:
		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_RailTileType(::FlatData::RoadPuzzleRailTileType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::RoadPuzzleRailTileType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECT_RAILTILETYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_RailTileTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECT_RAILTILETYPES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_RailTileType(::FlatData::RoadPuzzleRailTileType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::RoadPuzzleRailTileType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECTFIRST_RAILTILETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

	};
}

