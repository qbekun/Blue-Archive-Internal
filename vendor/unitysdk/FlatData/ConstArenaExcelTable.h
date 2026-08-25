#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstArenaExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTARENAEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE9730)
#define FLATDATA_CONSTARENAEXCELTABLE_GETROOTASCONSTARENAEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE9740)
#define FLATDATA_CONSTARENAEXCELTABLE_GETROOTASCONSTARENAEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE97A0)
#define FLATDATA_CONSTARENAEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCE9830)
#define FLATDATA_CONSTARENAEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE9800)
#define FLATDATA_CONSTARENAEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCE9850)
#define FLATDATA_CONSTARENAEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xCE9950)
#define FLATDATA_CONSTARENAEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCE99A0)
#define FLATDATA_CONSTARENAEXCELTABLE_CREATECONSTARENAEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE99E0)
#define FLATDATA_CONSTARENAEXCELTABLE_STARTCONSTARENAEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE9AD0)
#define FLATDATA_CONSTARENAEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCE9A50)
#define FLATDATA_CONSTARENAEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE9AF0)
#define FLATDATA_CONSTARENAEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE9B80)
#define FLATDATA_CONSTARENAEXCELTABLE_ENDCONSTARENAEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE9A80)
#define FLATDATA_CONSTARENAEXCELTABLE_FINISHCONSTARENAEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE9BC0)
#define FLATDATA_CONSTARENAEXCELTABLE_FINISHSIZEPREFIXEDCONSTARENAEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE9BE0)

namespace FlatData
{
	inline static constexpr unsigned int ConstArenaExcelTable_TypeDefinitionIndex = 9208;

	class ConstArenaExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstArenaExcelTable* GetRootAsConstArenaExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstArenaExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_GETROOTASCONSTARENAEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstArenaExcelTable* GetRootAsConstArenaExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstArenaExcelTable* arg2)
		{
			return ((::FlatData::ConstArenaExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstArenaExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_GETROOTASCONSTARENAEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstArenaExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstArenaExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstArenaExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_CREATECONSTARENAEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstArenaExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_STARTCONSTARENAEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstArenaExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_ENDCONSTARENAEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstArenaExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_FINISHCONSTARENAEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstArenaExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTARENAEXCELTABLE_FINISHSIZEPREFIXEDCONSTARENAEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

