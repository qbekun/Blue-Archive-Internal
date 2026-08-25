#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstStrategyExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTSTRATEGYEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2AA30)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_GETROOTASCONSTSTRATEGYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2AA40)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_GETROOTASCONSTSTRATEGYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2AAA0)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD2AB30)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD2AB00)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD2AB50)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD2AC50)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD2ACA0)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_CREATECONSTSTRATEGYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2ACE0)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_STARTCONSTSTRATEGYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2ADD0)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD2AD50)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2ADF0)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2AE80)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_ENDCONSTSTRATEGYEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2AD80)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_FINISHCONSTSTRATEGYEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2AEC0)
#define FLATDATA_CONSTSTRATEGYEXCELTABLE_FINISHSIZEPREFIXEDCONSTSTRATEGYEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2AEE0)

namespace FlatData
{
	inline static constexpr unsigned int ConstStrategyExcelTable_TypeDefinitionIndex = 9236;

	class ConstStrategyExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstStrategyExcelTable* GetRootAsConstStrategyExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstStrategyExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_GETROOTASCONSTSTRATEGYEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstStrategyExcelTable* GetRootAsConstStrategyExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstStrategyExcelTable* arg2)
		{
			return ((::FlatData::ConstStrategyExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstStrategyExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_GETROOTASCONSTSTRATEGYEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstStrategyExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstStrategyExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstStrategyExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_CREATECONSTSTRATEGYEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConstStrategyExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_STARTCONSTSTRATEGYEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstStrategyExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_ENDCONSTSTRATEGYEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConstStrategyExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_FINISHCONSTSTRATEGYEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedConstStrategyExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCELTABLE_FINISHSIZEPREFIXEDCONSTSTRATEGYEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

