#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldMasteryLevelExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3F820)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_GETROOTASFIELDMASTERYLEVELEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3F830)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_GETROOTASFIELDMASTERYLEVELEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3F890)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD3F920)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD3F8F0)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD3F940)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD3FA40)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD3FA90)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_CREATEFIELDMASTERYLEVELEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3FAD0)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_STARTFIELDMASTERYLEVELEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3FBC0)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD3FB40)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD3FBE0)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD3FC70)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_ENDFIELDMASTERYLEVELEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3FB70)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_FINISHFIELDMASTERYLEVELEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3FCB0)
#define FLATDATA_FIELDMASTERYLEVELEXCELTABLE_FINISHSIZEPREFIXEDFIELDMASTERYLEVELEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3FCD0)

namespace FlatData
{
	inline static constexpr unsigned int FieldMasteryLevelExcelTable_TypeDefinitionIndex = 9274;

	class FieldMasteryLevelExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldMasteryLevelExcelTable* GetRootAsFieldMasteryLevelExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldMasteryLevelExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_GETROOTASFIELDMASTERYLEVELEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldMasteryLevelExcelTable* GetRootAsFieldMasteryLevelExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldMasteryLevelExcelTable* arg2)
		{
			return ((::FlatData::FieldMasteryLevelExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldMasteryLevelExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_GETROOTASFIELDMASTERYLEVELEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldMasteryLevelExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldMasteryLevelExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldMasteryLevelExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_CREATEFIELDMASTERYLEVELEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldMasteryLevelExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_STARTFIELDMASTERYLEVELEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldMasteryLevelExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_ENDFIELDMASTERYLEVELEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldMasteryLevelExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_FINISHFIELDMASTERYLEVELEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldMasteryLevelExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCELTABLE_FINISHSIZEPREFIXEDFIELDMASTERYLEVELEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

