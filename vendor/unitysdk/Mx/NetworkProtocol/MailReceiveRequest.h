#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MAILRECEIVEREQUEST_SET_MAILSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF47B80)
#define MX_NETWORKPROTOCOL_MAILRECEIVEREQUEST_GET_MAILSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF47B90)
#define MX_NETWORKPROTOCOL_MAILRECEIVEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47BA0)
#define MX_NETWORKPROTOCOL_MAILRECEIVEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47BB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MailReceiveRequest_TypeDefinitionIndex = 11841;

	class MailReceiveRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _MailServerIds_k__BackingField; // 0x40

		::System::Void set_MailServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVEREQUEST_SET_MAILSERVERIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MailServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVEREQUEST_GET_MAILSERVERIDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

