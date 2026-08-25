#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class MinigameRoadExcel; }
namespace FlatData { class RoadPuzzleMapTileType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_MINIGAMEROADEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD51540)
#define FLATDATA_MINIGAMEROADEXCEL_GETROOTASMINIGAMEROADEXCEL_OFFSET UNITYSDK_OFFSET(0xD51550)
#define FLATDATA_MINIGAMEROADEXCEL_GETROOTASMINIGAMEROADEXCEL_OFFSET UNITYSDK_OFFSET(0xD515B0)
#define FLATDATA_MINIGAMEROADEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD51610)
#define FLATDATA_MINIGAMEROADEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD51260)
#define FLATDATA_MINIGAMEROADEXCEL_NONE_OFFSET UNITYSDK_OFFSET(0xD51630)
#define FLATDATA_MINIGAMEROADEXCEL_GET_NONELENGTH_OFFSET UNITYSDK_OFFSET(0xD51690)
#define FLATDATA_MINIGAMEROADEXCEL_NONE_OFFSET UNITYSDK_OFFSET(0xD516D0)
#define FLATDATA_MINIGAMEROADEXCEL_GETNONEBYTES_OFFSET UNITYSDK_OFFSET(0xD51760)
#define FLATDATA_MINIGAMEROADEXCEL_CREATEMINIGAMEROADEXCEL_OFFSET UNITYSDK_OFFSET(0xD51780)
#define FLATDATA_MINIGAMEROADEXCEL_STARTMINIGAMEROADEXCEL_OFFSET UNITYSDK_OFFSET(0xD51870)
#define FLATDATA_MINIGAMEROADEXCEL_ADDNONE_OFFSET UNITYSDK_OFFSET(0xD517F0)
#define FLATDATA_MINIGAMEROADEXCEL_CREATENONEVECTOR_OFFSET UNITYSDK_OFFSET(0xD51890)
#define FLATDATA_MINIGAMEROADEXCEL_STARTNONEVECTOR_OFFSET UNITYSDK_OFFSET(0xD51920)
#define FLATDATA_MINIGAMEROADEXCEL_ENDMINIGAMEROADEXCEL_OFFSET UNITYSDK_OFFSET(0xD51820)

namespace FlatData
{
	inline static constexpr unsigned int MinigameRoadExcel_TypeDefinitionIndex = 9309;

	class MinigameRoadExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::MinigameRoadExcel* GetRootAsMinigameRoadExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::MinigameRoadExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_GETROOTASMINIGAMEROADEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::MinigameRoadExcel* GetRootAsMinigameRoadExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::MinigameRoadExcel* arg2)
		{
			return ((::FlatData::MinigameRoadExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::MinigameRoadExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_GETROOTASMINIGAMEROADEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::MinigameRoadExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::MinigameRoadExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::RoadPuzzleMapTileType* none(::System::Int32 arg)
		{
			return ((::FlatData::RoadPuzzleMapTileType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_NONE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NoneLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_GET_NONELENGTH_OFFSET))(nullptr);
		}

		::FlatData::RoadPuzzleMapTileType* None(::System::Int32 arg)
		{
			return ((::FlatData::RoadPuzzleMapTileType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_NONE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNoneBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_GETNONEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameRoadExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_CREATEMINIGAMEROADEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartMinigameRoadExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_STARTMINIGAMEROADEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddNone(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_ADDNONE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNoneVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_CREATENONEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartNoneVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_STARTNONEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndMinigameRoadExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCEL_ENDMINIGAMEROADEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

