#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldDateExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDDATEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD39580)
#define FLATDATA_FIELDDATEEXCELTABLE_GETROOTASFIELDDATEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD39590)
#define FLATDATA_FIELDDATEEXCELTABLE_GETROOTASFIELDDATEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD395F0)
#define FLATDATA_FIELDDATEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD39680)
#define FLATDATA_FIELDDATEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD39650)
#define FLATDATA_FIELDDATEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD396A0)
#define FLATDATA_FIELDDATEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD397A0)
#define FLATDATA_FIELDDATEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD397F0)
#define FLATDATA_FIELDDATEEXCELTABLE_CREATEFIELDDATEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD39830)
#define FLATDATA_FIELDDATEEXCELTABLE_STARTFIELDDATEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD39920)
#define FLATDATA_FIELDDATEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD398A0)
#define FLATDATA_FIELDDATEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD39940)
#define FLATDATA_FIELDDATEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD399D0)
#define FLATDATA_FIELDDATEEXCELTABLE_ENDFIELDDATEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD398D0)
#define FLATDATA_FIELDDATEEXCELTABLE_FINISHFIELDDATEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD39A10)
#define FLATDATA_FIELDDATEEXCELTABLE_FINISHSIZEPREFIXEDFIELDDATEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD39A30)

namespace FlatData
{
	inline static constexpr unsigned int FieldDateExcelTable_TypeDefinitionIndex = 9264;

	class FieldDateExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldDateExcelTable* GetRootAsFieldDateExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldDateExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_GETROOTASFIELDDATEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldDateExcelTable* GetRootAsFieldDateExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldDateExcelTable* arg2)
		{
			return ((::FlatData::FieldDateExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldDateExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_GETROOTASFIELDDATEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldDateExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldDateExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldDateExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_CREATEFIELDDATEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldDateExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_STARTFIELDDATEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldDateExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_ENDFIELDDATEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldDateExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_FINISHFIELDDATEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldDateExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCELTABLE_FINISHSIZEPREFIXEDFIELDDATEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

