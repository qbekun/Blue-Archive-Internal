#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldInteractionExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDINTERACTIONEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3BBE0)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_GETROOTASFIELDINTERACTIONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3BBF0)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_GETROOTASFIELDINTERACTIONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3BC50)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD3BCE0)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD3BCB0)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD3BD00)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD3BE00)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD3BE50)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_CREATEFIELDINTERACTIONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3BE90)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_STARTFIELDINTERACTIONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3BF80)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD3BF00)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD3BFA0)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD3C030)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_ENDFIELDINTERACTIONEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3BF30)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_FINISHFIELDINTERACTIONEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3C070)
#define FLATDATA_FIELDINTERACTIONEXCELTABLE_FINISHSIZEPREFIXEDFIELDINTERACTIONEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3C090)

namespace FlatData
{
	inline static constexpr unsigned int FieldInteractionExcelTable_TypeDefinitionIndex = 9268;

	class FieldInteractionExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldInteractionExcelTable* GetRootAsFieldInteractionExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldInteractionExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_GETROOTASFIELDINTERACTIONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldInteractionExcelTable* GetRootAsFieldInteractionExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldInteractionExcelTable* arg2)
		{
			return ((::FlatData::FieldInteractionExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldInteractionExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_GETROOTASFIELDINTERACTIONEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldInteractionExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldInteractionExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldInteractionExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_CREATEFIELDINTERACTIONEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldInteractionExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_STARTFIELDINTERACTIONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldInteractionExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_ENDFIELDINTERACTIONEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldInteractionExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_FINISHFIELDINTERACTIONEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldInteractionExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCELTABLE_FINISHSIZEPREFIXEDFIELDINTERACTIONEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

