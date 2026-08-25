#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldContentStageExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD35B50)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_GETROOTASFIELDCONTENTSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD35B60)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_GETROOTASFIELDCONTENTSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD35BC0)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD35C50)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD35C20)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD35C70)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD35D70)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD35DC0)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_CREATEFIELDCONTENTSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD35E00)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_STARTFIELDCONTENTSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD35EF0)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD35E70)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD35F10)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD35FA0)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_ENDFIELDCONTENTSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD35EA0)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_FINISHFIELDCONTENTSTAGEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD35FE0)
#define FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_FINISHSIZEPREFIXEDFIELDCONTENTSTAGEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD36000)

namespace FlatData
{
	inline static constexpr unsigned int FieldContentStageExcelTable_TypeDefinitionIndex = 9258;

	class FieldContentStageExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldContentStageExcelTable* GetRootAsFieldContentStageExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldContentStageExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_GETROOTASFIELDCONTENTSTAGEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldContentStageExcelTable* GetRootAsFieldContentStageExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldContentStageExcelTable* arg2)
		{
			return ((::FlatData::FieldContentStageExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldContentStageExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_GETROOTASFIELDCONTENTSTAGEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldContentStageExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldContentStageExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldContentStageExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_CREATEFIELDCONTENTSTAGEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldContentStageExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_STARTFIELDCONTENTSTAGEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldContentStageExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_ENDFIELDCONTENTSTAGEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldContentStageExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_FINISHFIELDCONTENTSTAGEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldContentStageExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCELTABLE_FINISHSIZEPREFIXEDFIELDCONTENTSTAGEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

