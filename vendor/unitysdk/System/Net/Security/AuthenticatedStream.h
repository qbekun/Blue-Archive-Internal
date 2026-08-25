#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAEFE0)
#define SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_GET_INNERSTREAM_OFFSET UNITYSDK_OFFSET(0x9AAF190)
#define SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AAF1A0)
#define SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net::Security
{
	inline static constexpr unsigned int AuthenticatedStream_TypeDefinitionIndex = 29940;

	class AuthenticatedStream : public Il2CppObject
	{
	public:
		::System::IO::Stream* _InnerStream; // 0x28
		::System::Boolean _LeaveStreamOpen; // 0x30

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::Stream* get_InnerStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_GET_INNERSTREAM_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_AUTHENTICATEDSTREAM_GET_ISAUTHENTICATED_OFFSET))(nullptr);
		}

	};
}

