#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstNewbieContentExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD29CD0)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_GETROOTASCONSTNEWBIECONTENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD29CE0)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_GETROOTASCONSTNEWBIECONTENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD29D40)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD29DD0)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD29DA0)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD29DF0)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD29EF0)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD29F40)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_CREATECONSTNEWBIECONTENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD29F80)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_STARTCONSTNEWBIECONTENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2A070)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD29FF0)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2A090)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2A120)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_ENDCONSTNEWBIECONTENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2A020)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_FINISHCONSTNEWBIECONTENTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2A160)
#define FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_FINISHSIZEPREFIXEDCONSTNEWBIECONTENTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2A180)

namespace FlatData
{
	inline static constexpr unsigned int ConstNewbieContentExcelTable_TypeDefinitionIndex = 9234;

	class ConstNewbieContentExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstNewbieContentExcelTable* GetRootAsConstNewbieContentExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstNewbieContentExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_GETROOTASCONSTNEWBIECONTENTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstNewbieContentExcelTable* GetRootAsConstNewbieContentExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstNewbieContentExcelTable* arg2)
		{
			return ((::FlatData::ConstNewbieContentExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstNewbieContentExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_GETROOTASCONSTNEWBIECONTENTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstNewbieContentExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstNewbieContentExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstNewbieContentExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_CREATECONSTNEWBIECONTENTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstNewbieContentExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_STARTCONSTNEWBIECONTENTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstNewbieContentExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_ENDCONSTNEWBIECONTENTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstNewbieContentExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_FINISHCONSTNEWBIECONTENTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstNewbieContentExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCELTABLE_FINISHSIZEPREFIXEDCONSTNEWBIECONTENTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

