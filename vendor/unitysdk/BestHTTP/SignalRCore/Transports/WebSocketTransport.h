#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::WebSocket { class WebSocket; }
namespace BestHTTP::SignalRCore { class HubConnection; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }
namespace BestHTTP::SignalRCore { class TransportTypes; }

#define BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_ONOPEN_OFFSET UNITYSDK_OFFSET(0x653400)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x648DF0)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_STARTCLOSE_OFFSET UNITYSDK_OFFSET(0x653670)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_ONBINARY_OFFSET UNITYSDK_OFFSET(0x653830)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x653CC0)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_SEND_OFFSET UNITYSDK_OFFSET(0x653E50)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_STARTCONNECT_OFFSET UNITYSDK_OFFSET(0x653ED0)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x654950)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_ONERROR_OFFSET UNITYSDK_OFFSET(0x654EE0)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_GET_TRANSPORTTYPE_OFFSET UNITYSDK_OFFSET(0x655080)

namespace BestHTTP::SignalRCore::Transports
{
	inline static constexpr unsigned int WebSocketTransport_TypeDefinitionIndex = 21457;

	class WebSocketTransport : public Il2CppObject
	{
	public:
		::BestHTTP::WebSocket::WebSocket* webSocket; // 0x48

		::System::Void OnOpen(::BestHTTP::WebSocket::WebSocket* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_ONOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SignalRCore::HubConnection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::HubConnection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void StartClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_STARTCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnBinary(::BestHTTP::WebSocket::WebSocket* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_ONBINARY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnClosed(::BestHTTP::WebSocket::WebSocket* arg, ::System::UInt16 arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::UInt16, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_ONCLOSED_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void Send(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg)
		{
			((::System::Void(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void StartConnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_STARTCONNECT_OFFSET))(nullptr);
		}

		::System::Void OnMessage(::BestHTTP::WebSocket::WebSocket* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_ONMESSAGE_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnError(::BestHTTP::WebSocket::WebSocket* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_ONERROR_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::SignalRCore::TransportTypes* get_TransportType()
		{
			return (return (::BestHTTP::SignalRCore::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_WEBSOCKETTRANSPORT_GET_TRANSPORTTYPE_OFFSET))(nullptr);
		}

	};
}

