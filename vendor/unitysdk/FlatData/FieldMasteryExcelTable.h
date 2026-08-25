#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldMasteryExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDMASTERYEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3E750)
#define FLATDATA_FIELDMASTERYEXCELTABLE_GETROOTASFIELDMASTERYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3E760)
#define FLATDATA_FIELDMASTERYEXCELTABLE_GETROOTASFIELDMASTERYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3E7C0)
#define FLATDATA_FIELDMASTERYEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD3E850)
#define FLATDATA_FIELDMASTERYEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD3E820)
#define FLATDATA_FIELDMASTERYEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD3E870)
#define FLATDATA_FIELDMASTERYEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD3E970)
#define FLATDATA_FIELDMASTERYEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD3E9C0)
#define FLATDATA_FIELDMASTERYEXCELTABLE_CREATEFIELDMASTERYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3EA00)
#define FLATDATA_FIELDMASTERYEXCELTABLE_STARTFIELDMASTERYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3EAF0)
#define FLATDATA_FIELDMASTERYEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD3EA70)
#define FLATDATA_FIELDMASTERYEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD3EB10)
#define FLATDATA_FIELDMASTERYEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD3EBA0)
#define FLATDATA_FIELDMASTERYEXCELTABLE_ENDFIELDMASTERYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3EAA0)
#define FLATDATA_FIELDMASTERYEXCELTABLE_FINISHFIELDMASTERYEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3EBE0)
#define FLATDATA_FIELDMASTERYEXCELTABLE_FINISHSIZEPREFIXEDFIELDMASTERYEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3EC00)

namespace FlatData
{
	inline static constexpr unsigned int FieldMasteryExcelTable_TypeDefinitionIndex = 9272;

	class FieldMasteryExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldMasteryExcelTable* GetRootAsFieldMasteryExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldMasteryExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_GETROOTASFIELDMASTERYEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldMasteryExcelTable* GetRootAsFieldMasteryExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldMasteryExcelTable* arg2)
		{
			return ((::FlatData::FieldMasteryExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldMasteryExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_GETROOTASFIELDMASTERYEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldMasteryExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldMasteryExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldMasteryExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_CREATEFIELDMASTERYEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldMasteryExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_STARTFIELDMASTERYEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldMasteryExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_ENDFIELDMASTERYEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldMasteryExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_FINISHFIELDMASTERYEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldMasteryExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCELTABLE_FINISHSIZEPREFIXEDFIELDMASTERYEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

