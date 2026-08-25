#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstMinigameRoadPuzzleExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD250B0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_GETROOTASCONSTMINIGAMEROADPUZZLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD250C0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_GETROOTASCONSTMINIGAMEROADPUZZLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD25120)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD251B0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD25180)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD251D0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD252D0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD25320)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_CREATECONSTMINIGAMEROADPUZZLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD25360)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_STARTCONSTMINIGAMEROADPUZZLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD25450)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD253D0)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD25470)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD25500)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_ENDCONSTMINIGAMEROADPUZZLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD25400)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_FINISHCONSTMINIGAMEROADPUZZLEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD25540)
#define FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_FINISHSIZEPREFIXEDCONSTMINIGAMEROADPUZZLEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD25560)

namespace FlatData
{
	inline static constexpr unsigned int ConstMinigameRoadPuzzleExcelTable_TypeDefinitionIndex = 9228;

	class ConstMinigameRoadPuzzleExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstMinigameRoadPuzzleExcelTable* GetRootAsConstMinigameRoadPuzzleExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstMinigameRoadPuzzleExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_GETROOTASCONSTMINIGAMEROADPUZZLEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstMinigameRoadPuzzleExcelTable* GetRootAsConstMinigameRoadPuzzleExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstMinigameRoadPuzzleExcelTable* arg2)
		{
			return ((::FlatData::ConstMinigameRoadPuzzleExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstMinigameRoadPuzzleExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_GETROOTASCONSTMINIGAMEROADPUZZLEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstMinigameRoadPuzzleExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstMinigameRoadPuzzleExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstMinigameRoadPuzzleExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_CREATECONSTMINIGAMEROADPUZZLEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstMinigameRoadPuzzleExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_STARTCONSTMINIGAMEROADPUZZLEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstMinigameRoadPuzzleExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_ENDCONSTMINIGAMEROADPUZZLEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstMinigameRoadPuzzleExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_FINISHCONSTMINIGAMEROADPUZZLEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstMinigameRoadPuzzleExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMEROADPUZZLEEXCELTABLE_FINISHSIZEPREFIXEDCONSTMINIGAMEROADPUZZLEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

