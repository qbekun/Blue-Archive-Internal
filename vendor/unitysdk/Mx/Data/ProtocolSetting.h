#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace FlatData { class OpenConditionContent; }
namespace FlatData { class ProtocolSettingExcel; }

#define MX_DATA_PROTOCOLSETTING_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x1857B80)
#define MX_DATA_PROTOCOLSETTING_SET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x1857B90)
#define MX_DATA_PROTOCOLSETTING_GET_OPENCONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1857BA0)
#define MX_DATA_PROTOCOLSETTING_SET_OPENCONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1857BB0)
#define MX_DATA_PROTOCOLSETTING_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0x1857BC0)
#define MX_DATA_PROTOCOLSETTING_SET_CURRENCY_OFFSET UNITYSDK_OFFSET(0x1857BD0)
#define MX_DATA_PROTOCOLSETTING_GET_INVENTORY_OFFSET UNITYSDK_OFFSET(0x1857BE0)
#define MX_DATA_PROTOCOLSETTING_SET_INVENTORY_OFFSET UNITYSDK_OFFSET(0x1857BF0)
#define MX_DATA_PROTOCOLSETTING_GET_MAIL_OFFSET UNITYSDK_OFFSET(0x1857C00)
#define MX_DATA_PROTOCOLSETTING_SET_MAIL_OFFSET UNITYSDK_OFFSET(0x1857C10)
#define MX_DATA_PROTOCOLSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x1857C20)
#define MX_DATA_PROTOCOLSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x1857C50)

namespace MX::Data
{
	inline static constexpr unsigned int ProtocolSetting_TypeDefinitionIndex = 15875;

	class ProtocolSetting : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* _Protocol_k__BackingField; // 0x10
		::FlatData::OpenConditionContent* _OpenConditionContent_k__BackingField; // 0x14
		::System::Boolean _Currency_k__BackingField; // 0x18
		::System::Boolean _Inventory_k__BackingField; // 0x19
		::System::Boolean _Mail_k__BackingField; // 0x1A

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return (return (::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTING_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_Protocol(::MX::NetworkProtocol::Protocol* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::Protocol*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTING_SET_PROTOCOL_OFFSET))(arg, nullptr);
		}

		::FlatData::OpenConditionContent* get_OpenConditionContent()
		{
			return (return (::FlatData::OpenConditionContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTING_GET_OPENCONDITIONCONTENT_OFFSET))(nullptr);
		}

		::System::Void set_OpenConditionContent(::FlatData::OpenConditionContent* arg)
		{
			((::System::Void(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTING_SET_OPENCONDITIONCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Currency()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTING_GET_CURRENCY_OFFSET))(nullptr);
		}

		::System::Void set_Currency(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTING_SET_CURRENCY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Inventory()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTING_GET_INVENTORY_OFFSET))(nullptr);
		}

		::System::Void set_Inventory(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTING_SET_INVENTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Mail()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTING_GET_MAIL_OFFSET))(nullptr);
		}

		::System::Void set_Mail(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTING_SET_MAIL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::ProtocolSettingExcel* arg)
		{
			((::System::Void(*)(::FlatData::ProtocolSettingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PROTOCOLSETTING_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

