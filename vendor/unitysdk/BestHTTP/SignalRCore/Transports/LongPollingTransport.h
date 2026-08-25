#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Extensions { class BufferSegmentStream; }
namespace BestHTTP::SignalRCore { class TransportTypes; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::SignalRCore { class HubConnection; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }

#define BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_GET_TRANSPORTTYPE_OFFSET UNITYSDK_OFFSET(0x650B70)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_DOPOLL_OFFSET UNITYSDK_OFFSET(0x650B80)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_SENDMESSAGES_OFFSET UNITYSDK_OFFSET(0x6510B0)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_ONHANDSHAKEREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x651360)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_ONSENDMESSAGESFINISHED_OFFSET UNITYSDK_OFFSET(0x651600)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x648E00)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_STARTCLOSE_OFFSET UNITYSDK_OFFSET(0x651B10)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_SENDCONNECTIONCLOSEREQUEST_OFFSET UNITYSDK_OFFSET(0x651C60)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_ONCONNECTIONCLOSEREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x651F10)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_ONPOLLREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x652480)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_STARTCONNECT_OFFSET UNITYSDK_OFFSET(0x652D40)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x6530F0)

namespace BestHTTP::SignalRCore::Transports
{
	inline static constexpr unsigned int LongPollingTransport_TypeDefinitionIndex = 21455;

	class LongPollingTransport : public Il2CppObject
	{
	public:
		::System::Int32 MaxRetries; // 0x0
		Il2CppObject* outgoingMessages; // 0x48
		::System::Int32 sendingInProgress; // 0x50
		::BestHTTP::Extensions::BufferSegmentStream* stream; // 0x58

		::BestHTTP::SignalRCore::TransportTypes* get_TransportType()
		{
			return (return (::BestHTTP::SignalRCore::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_GET_TRANSPORTTYPE_OFFSET))(nullptr);
		}

		::System::Void DoPoll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_DOPOLL_OFFSET))(nullptr);
		}

		::System::Void SendMessages()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_SENDMESSAGES_OFFSET))(nullptr);
		}

		::System::Void OnHandshakeRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_ONHANDSHAKEREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnSendMessagesFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_ONSENDMESSAGESFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SignalRCore::HubConnection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::HubConnection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void StartClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_STARTCLOSE_OFFSET))(nullptr);
		}

		::System::Void SendConnectionCloseRequest(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_SENDCONNECTIONCLOSEREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void OnConnectionCloseRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_ONCONNECTIONCLOSEREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnPollRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_ONPOLLREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_STARTCONNECT_OFFSET))(nullptr);
		}

		::System::Void Send(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg)
		{
			((::System::Void(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_LONGPOLLINGTRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

	};
}

