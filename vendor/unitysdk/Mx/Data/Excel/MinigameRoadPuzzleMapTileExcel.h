#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameRoadPuzzleMapTileExcel; }
namespace FlatData { class RoadPuzzleMapTileType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BCF300)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GETROOTASMINIGAMEROADPUZZLEMAPTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCF310)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GETROOTASMINIGAMEROADPUZZLEMAPTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCF370)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BCF400)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BCF3D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCF420)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BCF470)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1BCF4C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1BCF500)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GET_MAPTILETYPE_OFFSET UNITYSDK_OFFSET(0x1BCF520)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_CREATEMINIGAMEROADPUZZLEMAPTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCF570)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_STARTMINIGAMEROADPUZZLEMAPTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCF760)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCF680)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BCF650)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1BCF6E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_ADDMAPTILETYPE_OFFSET UNITYSDK_OFFSET(0x1BCF6B0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_ENDMINIGAMEROADPUZZLEMAPTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCF710)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_FINISHMINIGAMEROADPUZZLEMAPTILEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BCF780)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLEMAPTILEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BCF7A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameRoadPuzzleMapTileExcel_TypeDefinitionIndex = 18756;

	class MinigameRoadPuzzleMapTileExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleMapTileExcel* GetRootAsMinigameRoadPuzzleMapTileExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameRoadPuzzleMapTileExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GETROOTASMINIGAMEROADPUZZLEMAPTILEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleMapTileExcel* GetRootAsMinigameRoadPuzzleMapTileExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameRoadPuzzleMapTileExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameRoadPuzzleMapTileExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameRoadPuzzleMapTileExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GETROOTASMINIGAMEROADPUZZLEMAPTILEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleMapTileExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameRoadPuzzleMapTileExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::RoadPuzzleMapTileType* get_MapTileType()
		{
			return (return (::FlatData::RoadPuzzleMapTileType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_GET_MAPTILETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameRoadPuzzleMapTileExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::RoadPuzzleMapTileType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::RoadPuzzleMapTileType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_CREATEMINIGAMEROADPUZZLEMAPTILEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameRoadPuzzleMapTileExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_STARTMINIGAMEROADPUZZLEMAPTILEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_ADDPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMapTileType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RoadPuzzleMapTileType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RoadPuzzleMapTileType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_ADDMAPTILETYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameRoadPuzzleMapTileExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_ENDMINIGAMEROADPUZZLEMAPTILEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameRoadPuzzleMapTileExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_FINISHMINIGAMEROADPUZZLEMAPTILEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameRoadPuzzleMapTileExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPTILEEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLEMAPTILEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

