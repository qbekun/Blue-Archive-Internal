#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class MinigameRoadExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_MINIGAMEROADEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD51070)
#define FLATDATA_MINIGAMEROADEXCELTABLE_GETROOTASMINIGAMEROADEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD51080)
#define FLATDATA_MINIGAMEROADEXCELTABLE_GETROOTASMINIGAMEROADEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD510E0)
#define FLATDATA_MINIGAMEROADEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD51170)
#define FLATDATA_MINIGAMEROADEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD51140)
#define FLATDATA_MINIGAMEROADEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD51190)
#define FLATDATA_MINIGAMEROADEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD51290)
#define FLATDATA_MINIGAMEROADEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD512E0)
#define FLATDATA_MINIGAMEROADEXCELTABLE_CREATEMINIGAMEROADEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD51320)
#define FLATDATA_MINIGAMEROADEXCELTABLE_STARTMINIGAMEROADEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD51410)
#define FLATDATA_MINIGAMEROADEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD51390)
#define FLATDATA_MINIGAMEROADEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD51430)
#define FLATDATA_MINIGAMEROADEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD514C0)
#define FLATDATA_MINIGAMEROADEXCELTABLE_ENDMINIGAMEROADEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD513C0)
#define FLATDATA_MINIGAMEROADEXCELTABLE_FINISHMINIGAMEROADEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD51500)
#define FLATDATA_MINIGAMEROADEXCELTABLE_FINISHSIZEPREFIXEDMINIGAMEROADEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD51520)

namespace FlatData
{
	inline static constexpr unsigned int MinigameRoadExcelTable_TypeDefinitionIndex = 9308;

	class MinigameRoadExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::MinigameRoadExcelTable* GetRootAsMinigameRoadExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::MinigameRoadExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_GETROOTASMINIGAMEROADEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::MinigameRoadExcelTable* GetRootAsMinigameRoadExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::MinigameRoadExcelTable* arg2)
		{
			return ((::FlatData::MinigameRoadExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::MinigameRoadExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_GETROOTASMINIGAMEROADEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::MinigameRoadExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::MinigameRoadExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameRoadExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_CREATEMINIGAMEROADEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartMinigameRoadExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_STARTMINIGAMEROADEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndMinigameRoadExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_ENDMINIGAMEROADEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameRoadExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_FINISHMINIGAMEROADEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameRoadExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMEROADEXCELTABLE_FINISHSIZEPREFIXEDMINIGAMEROADEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

