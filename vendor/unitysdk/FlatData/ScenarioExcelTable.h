#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ScenarioExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_SCENARIOEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD58150)
#define FLATDATA_SCENARIOEXCELTABLE_GETROOTASSCENARIOEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD58160)
#define FLATDATA_SCENARIOEXCELTABLE_GETROOTASSCENARIOEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD581C0)
#define FLATDATA_SCENARIOEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD58250)
#define FLATDATA_SCENARIOEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD58220)
#define FLATDATA_SCENARIOEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD58270)
#define FLATDATA_SCENARIOEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD58370)
#define FLATDATA_SCENARIOEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD583C0)
#define FLATDATA_SCENARIOEXCELTABLE_CREATESCENARIOEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD58400)
#define FLATDATA_SCENARIOEXCELTABLE_STARTSCENARIOEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD584F0)
#define FLATDATA_SCENARIOEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD58470)
#define FLATDATA_SCENARIOEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD58510)
#define FLATDATA_SCENARIOEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD585A0)
#define FLATDATA_SCENARIOEXCELTABLE_ENDSCENARIOEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD584A0)
#define FLATDATA_SCENARIOEXCELTABLE_FINISHSCENARIOEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD585E0)
#define FLATDATA_SCENARIOEXCELTABLE_FINISHSIZEPREFIXEDSCENARIOEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD58600)

namespace FlatData
{
	inline static constexpr unsigned int ScenarioExcelTable_TypeDefinitionIndex = 9326;

	class ScenarioExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ScenarioExcelTable* GetRootAsScenarioExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ScenarioExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_GETROOTASSCENARIOEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioExcelTable* GetRootAsScenarioExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ScenarioExcelTable* arg2)
		{
			return ((::FlatData::ScenarioExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ScenarioExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_GETROOTASSCENARIOEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ScenarioExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ScenarioExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_CREATESCENARIOEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartScenarioExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_STARTSCENARIOEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndScenarioExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_ENDSCENARIOEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_FINISHSCENARIOEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCELTABLE_FINISHSIZEPREFIXEDSCENARIOEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

