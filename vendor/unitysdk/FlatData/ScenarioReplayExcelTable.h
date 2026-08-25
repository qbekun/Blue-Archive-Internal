#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ScenarioReplayExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_SCENARIOREPLAYEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD594C0)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_GETROOTASSCENARIOREPLAYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD594D0)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_GETROOTASSCENARIOREPLAYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD59530)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD595C0)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD59590)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD595E0)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD596E0)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD59730)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_CREATESCENARIOREPLAYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD59770)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_STARTSCENARIOREPLAYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD59860)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD597E0)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD59880)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD59910)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_ENDSCENARIOREPLAYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD59810)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_FINISHSCENARIOREPLAYEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD59950)
#define FLATDATA_SCENARIOREPLAYEXCELTABLE_FINISHSIZEPREFIXEDSCENARIOREPLAYEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD59970)

namespace FlatData
{
	inline static constexpr unsigned int ScenarioReplayExcelTable_TypeDefinitionIndex = 9328;

	class ScenarioReplayExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ScenarioReplayExcelTable* GetRootAsScenarioReplayExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ScenarioReplayExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_GETROOTASSCENARIOREPLAYEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioReplayExcelTable* GetRootAsScenarioReplayExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ScenarioReplayExcelTable* arg2)
		{
			return ((::FlatData::ScenarioReplayExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ScenarioReplayExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_GETROOTASSCENARIOREPLAYEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ScenarioReplayExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ScenarioReplayExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioReplayExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_CREATESCENARIOREPLAYEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartScenarioReplayExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_STARTSCENARIOREPLAYEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndScenarioReplayExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_ENDSCENARIOREPLAYEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioReplayExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_FINISHSCENARIOREPLAYEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioReplayExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOREPLAYEXCELTABLE_FINISHSIZEPREFIXEDSCENARIOREPLAYEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

