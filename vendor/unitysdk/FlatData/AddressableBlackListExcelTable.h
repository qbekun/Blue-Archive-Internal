#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class AddressableBlackListExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDCF10)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_GETROOTASADDRESSABLEBLACKLISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCDCF20)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_GETROOTASADDRESSABLEBLACKLISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCDCF80)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCDD010)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCDCFE0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCDD030)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xCDD130)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCDD180)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_CREATEADDRESSABLEBLACKLISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCDD1C0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_STARTADDRESSABLEBLACKLISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCDD2B0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCDD230)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCDD2D0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCDD360)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_ENDADDRESSABLEBLACKLISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCDD260)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_FINISHADDRESSABLEBLACKLISTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDD3A0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_FINISHSIZEPREFIXEDADDRESSABLEBLACKLISTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDD3C0)

namespace FlatData
{
	inline static constexpr unsigned int AddressableBlackListExcelTable_TypeDefinitionIndex = 9183;

	class AddressableBlackListExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::AddressableBlackListExcelTable* GetRootAsAddressableBlackListExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::AddressableBlackListExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_GETROOTASADDRESSABLEBLACKLISTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::AddressableBlackListExcelTable* GetRootAsAddressableBlackListExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::AddressableBlackListExcelTable* arg2)
		{
			return ((::FlatData::AddressableBlackListExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::AddressableBlackListExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_GETROOTASADDRESSABLEBLACKLISTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::AddressableBlackListExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::AddressableBlackListExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAddressableBlackListExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_CREATEADDRESSABLEBLACKLISTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartAddressableBlackListExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_STARTADDRESSABLEBLACKLISTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndAddressableBlackListExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_ENDADDRESSABLEBLACKLISTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAddressableBlackListExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_FINISHADDRESSABLEBLACKLISTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedAddressableBlackListExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCELTABLE_FINISHSIZEPREFIXEDADDRESSABLEBLACKLISTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

