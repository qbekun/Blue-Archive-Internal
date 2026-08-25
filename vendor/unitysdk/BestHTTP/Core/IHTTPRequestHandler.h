#pragma once
#include "../../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP { class ShutdownTypes; }
namespace BestHTTP::Connections { class KeepAliveHeader; }

#define BESTHTTP_CORE_IHTTPREQUESTHANDLER_GET_HASCUSTOMREQUESTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CORE_IHTTPREQUESTHANDLER_PROCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CORE_IHTTPREQUESTHANDLER_GET_CANPROCESSMULTIPLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CORE_IHTTPREQUESTHANDLER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CORE_IHTTPREQUESTHANDLER_RUNHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CORE_IHTTPREQUESTHANDLER_GET_SHUTDOWNTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CORE_IHTTPREQUESTHANDLER_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_CORE_IHTTPREQUESTHANDLER_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int IHTTPRequestHandler_TypeDefinitionIndex = 23399;

	class IHTTPRequestHandler : public Il2CppObject
	{
	public:
		::System::Boolean get_HasCustomRequestProcessor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_IHTTPREQUESTHANDLER_GET_HASCUSTOMREQUESTPROCESSOR_OFFSET))(nullptr);
		}

		::System::Void Process(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_IHTTPREQUESTHANDLER_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanProcessMultiple()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_IHTTPREQUESTHANDLER_GET_CANPROCESSMULTIPLE_OFFSET))(nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_IHTTPREQUESTHANDLER_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void RunHandler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_IHTTPREQUESTHANDLER_RUNHANDLER_OFFSET))(nullptr);
		}

		::BestHTTP::ShutdownTypes* get_ShutdownType()
		{
			return (return (::BestHTTP::ShutdownTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_IHTTPREQUESTHANDLER_GET_SHUTDOWNTYPE_OFFSET))(nullptr);
		}

		::System::Void Shutdown(::BestHTTP::ShutdownTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::ShutdownTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_IHTTPREQUESTHANDLER_SHUTDOWN_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::KeepAliveHeader* get_KeepAlive()
		{
			return (return (::BestHTTP::Connections::KeepAliveHeader*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_IHTTPREQUESTHANDLER_GET_KEEPALIVE_OFFSET))(nullptr);
		}

	};
}

