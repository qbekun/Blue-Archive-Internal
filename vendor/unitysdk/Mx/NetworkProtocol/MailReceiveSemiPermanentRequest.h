#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47D60)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47D70)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTREQUEST_GET_MAILDBID_OFFSET UNITYSDK_OFFSET(0xF47D80)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTREQUEST_SET_MAILDBID_OFFSET UNITYSDK_OFFSET(0xF47D90)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTREQUEST_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0xF47DA0)
#define MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTREQUEST_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0xF47DB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MailReceiveSemiPermanentRequest_TypeDefinitionIndex = 11845;

	class MailReceiveSemiPermanentRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _ProductId_k__BackingField; // 0x40
		::System::Int64 _MailDBId_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_MailDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTREQUEST_GET_MAILDBID_OFFSET))(nullptr);
		}

		::System::Void set_MailDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTREQUEST_SET_MAILDBID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ProductId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTREQUEST_GET_PRODUCTID_OFFSET))(nullptr);
		}

		::System::Void set_ProductId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILRECEIVESEMIPERMANENTREQUEST_SET_PRODUCTID_OFFSET))(arg, nullptr);
		}

	};
}

