#pragma once
#include "../../../unitysdk.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Net::Security { class AsyncOperationStatus; }

#define MONO_NET_SECURITY_ASYNCHANDSHAKEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D2870)
#define MONO_NET_SECURITY_ASYNCHANDSHAKEREQUEST_RUN_OFFSET UNITYSDK_OFFSET(0x96D2880)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncHandshakeRequest_TypeDefinitionIndex = 29061;

	class AsyncHandshakeRequest : public ::Unity::Burst::Intrinsics::DoSetCSRTrampoline_00000127$PostfixBurstDelegate
	{
	public:
		::System::Void .ctor(::Mono::Net::Security::MobileAuthenticatedStream* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCHANDSHAKEREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Net::Security::AsyncOperationStatus* Run(::Mono::Net::Security::AsyncOperationStatus* arg)
		{
			return (return (::Mono::Net::Security::AsyncOperationStatus*(*)(::Mono::Net::Security::AsyncOperationStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCHANDSHAKEREQUEST_RUN_OFFSET))(arg, nullptr);
		}

	};
}

