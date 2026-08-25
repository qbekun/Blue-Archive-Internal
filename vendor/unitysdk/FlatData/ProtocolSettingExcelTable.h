#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ProtocolSettingExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD54990)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_GETROOTASPROTOCOLSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD549A0)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_GETROOTASPROTOCOLSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD54A00)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD54A90)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD54A60)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD54AB0)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD54BB0)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD54C00)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_CREATEPROTOCOLSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD54C40)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_STARTPROTOCOLSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD54D30)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD54CB0)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD54D50)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD54DE0)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_ENDPROTOCOLSETTINGEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD54CE0)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_FINISHPROTOCOLSETTINGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD54E20)
#define FLATDATA_PROTOCOLSETTINGEXCELTABLE_FINISHSIZEPREFIXEDPROTOCOLSETTINGEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD54E40)

namespace FlatData
{
	inline static constexpr unsigned int ProtocolSettingExcelTable_TypeDefinitionIndex = 9317;

	class ProtocolSettingExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ProtocolSettingExcelTable* GetRootAsProtocolSettingExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ProtocolSettingExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_GETROOTASPROTOCOLSETTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ProtocolSettingExcelTable* GetRootAsProtocolSettingExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ProtocolSettingExcelTable* arg2)
		{
			return ((::FlatData::ProtocolSettingExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ProtocolSettingExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_GETROOTASPROTOCOLSETTINGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ProtocolSettingExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ProtocolSettingExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateProtocolSettingExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_CREATEPROTOCOLSETTINGEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartProtocolSettingExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_STARTPROTOCOLSETTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndProtocolSettingExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_ENDPROTOCOLSETTINGEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishProtocolSettingExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_FINISHPROTOCOLSETTINGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedProtocolSettingExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCELTABLE_FINISHSIZEPREFIXEDPROTOCOLSETTINGEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

