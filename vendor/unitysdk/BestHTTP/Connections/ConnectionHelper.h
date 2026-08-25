#pragma once
#include "../../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::Connections { class HTTPConnectionStates&; }
namespace BestHTTP::Connections { class KeepAliveHeader&; }
namespace BestHTTP::Logger { class LoggingContext; }

#define BESTHTTP_CONNECTIONS_CONNECTIONHELPER_HANDLERESPONSE_OFFSET UNITYSDK_OFFSET(0x8FBAC0)
#define BESTHTTP_CONNECTIONS_CONNECTIONHELPER_LOADFROMCACHE_OFFSET UNITYSDK_OFFSET(0x8FC5F0)
#define BESTHTTP_CONNECTIONS_CONNECTIONHELPER_LOADFROMCACHE_OFFSET UNITYSDK_OFFSET(0x8FC960)
#define BESTHTTP_CONNECTIONS_CONNECTIONHELPER_TRYLOADALLFROMCACHE_OFFSET UNITYSDK_OFFSET(0x8F50C0)
#define BESTHTTP_CONNECTIONS_CONNECTIONHELPER_TRYSTOREINCACHE_OFFSET UNITYSDK_OFFSET(0x8FC700)
#define BESTHTTP_CONNECTIONS_CONNECTIONHELPER_GETREDIRECTURI_OFFSET UNITYSDK_OFFSET(0x8FC380)

namespace BestHTTP::Connections
{
	inline static constexpr unsigned int ConnectionHelper_TypeDefinitionIndex = 23418;

	class ConnectionHelper : public Il2CppObject
	{
	public:
		::System::Void HandleResponse(::System::String* str, ::BestHTTP::HTTPRequest* arg, bool&* arg, ::BestHTTP::Connections::HTTPConnectionStates&* arg, ::BestHTTP::Connections::KeepAliveHeader&* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::HTTPRequest*, bool&*, ::BestHTTP::Connections::HTTPConnectionStates&*, ::BestHTTP::Connections::KeepAliveHeader&*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONHELPER_HANDLERESPONSE_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean LoadFromCache(::System::String* str, ::BestHTTP::HTTPRequest* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::BestHTTP::HTTPRequest*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONHELPER_LOADFROMCACHE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean LoadFromCache(::System::String* str, ::BestHTTP::HTTPRequest* arg, ::System::Uri* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::BestHTTP::HTTPRequest*, ::System::Uri*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONHELPER_LOADFROMCACHE_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryLoadAllFromCache(::System::String* str, ::BestHTTP::HTTPRequest* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::BestHTTP::HTTPRequest*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONHELPER_TRYLOADALLFROMCACHE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void TryStoreInCache(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONHELPER_TRYSTOREINCACHE_OFFSET))(arg, nullptr);
		}

		::System::Uri* GetRedirectUri(::BestHTTP::HTTPRequest* arg, ::System::String* str)
		{
			return (return (::System::Uri*(*)(::BestHTTP::HTTPRequest*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_CONNECTIONHELPER_GETREDIRECTURI_OFFSET))(arg, str, nullptr);
		}

	};
}

