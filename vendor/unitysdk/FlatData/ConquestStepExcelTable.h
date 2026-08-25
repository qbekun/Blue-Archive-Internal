#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConquestStepExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONQUESTSTEPEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE8190)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_GETROOTASCONQUESTSTEPEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE81A0)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_GETROOTASCONQUESTSTEPEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE8200)
#define FLATDATA_CONQUESTSTEPEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCE8290)
#define FLATDATA_CONQUESTSTEPEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE8260)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCE82B0)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xCE83B0)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCE8400)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_CREATECONQUESTSTEPEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE8440)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_STARTCONQUESTSTEPEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE8530)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCE84B0)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE8550)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE85E0)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_ENDCONQUESTSTEPEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE84E0)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_FINISHCONQUESTSTEPEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE8620)
#define FLATDATA_CONQUESTSTEPEXCELTABLE_FINISHSIZEPREFIXEDCONQUESTSTEPEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE8640)

namespace FlatData
{
	inline static constexpr unsigned int ConquestStepExcelTable_TypeDefinitionIndex = 9206;

	class ConquestStepExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConquestStepExcelTable* GetRootAsConquestStepExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConquestStepExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_GETROOTASCONQUESTSTEPEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConquestStepExcelTable* GetRootAsConquestStepExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConquestStepExcelTable* arg2)
		{
			return ((::FlatData::ConquestStepExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConquestStepExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_GETROOTASCONQUESTSTEPEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConquestStepExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConquestStepExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestStepExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_CREATECONQUESTSTEPEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConquestStepExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_STARTCONQUESTSTEPEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConquestStepExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_ENDCONQUESTSTEPEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestStepExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_FINISHCONQUESTSTEPEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConquestStepExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCELTABLE_FINISHSIZEPREFIXEDCONQUESTSTEPEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

