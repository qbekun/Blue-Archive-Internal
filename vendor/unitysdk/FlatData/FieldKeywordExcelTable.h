#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldKeywordExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDKEYWORDEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3DB20)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_GETROOTASFIELDKEYWORDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3DB30)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_GETROOTASFIELDKEYWORDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3DB90)
#define FLATDATA_FIELDKEYWORDEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD3DC20)
#define FLATDATA_FIELDKEYWORDEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD3DBF0)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD3DC40)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD3DD40)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD3DD90)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_CREATEFIELDKEYWORDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3DDD0)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_STARTFIELDKEYWORDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3DEC0)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD3DE40)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD3DEE0)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD3DF70)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_ENDFIELDKEYWORDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD3DE70)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_FINISHFIELDKEYWORDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3DFB0)
#define FLATDATA_FIELDKEYWORDEXCELTABLE_FINISHSIZEPREFIXEDFIELDKEYWORDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3DFD0)

namespace FlatData
{
	inline static constexpr unsigned int FieldKeywordExcelTable_TypeDefinitionIndex = 9270;

	class FieldKeywordExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldKeywordExcelTable* GetRootAsFieldKeywordExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldKeywordExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_GETROOTASFIELDKEYWORDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldKeywordExcelTable* GetRootAsFieldKeywordExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldKeywordExcelTable* arg2)
		{
			return ((::FlatData::FieldKeywordExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldKeywordExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_GETROOTASFIELDKEYWORDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldKeywordExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldKeywordExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldKeywordExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_CREATEFIELDKEYWORDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldKeywordExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_STARTFIELDKEYWORDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldKeywordExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_ENDFIELDKEYWORDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldKeywordExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_FINISHFIELDKEYWORDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldKeywordExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCELTABLE_FINISHSIZEPREFIXEDFIELDKEYWORDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

