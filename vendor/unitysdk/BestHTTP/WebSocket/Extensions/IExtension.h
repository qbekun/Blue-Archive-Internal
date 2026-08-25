#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::WebSocket::Frames { class WebSocketFrame; }
namespace BestHTTP::WebSocket { class WebSocketResponse; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_WEBSOCKET_EXTENSIONS_IEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_IEXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_IEXTENSION_PARSENEGOTIATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_IEXTENSION_ADDNEGOTIATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_IEXTENSION_GETFRAMEHEADER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::WebSocket::Extensions
{
	inline static constexpr unsigned int IExtension_TypeDefinitionIndex = 21337;

	class IExtension : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Decode(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_IEXTENSION_DECODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encode(::BestHTTP::WebSocket::Frames::WebSocketFrame* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::WebSocket::Frames::WebSocketFrame*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_IEXTENSION_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseNegotiation(::BestHTTP::WebSocket::WebSocketResponse* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::WebSocket::WebSocketResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_IEXTENSION_PARSENEGOTIATION_OFFSET))(arg, nullptr);
		}

		::System::Void AddNegotiation(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_IEXTENSION_ADDNEGOTIATION_OFFSET))(arg, nullptr);
		}

		::System::Byte GetFrameHeader(::BestHTTP::WebSocket::Frames::WebSocketFrame* arg, ::System::Byte arg)
		{
			return (return (::System::Byte(*)(::BestHTTP::WebSocket::Frames::WebSocketFrame*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_IEXTENSION_GETFRAMEHEADER_OFFSET))(arg, arg, nullptr);
		}

	};
}

