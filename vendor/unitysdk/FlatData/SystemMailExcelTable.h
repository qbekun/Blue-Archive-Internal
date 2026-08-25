#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class SystemMailExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_SYSTEMMAILEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5BBC0)
#define FLATDATA_SYSTEMMAILEXCELTABLE_GETROOTASSYSTEMMAILEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5BBD0)
#define FLATDATA_SYSTEMMAILEXCELTABLE_GETROOTASSYSTEMMAILEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5BC30)
#define FLATDATA_SYSTEMMAILEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD5BCC0)
#define FLATDATA_SYSTEMMAILEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD5BC90)
#define FLATDATA_SYSTEMMAILEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD5BCE0)
#define FLATDATA_SYSTEMMAILEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD5BDE0)
#define FLATDATA_SYSTEMMAILEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD5BE30)
#define FLATDATA_SYSTEMMAILEXCELTABLE_CREATESYSTEMMAILEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5BE70)
#define FLATDATA_SYSTEMMAILEXCELTABLE_STARTSYSTEMMAILEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5BF60)
#define FLATDATA_SYSTEMMAILEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD5BEE0)
#define FLATDATA_SYSTEMMAILEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD5BF80)
#define FLATDATA_SYSTEMMAILEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD5C010)
#define FLATDATA_SYSTEMMAILEXCELTABLE_ENDSYSTEMMAILEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD5BF10)
#define FLATDATA_SYSTEMMAILEXCELTABLE_FINISHSYSTEMMAILEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5C050)
#define FLATDATA_SYSTEMMAILEXCELTABLE_FINISHSIZEPREFIXEDSYSTEMMAILEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5C070)

namespace FlatData
{
	inline static constexpr unsigned int SystemMailExcelTable_TypeDefinitionIndex = 9334;

	class SystemMailExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::SystemMailExcelTable* GetRootAsSystemMailExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::SystemMailExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_GETROOTASSYSTEMMAILEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::SystemMailExcelTable* GetRootAsSystemMailExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::SystemMailExcelTable* arg2)
		{
			return ((::FlatData::SystemMailExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::SystemMailExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_GETROOTASSYSTEMMAILEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::SystemMailExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::SystemMailExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSystemMailExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_CREATESYSTEMMAILEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartSystemMailExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_STARTSYSTEMMAILEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndSystemMailExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_ENDSYSTEMMAILEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSystemMailExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_FINISHSYSTEMMAILEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedSystemMailExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCELTABLE_FINISHSIZEPREFIXEDSYSTEMMAILEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

