#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameRoadPuzzleRailTileExcel; }
namespace FlatData { class RoadPuzzleRailTileType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BD3FC0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GETROOTASMINIGAMEROADPUZZLERAILTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BD3FD0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GETROOTASMINIGAMEROADPUZZLERAILTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BD4030)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BD40C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BD4090)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BD40E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BD4130)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1BD4180)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_ORIGINALTILE_OFFSET UNITYSDK_OFFSET(0x1BD41D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1BD4220)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1BD4260)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_RAILTILETYPE_OFFSET UNITYSDK_OFFSET(0x1BD4280)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_CREATEMINIGAMEROADPUZZLERAILTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BD42D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_STARTMINIGAMEROADPUZZLERAILTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BD4570)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BD4460)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BD4430)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1BD4400)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ADDORIGINALTILE_OFFSET UNITYSDK_OFFSET(0x1BD44F0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1BD44C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ADDRAILTILETYPE_OFFSET UNITYSDK_OFFSET(0x1BD4490)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ENDMINIGAMEROADPUZZLERAILTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BD4520)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_FINISHMINIGAMEROADPUZZLERAILTILEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BD4590)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLERAILTILEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BD45B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameRoadPuzzleRailTileExcel_TypeDefinitionIndex = 18779;

	class MinigameRoadPuzzleRailTileExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleRailTileExcel* GetRootAsMinigameRoadPuzzleRailTileExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameRoadPuzzleRailTileExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GETROOTASMINIGAMEROADPUZZLERAILTILEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleRailTileExcel* GetRootAsMinigameRoadPuzzleRailTileExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameRoadPuzzleRailTileExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameRoadPuzzleRailTileExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameRoadPuzzleRailTileExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GETROOTASMINIGAMEROADPUZZLERAILTILEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleRailTileExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameRoadPuzzleRailTileExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_OriginalTile()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_ORIGINALTILE_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::RoadPuzzleRailTileType* get_RailTileType()
		{
			return (return (::FlatData::RoadPuzzleRailTileType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_GET_RAILTILETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameRoadPuzzleRailTileExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatData::RoadPuzzleRailTileType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatData::RoadPuzzleRailTileType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_CREATEMINIGAMEROADPUZZLERAILTILEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameRoadPuzzleRailTileExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_STARTMINIGAMEROADPUZZLERAILTILEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOriginalTile(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ADDORIGINALTILE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ADDPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRailTileType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RoadPuzzleRailTileType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RoadPuzzleRailTileType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ADDRAILTILETYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameRoadPuzzleRailTileExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_ENDMINIGAMEROADPUZZLERAILTILEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameRoadPuzzleRailTileExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_FINISHMINIGAMEROADPUZZLERAILTILEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameRoadPuzzleRailTileExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLERAILTILEEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLERAILTILEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

