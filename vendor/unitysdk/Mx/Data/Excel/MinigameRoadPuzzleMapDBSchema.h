#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCCE40)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_SET_MAPGROUPID_OFFSET UNITYSDK_OFFSET(0x1BCCE50)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCE60)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BCCE70)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BCCE80)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_GET_MAPGROUPID_OFFSET UNITYSDK_OFFSET(0x1BCCE90)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCCEA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameRoadPuzzleMapDBSchema_TypeDefinitionIndex = 18744;

	class MinigameRoadPuzzleMapDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _UniqueId_k__BackingField; // 0x28
		::System::Int64 _MapGroupId_k__BackingField; // 0x30

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_MapGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_SET_MAPGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_MapGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_GET_MAPGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

