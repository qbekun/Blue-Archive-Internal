#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::WebSocket { class WebSocketStates; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::WebSocket { class OnWebSocketOpenDelegate; }
namespace BestHTTP::WebSocket { class OnWebSocketMessageDelegate; }
namespace BestHTTP::WebSocket { class OnWebSocketBinaryDelegate; }
namespace BestHTTP::WebSocket { class OnWebSocketClosedDelegate; }
namespace BestHTTP::WebSocket { class OnWebSocketErrorDelegate; }
namespace BestHTTP::WebSocket { class OnWebSocketIncompleteFrameDelegate; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::WebSocket { class WebSocketResponse; }
namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::WebSocket::Frames { class WebSocketFrame; }
namespace BestHTTP::WebSocket::Frames { class WebSocketFrameReader; }

#define BESTHTTP_WEBSOCKET_WEBSOCKET_GET_STATE_OFFSET UNITYSDK_OFFSET(0x4ED100)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_SET_STATE_OFFSET UNITYSDK_OFFSET(0x4ED110)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x4ED120)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_GET_BUFFEREDAMOUNT_OFFSET UNITYSDK_OFFSET(0x4ED170)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_GET_STARTPINGTHREAD_OFFSET UNITYSDK_OFFSET(0x4ED190)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_SET_STARTPINGTHREAD_OFFSET UNITYSDK_OFFSET(0x4ED1A0)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_GET_PINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x4ED1B0)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_SET_PINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x4ED1C0)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_GET_CLOSEAFTERNOMESSAGE_OFFSET UNITYSDK_OFFSET(0x4ED1D0)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_SET_CLOSEAFTERNOMESSAGE_OFFSET UNITYSDK_OFFSET(0x4ED1E0)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_GET_INTERNALREQUEST_OFFSET UNITYSDK_OFFSET(0x4ED1F0)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_SET_INTERNALREQUEST_OFFSET UNITYSDK_OFFSET(0x4ED200)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x4ED210)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_SET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x4ED220)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_GET_LATENCY_OFFSET UNITYSDK_OFFSET(0x4ED230)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_GET_LASTMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0x4ED250)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x4ED270)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x4ED280)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4ED290)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4ED450)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_ONINTERNALREQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x4EDF90)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_ONINTERNALREQUESTUPGRADED_OFFSET UNITYSDK_OFFSET(0x4EE5F0)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_OPEN_OFFSET UNITYSDK_OFFSET(0x4EF340)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_SEND_OFFSET UNITYSDK_OFFSET(0x4EF620)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_SEND_OFFSET UNITYSDK_OFFSET(0x4EF890)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_SEND_OFFSET UNITYSDK_OFFSET(0x4EFA20)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_SEND_OFFSET UNITYSDK_OFFSET(0x4EFC40)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_CLOSE_OFFSET UNITYSDK_OFFSET(0x4EFF20)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_CLOSE_OFFSET UNITYSDK_OFFSET(0x4F0030)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_ENCODECLOSEDATA_OFFSET UNITYSDK_OFFSET(0x4F02B0)
#define BESTHTTP_WEBSOCKET_WEBSOCKET_GETSECKEY_OFFSET UNITYSDK_OFFSET(0x4EDDC0)
#define BESTHTTP_WEBSOCKET_WEBSOCKET__ONINTERNALREQUESTUPGRADED_B__47_0_OFFSET UNITYSDK_OFFSET(0x4F05A0)
#define BESTHTTP_WEBSOCKET_WEBSOCKET__ONINTERNALREQUESTUPGRADED_B__47_1_OFFSET UNITYSDK_OFFSET(0x4F05C0)
#define BESTHTTP_WEBSOCKET_WEBSOCKET__ONINTERNALREQUESTUPGRADED_B__47_2_OFFSET UNITYSDK_OFFSET(0x4F05E0)
#define BESTHTTP_WEBSOCKET_WEBSOCKET__ONINTERNALREQUESTUPGRADED_B__47_3_OFFSET UNITYSDK_OFFSET(0x4F0610)

namespace BestHTTP::WebSocket
{
	inline static constexpr unsigned int WebSocket_TypeDefinitionIndex = 21330;

	class WebSocket : public Il2CppObject
	{
	public:
		::BestHTTP::WebSocket::WebSocketStates* _State_k__BackingField; // 0x10
		::System::Boolean _StartPingThread_k__BackingField; // 0x11
		::System::Int32 _PingFrequency_k__BackingField; // 0x14
		::System::TimeSpan* _CloseAfterNoMessage_k__BackingField; // 0x18
		::BestHTTP::HTTPRequest* _InternalRequest_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _Extensions_k__BackingField; // 0x28
		::BestHTTP::WebSocket::OnWebSocketOpenDelegate* OnOpen; // 0x30
		::BestHTTP::WebSocket::OnWebSocketMessageDelegate* OnMessage; // 0x38
		::BestHTTP::WebSocket::OnWebSocketBinaryDelegate* OnBinary; // 0x40
		::BestHTTP::WebSocket::OnWebSocketClosedDelegate* OnClosed; // 0x48
		::BestHTTP::WebSocket::OnWebSocketErrorDelegate* OnError; // 0x50
		::BestHTTP::WebSocket::OnWebSocketIncompleteFrameDelegate* OnIncompleteFrame; // 0x58
		::BestHTTP::Logger::LoggingContext* _Context_k__BackingField; // 0x60
		::System::Boolean requestSent; // 0x68
		::BestHTTP::WebSocket::WebSocketResponse* webSocket; // 0x70

		::BestHTTP::WebSocket::WebSocketStates* get_State()
		{
			return (return (::BestHTTP::WebSocket::WebSocketStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::BestHTTP::WebSocket::WebSocketStates* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocketStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_GET_ISOPEN_OFFSET))(nullptr);
		}

		::System::Int32 get_BufferedAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_GET_BUFFEREDAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_StartPingThread()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_GET_STARTPINGTHREAD_OFFSET))(nullptr);
		}

		::System::Void set_StartPingThread(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_SET_STARTPINGTHREAD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PingFrequency()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_GET_PINGFREQUENCY_OFFSET))(nullptr);
		}

		::System::Void set_PingFrequency(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_SET_PINGFREQUENCY_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_CloseAfterNoMessage()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_GET_CLOSEAFTERNOMESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_CloseAfterNoMessage(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_SET_CLOSEAFTERNOMESSAGE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::HTTPRequest* get_InternalRequest()
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_GET_INTERNALREQUEST_OFFSET))(nullptr);
		}

		::System::Void set_InternalRequest(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_SET_INTERNALREQUEST_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Extensions()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_GET_EXTENSIONS_OFFSET))(nullptr);
		}

		::System::Void set_Extensions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_SET_EXTENSIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Latency()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_GET_LATENCY_OFFSET))(nullptr);
		}

		::System::DateTime* get_LastMessageReceived()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_GET_LASTMESSAGERECEIVED_OFFSET))(nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_Context(::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::System::String* str, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void OnInternalRequestCallback(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_ONINTERNALREQUESTCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnInternalRequestUpgraded(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_ONINTERNALREQUESTUPGRADED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_OPEN_OFFSET))(nullptr);
		}

		::System::Void Send(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_SEND_OFFSET))(str, nullptr);
		}

		::System::Void Send(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void Send(::Il2CppArray<::System::Object*>* arg, ::System::UInt64 arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_SEND_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Send(::BestHTTP::WebSocket::Frames::WebSocketFrame* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::Frames::WebSocketFrame*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Close(::System::UInt16 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::UInt16, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_CLOSE_OFFSET))(arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncodeCloseData(::System::UInt16 arg, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::UInt16, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_ENCODECLOSEDATA_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetSecKey(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET_GETSECKEY_OFFSET))(arg, nullptr);
		}

		::System::Void _OnInternalRequestUpgraded_b__47_0(::BestHTTP::WebSocket::WebSocketResponse* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocketResponse*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET__ONINTERNALREQUESTUPGRADED_B__47_0_OFFSET))(arg, str, nullptr);
		}

		::System::Void _OnInternalRequestUpgraded_b__47_1(::BestHTTP::WebSocket::WebSocketResponse* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocketResponse*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET__ONINTERNALREQUESTUPGRADED_B__47_1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _OnInternalRequestUpgraded_b__47_2(::BestHTTP::WebSocket::WebSocketResponse* arg, ::System::UInt16 arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocketResponse*, ::System::UInt16, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET__ONINTERNALREQUESTUPGRADED_B__47_2_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void _OnInternalRequestUpgraded_b__47_3(::BestHTTP::WebSocket::WebSocketResponse* arg, ::BestHTTP::WebSocket::Frames::WebSocketFrameReader* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocketResponse*, ::BestHTTP::WebSocket::Frames::WebSocketFrameReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_WEBSOCKET__ONINTERNALREQUESTUPGRADED_B__47_3_OFFSET))(arg, arg, nullptr);
		}

	};
}

