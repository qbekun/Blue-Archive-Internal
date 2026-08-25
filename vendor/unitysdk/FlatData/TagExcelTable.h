#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class TagExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_TAGEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD61160)
#define FLATDATA_TAGEXCELTABLE_GETROOTASTAGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD61170)
#define FLATDATA_TAGEXCELTABLE_GETROOTASTAGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD611D0)
#define FLATDATA_TAGEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD61260)
#define FLATDATA_TAGEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD61230)
#define FLATDATA_TAGEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD61280)
#define FLATDATA_TAGEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD61380)
#define FLATDATA_TAGEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD613D0)
#define FLATDATA_TAGEXCELTABLE_CREATETAGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD61410)
#define FLATDATA_TAGEXCELTABLE_STARTTAGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD61500)
#define FLATDATA_TAGEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD61480)
#define FLATDATA_TAGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD61520)
#define FLATDATA_TAGEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD615B0)
#define FLATDATA_TAGEXCELTABLE_ENDTAGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD614B0)
#define FLATDATA_TAGEXCELTABLE_FINISHTAGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD615F0)
#define FLATDATA_TAGEXCELTABLE_FINISHSIZEPREFIXEDTAGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD61610)

namespace FlatData
{
	inline static constexpr unsigned int TagExcelTable_TypeDefinitionIndex = 9344;

	class TagExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::TagExcelTable* GetRootAsTagExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::TagExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_GETROOTASTAGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::TagExcelTable* GetRootAsTagExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::TagExcelTable* arg2)
		{
			return ((::FlatData::TagExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::TagExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_GETROOTASTAGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::TagExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::TagExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTagExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_CREATETAGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartTagExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_STARTTAGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndTagExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_ENDTAGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTagExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_FINISHTAGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedTagExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCELTABLE_FINISHSIZEPREFIXEDTAGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

