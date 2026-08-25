#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldMasteryManageExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD40990)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_GETROOTASFIELDMASTERYMANAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD409A0)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_GETROOTASFIELDMASTERYMANAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD40A00)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD40A90)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD40A60)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD40AB0)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD40BB0)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD40C00)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_CREATEFIELDMASTERYMANAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD40C40)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_STARTFIELDMASTERYMANAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD40D30)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD40CB0)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD40D50)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD40DE0)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_ENDFIELDMASTERYMANAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD40CE0)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_FINISHFIELDMASTERYMANAGEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD40E20)
#define FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_FINISHSIZEPREFIXEDFIELDMASTERYMANAGEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD40E40)

namespace FlatData
{
	inline static constexpr unsigned int FieldMasteryManageExcelTable_TypeDefinitionIndex = 9276;

	class FieldMasteryManageExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldMasteryManageExcelTable* GetRootAsFieldMasteryManageExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldMasteryManageExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_GETROOTASFIELDMASTERYMANAGEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldMasteryManageExcelTable* GetRootAsFieldMasteryManageExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldMasteryManageExcelTable* arg2)
		{
			return ((::FlatData::FieldMasteryManageExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldMasteryManageExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_GETROOTASFIELDMASTERYMANAGEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldMasteryManageExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldMasteryManageExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldMasteryManageExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_CREATEFIELDMASTERYMANAGEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldMasteryManageExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_STARTFIELDMASTERYMANAGEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldMasteryManageExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_ENDFIELDMASTERYMANAGEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldMasteryManageExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_FINISHFIELDMASTERYMANAGEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldMasteryManageExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCELTABLE_FINISHSIZEPREFIXEDFIELDMASTERYMANAGEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

