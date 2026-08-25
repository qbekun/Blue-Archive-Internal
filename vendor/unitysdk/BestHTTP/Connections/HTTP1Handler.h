#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Connections { class KeepAliveHeader; }
namespace BestHTTP::Connections { class HTTPConnection; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP { class ShutdownTypes; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_GET_HASCUSTOMREQUESTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x8FD860)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x8FD870)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_GET_CANPROCESSMULTIPLE_OFFSET UNITYSDK_OFFSET(0x8FD880)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x8FD890)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x8FD8A0)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8FD8B0)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_PROCESS_OFFSET UNITYSDK_OFFSET(0x8FD940)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_RUNHANDLER_OFFSET UNITYSDK_OFFSET(0x8FD950)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_ONCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x8FEB30)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_RECEIVE_OFFSET UNITYSDK_OFFSET(0x8FE520)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_GET_SHUTDOWNTYPE_OFFSET UNITYSDK_OFFSET(0x8FEE10)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_SET_SHUTDOWNTYPE_OFFSET UNITYSDK_OFFSET(0x8FEE20)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x8FEE30)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FEE40)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FEE90)
#define BESTHTTP_CONNECTIONS_HTTP1HANDLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x8FEEA0)

namespace BestHTTP::Connections
{
	inline static constexpr unsigned int HTTP1Handler_TypeDefinitionIndex = 23420;

	class HTTP1Handler : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::KeepAliveHeader* _keepAlive; // 0x10
		::BestHTTP::Connections::HTTPConnection* conn; // 0x18
		::BestHTTP::Logger::LoggingContext* _Context_k__BackingField; // 0x20
		::BestHTTP::ShutdownTypes* _ShutdownType_k__BackingField; // 0x28

		::System::Boolean get_HasCustomRequestProcessor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_GET_HASCUSTOMREQUESTPROCESSOR_OFFSET))(nullptr);
		}

		::BestHTTP::Connections::KeepAliveHeader* get_KeepAlive()
		{
			return (return (::BestHTTP::Connections::KeepAliveHeader*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_GET_KEEPALIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanProcessMultiple()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_GET_CANPROCESSMULTIPLE_OFFSET))(nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_Context(::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTPConnection* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTPConnection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Process(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void RunHandler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_RUNHANDLER_OFFSET))(nullptr);
		}

		::System::Void OnCancellationRequested(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_ONCANCELLATIONREQUESTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean Receive(::BestHTTP::HTTPRequest* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_RECEIVE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::ShutdownTypes* get_ShutdownType()
		{
			return (return (::BestHTTP::ShutdownTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_GET_SHUTDOWNTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ShutdownType(::BestHTTP::ShutdownTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::ShutdownTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_SET_SHUTDOWNTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Shutdown(::BestHTTP::ShutdownTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::ShutdownTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_SHUTDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP1HANDLER_FINALIZE_OFFSET))(nullptr);
		}

	};
}

