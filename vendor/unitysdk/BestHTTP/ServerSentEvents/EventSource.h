#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::ServerSentEvents { class States; }
namespace BestHTTP::Core { class HostConnectionKey; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::ServerSentEvents { class OnGeneralEventDelegate; }
namespace BestHTTP::ServerSentEvents { class OnMessageDelegate; }
namespace BestHTTP::ServerSentEvents { class OnErrorDelegate; }
namespace BestHTTP::ServerSentEvents { class OnRetryDelegate; }
namespace BestHTTP::ServerSentEvents { class OnCommentDelegate; }
namespace BestHTTP::ServerSentEvents { class OnStateChangedDelegate; }
namespace BestHTTP::ServerSentEvents { class Message; }
namespace BestHTTP::ServerSentEvents { class OnEventDelegate; }
namespace BestHTTP { class HTTPResponse; }

#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x74DF70)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_PARSELINE_OFFSET UNITYSDK_OFFSET(0x7577B0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_CALLONERROR_OFFSET UNITYSDK_OFFSET(0x757C40)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ON_OFFSET UNITYSDK_OFFSET(0x757DC0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_URI_OFFSET UNITYSDK_OFFSET(0x757E70)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONCOMMENT_OFFSET UNITYSDK_OFFSET(0x757E80)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x757F20)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONOPEN_OFFSET UNITYSDK_OFFSET(0x74F1B0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SET_RECONNECTIONTIME_OFFSET UNITYSDK_OFFSET(0x757FC0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONCOMMENT_OFFSET UNITYSDK_OFFSET(0x757FD0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONERROR_OFFSET UNITYSDK_OFFSET(0x74E7B0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x74F250)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ONDATA_OFFSET UNITYSDK_OFFSET(0x758070)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x74E600)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_RETRY_OFFSET UNITYSDK_OFFSET(0x758780)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONRETRY_OFFSET UNITYSDK_OFFSET(0x758B50)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_CALLONRETRY_OFFSET UNITYSDK_OFFSET(0x758860)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_OFF_OFFSET UNITYSDK_OFFSET(0x758BF0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONOPEN_OFFSET UNITYSDK_OFFSET(0x74E450)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SETCLOSED_OFFSET UNITYSDK_OFFSET(0x7589C0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ONMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0x758C50)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x74E850)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_CLOSE_OFFSET UNITYSDK_OFFSET(0x74F430)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_FEEDDATA_OFFSET UNITYSDK_OFFSET(0x7584D0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_CONNECTIONKEY_OFFSET UNITYSDK_OFFSET(0x759130)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_CANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x759110)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SET_URI_OFFSET UNITYSDK_OFFSET(0x759140)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ONREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x759150)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x758360)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET UNITYSDK_OFFSET(0x759600)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x759710)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_INTERNALREQUEST_OFFSET UNITYSDK_OFFSET(0x759720)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_LASTEVENTID_OFFSET UNITYSDK_OFFSET(0x759730)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x759740)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SET_INTERNALREQUEST_OFFSET UNITYSDK_OFFSET(0x7597E0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_HANDLEEVENTS_OFFSET UNITYSDK_OFFSET(0x7597F0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SET_CONNECTIONKEY_OFFSET UNITYSDK_OFFSET(0x759880)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONRETRY_OFFSET UNITYSDK_OFFSET(0x74EA00)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x74F390)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7598A0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_RECONNECTIONTIME_OFFSET UNITYSDK_OFFSET(0x7598B0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_OPEN_OFFSET UNITYSDK_OFFSET(0x74EAA0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x7598C0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONERROR_OFFSET UNITYSDK_OFFSET(0x74F2F0)
#define BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SET_LASTEVENTID_OFFSET UNITYSDK_OFFSET(0x7598D0)

namespace BestHTTP::ServerSentEvents
{
	inline static constexpr unsigned int EventSource_TypeDefinitionIndex = 21525;

	class EventSource : public Il2CppObject
	{
	public:
		::System::Uri* _Uri_k__BackingField; // 0x10
		::BestHTTP::ServerSentEvents::States* _state; // 0x18
		::System::TimeSpan* _ReconnectionTime_k__BackingField; // 0x20
		::System::String* _LastEventId_k__BackingField; // 0x28
		::BestHTTP::Core::HostConnectionKey* _ConnectionKey_k__BackingField; // 0x30
		::BestHTTP::HTTPRequest* _InternalRequest_k__BackingField; // 0x40
		::BestHTTP::ServerSentEvents::OnGeneralEventDelegate* OnOpen; // 0x48
		::BestHTTP::ServerSentEvents::OnMessageDelegate* OnMessage; // 0x50
		::BestHTTP::ServerSentEvents::OnErrorDelegate* OnError; // 0x58
		::BestHTTP::ServerSentEvents::OnRetryDelegate* OnRetry; // 0x60
		::BestHTTP::ServerSentEvents::OnCommentDelegate* OnComment; // 0x68
		::BestHTTP::ServerSentEvents::OnGeneralEventDelegate* OnClosed; // 0x70
		::BestHTTP::ServerSentEvents::OnStateChangedDelegate* OnStateChanged; // 0x78
		Il2CppObject* EventTable; // 0x80
		::System::Byte RetryCount; // 0x88
		::System::DateTime* RetryCalled; // 0x90
		::Il2CppArray<::System::Object*>* LineBuffer; // 0x98
		::System::Int32 LineBufferPos; // 0xA0
		::BestHTTP::ServerSentEvents::Message* CurrentMessage; // 0xA8
		Il2CppObject* CompletedMessages; // 0xB0

		::System::Void .ctor(::System::Uri* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ParseLine(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_PARSELINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CallOnError(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_CALLONERROR_OFFSET))(str, str, nullptr);
		}

		::System::Void On(::System::String* str, ::BestHTTP::ServerSentEvents::OnEventDelegate* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::ServerSentEvents::OnEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Uri* get_Uri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_URI_OFFSET))(nullptr);
		}

		::System::Void add_OnComment(::BestHTTP::ServerSentEvents::OnCommentDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnCommentDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONCOMMENT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnStateChanged(::BestHTTP::ServerSentEvents::OnStateChangedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnStateChangedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnOpen(::BestHTTP::ServerSentEvents::OnGeneralEventDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnGeneralEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReconnectionTime(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SET_RECONNECTIONTIME_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnComment(::BestHTTP::ServerSentEvents::OnCommentDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnCommentDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONCOMMENT_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnError(::BestHTTP::ServerSentEvents::OnErrorDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnErrorDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnMessage(::BestHTTP::ServerSentEvents::OnMessageDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnMessageDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnData(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ONDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void add_OnMessage(::BestHTTP::ServerSentEvents::OnMessageDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnMessageDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Retry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_RETRY_OFFSET))(nullptr);
		}

		::System::Void remove_OnRetry(::BestHTTP::ServerSentEvents::OnRetryDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnRetryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONRETRY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CallOnRetry()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_CALLONRETRY_OFFSET))(nullptr);
		}

		::System::Void Off(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_OFF_OFFSET))(str, nullptr);
		}

		::System::Void add_OnOpen(::BestHTTP::ServerSentEvents::OnGeneralEventDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnGeneralEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void SetClosed(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SETCLOSED_OFFSET))(str, nullptr);
		}

		::System::Void OnMessageReceived(::BestHTTP::ServerSentEvents::Message* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::Message*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ONMESSAGERECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnClosed(::BestHTTP::ServerSentEvents::OnGeneralEventDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnGeneralEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONCLOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_CLOSE_OFFSET))(nullptr);
		}

		::System::Boolean FeedData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_FEEDDATA_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::Core::HostConnectionKey* get_ConnectionKey()
		{
			return (return (::BestHTTP::Core::HostConnectionKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_CONNECTIONKEY_OFFSET))(nullptr);
		}

		::System::Void CancellationRequested()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_CANCELLATIONREQUESTED_OFFSET))(nullptr);
		}

		::System::Void set_Uri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SET_URI_OFFSET))(arg, nullptr);
		}

		::System::Void OnRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ONREQUESTFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_State(::BestHTTP::ServerSentEvents::States* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::States*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_BESTHTTP.EXTENSIONS.IHEARTBEAT.ONHEARTBEATUPDATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::ServerSentEvents::States* get_State()
		{
			return (return (::BestHTTP::ServerSentEvents::States*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_STATE_OFFSET))(nullptr);
		}

		::BestHTTP::HTTPRequest* get_InternalRequest()
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_INTERNALREQUEST_OFFSET))(nullptr);
		}

		::System::String* get_LastEventId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_LASTEVENTID_OFFSET))(nullptr);
		}

		::System::Void add_OnStateChanged(::BestHTTP::ServerSentEvents::OnStateChangedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnStateChangedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void set_InternalRequest(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SET_INTERNALREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void HandleEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_HANDLEEVENTS_OFFSET))(nullptr);
		}

		::System::Void set_ConnectionKey(::BestHTTP::Core::HostConnectionKey* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::HostConnectionKey*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SET_CONNECTIONKEY_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnRetry(::BestHTTP::ServerSentEvents::OnRetryDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnRetryDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_ADD_ONRETRY_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnClosed(::BestHTTP::ServerSentEvents::OnGeneralEventDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnGeneralEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONCLOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_DISPOSE_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_ReconnectionTime()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_RECONNECTIONTIME_OFFSET))(nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_OPEN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClosed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_GET_ISCLOSED_OFFSET))(nullptr);
		}

		::System::Void remove_OnError(::BestHTTP::ServerSentEvents::OnErrorDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::ServerSentEvents::OnErrorDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_REMOVE_ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastEventId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SERVERSENTEVENTS_EVENTSOURCE_SET_LASTEVENTID_OFFSET))(str, nullptr);
		}

	};
}

