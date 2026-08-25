#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ProtocolSettingExcel; }
namespace FlatData { class OpenConditionContent; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_PROTOCOLSETTINGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD54E60)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GETROOTASPROTOCOLSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD54E70)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GETROOTASPROTOCOLSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD54ED0)
#define FLATDATA_PROTOCOLSETTINGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD54F30)
#define FLATDATA_PROTOCOLSETTINGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD54B80)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xD54F50)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xD54F90)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GETPROTOCOLBYTES_OFFSET UNITYSDK_OFFSET(0xD55000)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GET_OPENCONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0xD55020)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GET_OPENCONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0xD55070)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xD550F0)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xD55140)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GET_INVENTORY_OFFSET UNITYSDK_OFFSET(0xD55190)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GET_INVENTORY_OFFSET UNITYSDK_OFFSET(0xD551E0)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GET_MAIL_OFFSET UNITYSDK_OFFSET(0xD55230)
#define FLATDATA_PROTOCOLSETTINGEXCEL_GET_MAIL_OFFSET UNITYSDK_OFFSET(0xD55280)
#define FLATDATA_PROTOCOLSETTINGEXCEL_CREATEPROTOCOLSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD552D0)
#define FLATDATA_PROTOCOLSETTINGEXCEL_STARTPROTOCOLSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD55510)
#define FLATDATA_PROTOCOLSETTINGEXCEL_ADDPROTOCOL_OFFSET UNITYSDK_OFFSET(0xD55400)
#define FLATDATA_PROTOCOLSETTINGEXCEL_ADDOPENCONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0xD553D0)
#define FLATDATA_PROTOCOLSETTINGEXCEL_ADDCURRENCY_OFFSET UNITYSDK_OFFSET(0xD55490)
#define FLATDATA_PROTOCOLSETTINGEXCEL_ADDINVENTORY_OFFSET UNITYSDK_OFFSET(0xD55460)
#define FLATDATA_PROTOCOLSETTINGEXCEL_ADDMAIL_OFFSET UNITYSDK_OFFSET(0xD55430)
#define FLATDATA_PROTOCOLSETTINGEXCEL_ENDPROTOCOLSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD554C0)

namespace FlatData
{
	inline static constexpr unsigned int ProtocolSettingExcel_TypeDefinitionIndex = 9318;

	class ProtocolSettingExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ProtocolSettingExcel* GetRootAsProtocolSettingExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ProtocolSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GETROOTASPROTOCOLSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ProtocolSettingExcel* GetRootAsProtocolSettingExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ProtocolSettingExcel* arg2)
		{
			return ((::FlatData::ProtocolSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ProtocolSettingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GETROOTASPROTOCOLSETTINGEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ProtocolSettingExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ProtocolSettingExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_protocol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::String* get_Protocol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* GetProtocolBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GETPROTOCOLBYTES_OFFSET))(nullptr);
		}

		::FlatData::OpenConditionContent* get_openConditionContent()
		{
			return ((::FlatData::OpenConditionContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GET_OPENCONDITIONCONTENT_OFFSET))(nullptr);
		}

		::FlatData::OpenConditionContent* get_OpenConditionContent()
		{
			return ((::FlatData::OpenConditionContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GET_OPENCONDITIONCONTENT_OFFSET))(nullptr);
		}

		::System::Boolean get_currency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GET_CURRENCY_OFFSET))(nullptr);
		}

		::System::Boolean get_Currency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GET_CURRENCY_OFFSET))(nullptr);
		}

		::System::Boolean get_inventory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GET_INVENTORY_OFFSET))(nullptr);
		}

		::System::Boolean get_Inventory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GET_INVENTORY_OFFSET))(nullptr);
		}

		::System::Boolean get_mail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GET_MAIL_OFFSET))(nullptr);
		}

		::System::Boolean get_Mail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_GET_MAIL_OFFSET))(nullptr);
		}

		Il2CppObject* CreateProtocolSettingExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2, ::FlatData::OpenConditionContent* arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatData::OpenConditionContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_CREATEPROTOCOLSETTINGEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void StartProtocolSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_STARTPROTOCOLSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddProtocol(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_ADDPROTOCOL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOpenConditionContent(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::OpenConditionContent* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_ADDOPENCONDITIONCONTENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCurrency(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_ADDCURRENCY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddInventory(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_ADDINVENTORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMail(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_ADDMAIL_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndProtocolSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROTOCOLSETTINGEXCEL_ENDPROTOCOLSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

