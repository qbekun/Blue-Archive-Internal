#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Connections { class HTTPConnectionStates; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP { class ShutdownTypes; }

#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_SERVERADDRESS_OFFSET UNITYSDK_OFFSET(0x8FB270)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_SERVERADDRESS_OFFSET UNITYSDK_OFFSET(0x8FB280)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x8FB290)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x8FB2A0)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_CURRENTREQUEST_OFFSET UNITYSDK_OFFSET(0x8FB2B0)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_CURRENTREQUEST_OFFSET UNITYSDK_OFFSET(0x8FB2C0)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_KEEPALIVETIME_OFFSET UNITYSDK_OFFSET(0x8FB2D0)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_KEEPALIVETIME_OFFSET UNITYSDK_OFFSET(0x8FB2E0)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_CANPROCESSMULTIPLE_OFFSET UNITYSDK_OFFSET(0x8FB2F0)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x8FB300)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x8FB310)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_LASTPROCESSEDURI_OFFSET UNITYSDK_OFFSET(0x8FB320)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_LASTPROCESSEDURI_OFFSET UNITYSDK_OFFSET(0x8FB330)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_LASTPROCESSTIME_OFFSET UNITYSDK_OFFSET(0x8FB340)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_LASTPROCESSTIME_OFFSET UNITYSDK_OFFSET(0x8FB350)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8FB360)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8FB370)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_PROCESS_OFFSET UNITYSDK_OFFSET(0x8FB540)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_THREADFUNC_OFFSET UNITYSDK_OFFSET(0x8FB6C0)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_SHUTDOWNTYPE_OFFSET UNITYSDK_OFFSET(0x8FB6D0)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_SHUTDOWNTYPE_OFFSET UNITYSDK_OFFSET(0x8FB6E0)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x8FB6F0)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ED260)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FB700)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x8FB710)
#define BESTHTTP_CONNECTIONS_CONNECTIONBASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8FB7E0)

namespace BestHTTP::Connections
{
	inline static constexpr unsigned int ConnectionBase_TypeDefinitionIndex = 23416;

	class ConnectionBase : public Il2CppObject
	{
	public:
		::System::String* _ServerAddress_k__BackingField; // 0x10
		::BestHTTP::Connections::HTTPConnectionStates* _State_k__BackingField; // 0x18
		::BestHTTP::HTTPRequest* _CurrentRequest_k__BackingField; // 0x20
		::System::TimeSpan* _KeepAliveTime_k__BackingField; // 0x28
		::System::DateTime* _StartTime_k__BackingField; // 0x30
		::System::Uri* _LastProcessedUri_k__BackingField; // 0x38
		::System::DateTime* _LastProcessTime_k__BackingField; // 0x40
		::BestHTTP::Logger::LoggingContext* Context; // 0x48
		::System::Boolean IsThreaded; // 0x50
		::BestHTTP::ShutdownTypes* _ShutdownType_k__BackingField; // 0x54

		::System::String* get_ServerAddress()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_SERVERADDRESS_OFFSET))(nullptr);
		}

		::System::Void set_ServerAddress(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_SERVERADDRESS_OFFSET))(str, nullptr);
		}

		::BestHTTP::Connections::HTTPConnectionStates* get_State()
		{
			return (return (::BestHTTP::Connections::HTTPConnectionStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::BestHTTP::Connections::HTTPConnectionStates* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTPConnectionStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::HTTPRequest* get_CurrentRequest()
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_CURRENTREQUEST_OFFSET))(nullptr);
		}

		::System::Void set_CurrentRequest(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_CURRENTREQUEST_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_KeepAliveTime()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_KEEPALIVETIME_OFFSET))(nullptr);
		}

		::System::Void set_KeepAliveTime(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_KEEPALIVETIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanProcessMultiple()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_CANPROCESSMULTIPLE_OFFSET))(nullptr);
		}

		::System::DateTime* get_StartTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_STARTTIME_OFFSET))(nullptr);
		}

		::System::Void set_StartTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_STARTTIME_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_LastProcessedUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_LASTPROCESSEDURI_OFFSET))(nullptr);
		}

		::System::Void set_LastProcessedUri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_LASTPROCESSEDURI_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastProcessTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_LASTPROCESSTIME_OFFSET))(nullptr);
		}

		::System::Void set_LastProcessTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_LASTPROCESSTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void Process(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void ThreadFunc()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_THREADFUNC_OFFSET))(nullptr);
		}

		::BestHTTP::ShutdownTypes* get_ShutdownType()
		{
			return (return (::BestHTTP::ShutdownTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_GET_SHUTDOWNTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ShutdownType(::BestHTTP::ShutdownTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::ShutdownTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_SET_SHUTDOWNTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Shutdown(::BestHTTP::ShutdownTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::ShutdownTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_SHUTDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_FINALIZE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONBASE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

