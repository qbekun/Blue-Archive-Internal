#pragma once
#include "../../../unitysdk.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Net::Security { class AsyncOperationStatus; }

#define MONO_NET_SECURITY_ASYNCWRITEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D30E0)
#define MONO_NET_SECURITY_ASYNCWRITEREQUEST_RUN_OFFSET UNITYSDK_OFFSET(0x96D3180)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncWriteRequest_TypeDefinitionIndex = 29064;

	class AsyncWriteRequest : public __StaticArrayInitTypeSize=3
	{
	public:
		::System::Void .ctor(::Mono::Net::Security::MobileAuthenticatedStream* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCWRITEREQUEST_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Mono::Net::Security::AsyncOperationStatus* Run(::Mono::Net::Security::AsyncOperationStatus* arg)
		{
			return (return (::Mono::Net::Security::AsyncOperationStatus*(*)(::Mono::Net::Security::AsyncOperationStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCWRITEREQUEST_RUN_OFFSET))(arg, nullptr);
		}

	};
}

