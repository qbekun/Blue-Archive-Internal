#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class AddressableWhiteListExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDDB20)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_GETROOTASADDRESSABLEWHITELISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCDDB30)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_GETROOTASADDRESSABLEWHITELISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCDDB90)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCDDC20)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCDDBF0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCDDC40)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xCDDD40)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCDDD90)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_CREATEADDRESSABLEWHITELISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCDDDD0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_STARTADDRESSABLEWHITELISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCDDEC0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCDDE40)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCDDEE0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCDDF70)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_ENDADDRESSABLEWHITELISTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCDDE70)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_FINISHADDRESSABLEWHITELISTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDDFB0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_FINISHSIZEPREFIXEDADDRESSABLEWHITELISTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDDFD0)

namespace FlatData
{
	inline static constexpr unsigned int AddressableWhiteListExcelTable_TypeDefinitionIndex = 9185;

	class AddressableWhiteListExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::AddressableWhiteListExcelTable* GetRootAsAddressableWhiteListExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::AddressableWhiteListExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_GETROOTASADDRESSABLEWHITELISTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::AddressableWhiteListExcelTable* GetRootAsAddressableWhiteListExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::AddressableWhiteListExcelTable* arg2)
		{
			return ((::FlatData::AddressableWhiteListExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::AddressableWhiteListExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_GETROOTASADDRESSABLEWHITELISTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::AddressableWhiteListExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::AddressableWhiteListExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAddressableWhiteListExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_CREATEADDRESSABLEWHITELISTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartAddressableWhiteListExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_STARTADDRESSABLEWHITELISTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndAddressableWhiteListExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_ENDADDRESSABLEWHITELISTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAddressableWhiteListExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_FINISHADDRESSABLEWHITELISTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedAddressableWhiteListExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCELTABLE_FINISHSIZEPREFIXEDADDRESSABLEWHITELISTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

