#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MailReceiveRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define MAILRECEIVENETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F7FBF0)
#define MAILRECEIVENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7FC00)
#define MAILRECEIVENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F7FC10)
#define MAILRECEIVENETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F7FC20)
#define MAILRECEIVENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F7FC30)
#define MAILRECEIVENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F7FCC0)
#define MAILRECEIVENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F80460)

	inline static constexpr unsigned int MailReceiveNetworkTask_TypeDefinitionIndex = 2607;

	class MailReceiveNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::MailReceiveRequest* _Request_k__BackingField; // 0x40

		::System::Void set_Request(::MX::NetworkProtocol::MailReceiveRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MailReceiveRequest*, ::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVENETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::MailReceiveRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::MailReceiveRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVENETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

