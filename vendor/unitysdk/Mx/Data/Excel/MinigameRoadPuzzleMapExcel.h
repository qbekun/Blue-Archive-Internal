#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameRoadPuzzleMapExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BCC1C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETROOTASMINIGAMEROADPUZZLEMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCC1D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETROOTASMINIGAMEROADPUZZLEMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCC230)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BCC2C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BCC290)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCC2E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BCC330)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_MAPGROUPID_OFFSET UNITYSDK_OFFSET(0x1BCC380)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_MAP_OFFSET UNITYSDK_OFFSET(0x1BCC3D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETMAPBYTES_OFFSET UNITYSDK_OFFSET(0x1BCC410)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_MAPBG_OFFSET UNITYSDK_OFFSET(0x1BCC430)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETMAPBGBYTES_OFFSET UNITYSDK_OFFSET(0x1BCC470)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1BCC490)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_AVAILABLERAILTILE_OFFSET UNITYSDK_OFFSET(0x1BCC4E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_AVAILABLERAILTILELENGTH_OFFSET UNITYSDK_OFFSET(0x1BCC540)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETAVAILABLERAILTILEBYTES_OFFSET UNITYSDK_OFFSET(0x1BCC580)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_AVAILABLERAILTILEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BCC5A0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_AVAILABLERAILTILEAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BCC600)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETAVAILABLERAILTILEAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1BCC640)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ORIGINALTILECOUNT_OFFSET UNITYSDK_OFFSET(0x1BCC660)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_ORIGINALTILECOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BCC6C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETORIGINALTILECOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1BCC700)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_TRAINSPEED_OFFSET UNITYSDK_OFFSET(0x1BCC720)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_CREATEMINIGAMEROADPUZZLEMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCC770)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_STARTMINIGAMEROADPUZZLEMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCCB70)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCC9D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BCC9A0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDMAPGROUPID_OFFSET UNITYSDK_OFFSET(0x1BCC970)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDMAP_OFFSET UNITYSDK_OFFSET(0x1BCCAF0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDMAPBG_OFFSET UNITYSDK_OFFSET(0x1BCCAC0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x1BCC940)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDAVAILABLERAILTILE_OFFSET UNITYSDK_OFFSET(0x1BCCA90)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_CREATEAVAILABLERAILTILEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BCCB90)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_STARTAVAILABLERAILTILEVECTOR_OFFSET UNITYSDK_OFFSET(0x1BCCC20)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDAVAILABLERAILTILEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BCCA60)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_CREATEAVAILABLERAILTILEAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BCCC60)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_STARTAVAILABLERAILTILEAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BCCCF0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDORIGINALTILECOUNT_OFFSET UNITYSDK_OFFSET(0x1BCCA30)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_CREATEORIGINALTILECOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BCCD30)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_STARTORIGINALTILECOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BCCDC0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDTRAINSPEED_OFFSET UNITYSDK_OFFSET(0x1BCCA00)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ENDMINIGAMEROADPUZZLEMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1BCCB20)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_FINISHMINIGAMEROADPUZZLEMAPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BCCE00)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLEMAPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BCCE20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameRoadPuzzleMapExcel_TypeDefinitionIndex = 18743;

	class MinigameRoadPuzzleMapExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleMapExcel* GetRootAsMinigameRoadPuzzleMapExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameRoadPuzzleMapExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETROOTASMINIGAMEROADPUZZLEMAPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleMapExcel* GetRootAsMinigameRoadPuzzleMapExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameRoadPuzzleMapExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameRoadPuzzleMapExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameRoadPuzzleMapExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETROOTASMINIGAMEROADPUZZLEMAPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleMapExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameRoadPuzzleMapExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_MapGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_MAPGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_Map()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_MAP_OFFSET))(nullptr);
		}

		Il2CppObject* GetMapBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETMAPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MapBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_MAPBG_OFFSET))(nullptr);
		}

		Il2CppObject* GetMapBGBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETMAPBGBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Int64 AvailableRailTile(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_AVAILABLERAILTILE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AvailableRailTileLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_AVAILABLERAILTILELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAvailableRailTileBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETAVAILABLERAILTILEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 AvailableRailTileAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_AVAILABLERAILTILEAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AvailableRailTileAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_AVAILABLERAILTILEAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAvailableRailTileAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETAVAILABLERAILTILEAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 OriginalTileCount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ORIGINALTILECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OriginalTileCountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_ORIGINALTILECOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetOriginalTileCountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GETORIGINALTILECOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Single get_TrainSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_GET_TRAINSPEED_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameRoadPuzzleMapExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_CREATEMINIGAMEROADPUZZLEMAPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameRoadPuzzleMapExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_STARTMINIGAMEROADPUZZLEMAPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMapGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDMAPGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMap(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMapBG(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDMAPBG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAvailableRailTile(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDAVAILABLERAILTILE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAvailableRailTileVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_CREATEAVAILABLERAILTILEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAvailableRailTileVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_STARTAVAILABLERAILTILEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAvailableRailTileAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDAVAILABLERAILTILEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAvailableRailTileAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_CREATEAVAILABLERAILTILEAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAvailableRailTileAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_STARTAVAILABLERAILTILEAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOriginalTileCount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDORIGINALTILECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateOriginalTileCountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_CREATEORIGINALTILECOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartOriginalTileCountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_STARTORIGINALTILECOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTrainSpeed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ADDTRAINSPEED_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameRoadPuzzleMapExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_ENDMINIGAMEROADPUZZLEMAPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameRoadPuzzleMapExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_FINISHMINIGAMEROADPUZZLEMAPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameRoadPuzzleMapExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCEL_FINISHSIZEPREFIXEDMINIGAMEROADPUZZLEMAPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

