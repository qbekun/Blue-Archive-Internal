#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class StringTestExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_STRINGTESTEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5B280)
#define FLATDATA_STRINGTESTEXCELTABLE_GETROOTASSTRINGTESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5B290)
#define FLATDATA_STRINGTESTEXCELTABLE_GETROOTASSTRINGTESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5B2F0)
#define FLATDATA_STRINGTESTEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD5B380)
#define FLATDATA_STRINGTESTEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD5B350)
#define FLATDATA_STRINGTESTEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD5B3A0)
#define FLATDATA_STRINGTESTEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD5B4A0)
#define FLATDATA_STRINGTESTEXCELTABLE_CREATESTRINGTESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5B4E0)
#define FLATDATA_STRINGTESTEXCELTABLE_STARTSTRINGTESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5B5D0)
#define FLATDATA_STRINGTESTEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD5B550)
#define FLATDATA_STRINGTESTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD5B5F0)
#define FLATDATA_STRINGTESTEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD5B680)
#define FLATDATA_STRINGTESTEXCELTABLE_ENDSTRINGTESTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5B580)
#define FLATDATA_STRINGTESTEXCELTABLE_FINISHSTRINGTESTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5B6C0)
#define FLATDATA_STRINGTESTEXCELTABLE_FINISHSIZEPREFIXEDSTRINGTESTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5B6E0)

namespace FlatData
{
	inline static constexpr unsigned int StringTestExcelTable_TypeDefinitionIndex = 9332;

	class StringTestExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::StringTestExcelTable* GetRootAsStringTestExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::StringTestExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_GETROOTASSTRINGTESTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::StringTestExcelTable* GetRootAsStringTestExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::StringTestExcelTable* arg2)
		{
			return ((::FlatData::StringTestExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::StringTestExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_GETROOTASSTRINGTESTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::StringTestExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::StringTestExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateStringTestExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_CREATESTRINGTESTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartStringTestExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_STARTSTRINGTESTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndStringTestExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_ENDSTRINGTESTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishStringTestExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_FINISHSTRINGTESTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedStringTestExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCELTABLE_FINISHSIZEPREFIXEDSTRINGTESTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

