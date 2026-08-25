#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class LimitedStageExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_LIMITEDSTAGEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4BDE0)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_GETROOTASLIMITEDSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4BDF0)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_GETROOTASLIMITEDSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4BE50)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD4BEE0)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD4BEB0)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD4BF00)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD4C000)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD4C050)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_CREATELIMITEDSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4C090)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_STARTLIMITEDSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4C180)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD4C100)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD4C1A0)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD4C230)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_ENDLIMITEDSTAGEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD4C130)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_FINISHLIMITEDSTAGEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4C270)
#define FLATDATA_LIMITEDSTAGEEXCELTABLE_FINISHSIZEPREFIXEDLIMITEDSTAGEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4C290)

namespace FlatData
{
	inline static constexpr unsigned int LimitedStageExcelTable_TypeDefinitionIndex = 9300;

	class LimitedStageExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::LimitedStageExcelTable* GetRootAsLimitedStageExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::LimitedStageExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_GETROOTASLIMITEDSTAGEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::LimitedStageExcelTable* GetRootAsLimitedStageExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::LimitedStageExcelTable* arg2)
		{
			return ((::FlatData::LimitedStageExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::LimitedStageExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_GETROOTASLIMITEDSTAGEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::LimitedStageExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::LimitedStageExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLimitedStageExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_CREATELIMITEDSTAGEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartLimitedStageExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_STARTLIMITEDSTAGEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndLimitedStageExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_ENDLIMITEDSTAGEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLimitedStageExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_FINISHLIMITEDSTAGEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedLimitedStageExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCELTABLE_FINISHSIZEPREFIXEDLIMITEDSTAGEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

