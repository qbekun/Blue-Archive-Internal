#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Connections { class TCPConnector; }
namespace BestHTTP::Core { class IHTTPRequestHandler; }
namespace BestHTTP { class ShutdownTypes; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_CONNECTIONS_HTTPCONNECTION_THREADFUNC_OFFSET UNITYSDK_OFFSET(0x8FEEB0)
#define BESTHTTP_CONNECTIONS_HTTPCONNECTION_GET_KEEPALIVETIME_OFFSET UNITYSDK_OFFSET(0x901AD0)
#define BESTHTTP_CONNECTIONS_HTTPCONNECTION_GET_CANPROCESSMULTIPLE_OFFSET UNITYSDK_OFFSET(0x901CB0)
#define BESTHTTP_CONNECTIONS_HTTPCONNECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x901D50)
#define BESTHTTP_CONNECTIONS_HTTPCONNECTION_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9021E0)
#define BESTHTTP_CONNECTIONS_HTTPCONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8EF050)
#define BESTHTTP_CONNECTIONS_HTTPCONNECTION_SET_KEEPALIVETIME_OFFSET UNITYSDK_OFFSET(0x9022F0)
#define BESTHTTP_CONNECTIONS_HTTPCONNECTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x902300)

namespace BestHTTP::Connections
{
	inline static constexpr unsigned int HTTPConnection_TypeDefinitionIndex = 23421;

	class HTTPConnection : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::TCPConnector* connector; // 0x58
		::BestHTTP::Core::IHTTPRequestHandler* requestHandler; // 0x60

		::System::Void ThreadFunc()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTPCONNECTION_THREADFUNC_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_KeepAliveTime()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTPCONNECTION_GET_KEEPALIVETIME_OFFSET))(nullptr);
		}

		::System::Boolean get_CanProcessMultiple()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTPCONNECTION_GET_CANPROCESSMULTIPLE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTPCONNECTION_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Shutdown(::BestHTTP::ShutdownTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::ShutdownTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTPCONNECTION_SHUTDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTPCONNECTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void set_KeepAliveTime(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTPCONNECTION_SET_KEEPALIVETIME_OFFSET))(arg, nullptr);
		}

		::System::Void Process(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTPCONNECTION_PROCESS_OFFSET))(arg, nullptr);
		}

	};
}

