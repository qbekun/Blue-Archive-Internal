#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ClearDeckRuleExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CLEARDECKRULEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE78D0)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_GETROOTASCLEARDECKRULEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE78E0)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_GETROOTASCLEARDECKRULEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE7940)
#define FLATDATA_CLEARDECKRULEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCE79D0)
#define FLATDATA_CLEARDECKRULEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE79A0)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCE79F0)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xCE7AF0)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCE7B40)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_CREATECLEARDECKRULEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE7B80)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_STARTCLEARDECKRULEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE7C70)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCE7BF0)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE7C90)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE7D20)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_ENDCLEARDECKRULEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE7C20)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_FINISHCLEARDECKRULEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE7D60)
#define FLATDATA_CLEARDECKRULEEXCELTABLE_FINISHSIZEPREFIXEDCLEARDECKRULEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE7D80)

namespace FlatData
{
	inline static constexpr unsigned int ClearDeckRuleExcelTable_TypeDefinitionIndex = 9204;

	class ClearDeckRuleExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ClearDeckRuleExcelTable* GetRootAsClearDeckRuleExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ClearDeckRuleExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_GETROOTASCLEARDECKRULEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ClearDeckRuleExcelTable* GetRootAsClearDeckRuleExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ClearDeckRuleExcelTable* arg2)
		{
			return ((::FlatData::ClearDeckRuleExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ClearDeckRuleExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_GETROOTASCLEARDECKRULEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ClearDeckRuleExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ClearDeckRuleExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateClearDeckRuleExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_CREATECLEARDECKRULEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartClearDeckRuleExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_STARTCLEARDECKRULEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndClearDeckRuleExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_ENDCLEARDECKRULEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishClearDeckRuleExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_FINISHCLEARDECKRULEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedClearDeckRuleExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCELTABLE_FINISHSIZEPREFIXEDCLEARDECKRULEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

