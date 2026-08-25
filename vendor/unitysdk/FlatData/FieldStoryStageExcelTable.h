#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldStoryStageExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD46580)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_GETROOTASFIELDSTORYSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD46590)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_GETROOTASFIELDSTORYSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD465F0)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD46680)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD46650)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD466A0)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD467A0)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD467F0)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_CREATEFIELDSTORYSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD46830)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_STARTFIELDSTORYSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD46920)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD468A0)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD46940)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD469D0)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_ENDFIELDSTORYSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD468D0)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_FINISHFIELDSTORYSTAGEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD46A10)
#define FLATDATA_FIELDSTORYSTAGEEXCELTABLE_FINISHSIZEPREFIXEDFIELDSTORYSTAGEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD46A30)

namespace FlatData
{
	inline static constexpr unsigned int FieldStoryStageExcelTable_TypeDefinitionIndex = 9286;

	class FieldStoryStageExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldStoryStageExcelTable* GetRootAsFieldStoryStageExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldStoryStageExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_GETROOTASFIELDSTORYSTAGEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldStoryStageExcelTable* GetRootAsFieldStoryStageExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldStoryStageExcelTable* arg2)
		{
			return ((::FlatData::FieldStoryStageExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldStoryStageExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_GETROOTASFIELDSTORYSTAGEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldStoryStageExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldStoryStageExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldStoryStageExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_CREATEFIELDSTORYSTAGEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFieldStoryStageExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_STARTFIELDSTORYSTAGEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldStoryStageExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_ENDFIELDSTORYSTAGEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldStoryStageExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_FINISHFIELDSTORYSTAGEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedFieldStoryStageExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCELTABLE_FINISHSIZEPREFIXEDFIELDSTORYSTAGEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

