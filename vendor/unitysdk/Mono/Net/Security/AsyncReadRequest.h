#pragma once
#include "../../../unitysdk.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Net::Security { class AsyncOperationStatus; }

#define MONO_NET_SECURITY_ASYNCREADREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D2E00)
#define MONO_NET_SECURITY_ASYNCREADREQUEST_RUN_OFFSET UNITYSDK_OFFSET(0x96D2EA0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncReadRequest_TypeDefinitionIndex = 29063;

	class AsyncReadRequest : public __StaticArrayInitTypeSize=3
	{
	public:
		::System::Void .ctor(::Mono::Net::Security::MobileAuthenticatedStream* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADREQUEST_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Mono::Net::Security::AsyncOperationStatus* Run(::Mono::Net::Security::AsyncOperationStatus* arg)
		{
			return (return (::Mono::Net::Security::AsyncOperationStatus*(*)(::Mono::Net::Security::AsyncOperationStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADREQUEST_RUN_OFFSET))(arg, nullptr);
		}

	};
}

