#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Connections { class ConnectionBase; }
namespace BestHTTP::Core { class ConnectionEvents; }
namespace BestHTTP::Connections { class HTTPConnectionStates; }
namespace BestHTTP::Core { class HostProtocolSupport; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_CORE_CONNECTIONEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8EB9E0)
#define BESTHTTP_CORE_CONNECTIONEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8EBA20)
#define BESTHTTP_CORE_CONNECTIONEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8EBA60)
#define BESTHTTP_CORE_CONNECTIONEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8EBAA0)
#define BESTHTTP_CORE_CONNECTIONEVENTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8EBAE0)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int ConnectionEventInfo_TypeDefinitionIndex = 23393;

	class ConnectionEventInfo : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::ConnectionBase* Source; // 0x10
		::BestHTTP::Core::ConnectionEvents* Event; // 0x18
		::BestHTTP::Connections::HTTPConnectionStates* State; // 0x1C
		::BestHTTP::Core::HostProtocolSupport* ProtocolSupport; // 0x20
		::BestHTTP::HTTPRequest* Request; // 0x28

		::System::Void .ctor(::BestHTTP::Connections::ConnectionBase* arg, ::BestHTTP::Core::ConnectionEvents* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::ConnectionBase*, ::BestHTTP::Core::ConnectionEvents*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_CONNECTIONEVENTINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::ConnectionBase* arg, ::BestHTTP::Connections::HTTPConnectionStates* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::ConnectionBase*, ::BestHTTP::Connections::HTTPConnectionStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_CONNECTIONEVENTINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::ConnectionBase* arg, ::BestHTTP::Core::HostProtocolSupport* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::ConnectionBase*, ::BestHTTP::Core::HostProtocolSupport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_CONNECTIONEVENTINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::ConnectionBase* arg, ::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::ConnectionBase*, ::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_CONNECTIONEVENTINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_CONNECTIONEVENTINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

