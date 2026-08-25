#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MailReceiveSemiPermanentRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define MAILRECEIVESEMIPERMANENTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F80AE0)
#define MAILRECEIVESEMIPERMANENTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F80AF0)
#define MAILRECEIVESEMIPERMANENTNETWORKTASK__PROCESSSESSION_B__5_0_OFFSET UNITYSDK_OFFSET(0x1F80B60)
#define MAILRECEIVESEMIPERMANENTNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F80B70)
#define MAILRECEIVESEMIPERMANENTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F80B80)
#define MAILRECEIVESEMIPERMANENTNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F80B90)
#define MAILRECEIVESEMIPERMANENTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F80BA0)

	inline static constexpr unsigned int MailReceiveSemiPermanentNetworkTask_TypeDefinitionIndex = 2614;

	class MailReceiveSemiPermanentNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::MailReceiveSemiPermanentRequest* _Request_k__BackingField; // 0x40
		::System::Boolean isRefreshPurchaseList; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVESEMIPERMANENTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVESEMIPERMANENTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__5_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVESEMIPERMANENTNETWORKTASK__PROCESSSESSION_B__5_0_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::MailReceiveSemiPermanentRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::MailReceiveSemiPermanentRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVESEMIPERMANENTNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVESEMIPERMANENTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::MailReceiveSemiPermanentRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MailReceiveSemiPermanentRequest*, ::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVESEMIPERMANENTNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVESEMIPERMANENTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

