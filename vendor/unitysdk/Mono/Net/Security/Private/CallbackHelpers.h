#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::Interface { class MonoRemoteCertificateValidationCallback; }
namespace Mono::Security::Interface { class MonoLocalCertificateSelectionCallback; }

#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_PUBLICTOMONO_OFFSET UNITYSDK_OFFSET(0x96D9F70)
#define MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOINTERNAL_OFFSET UNITYSDK_OFFSET(0x96D3AB0)

namespace Mono::Net::Security::Private
{
	inline static constexpr unsigned int CallbackHelpers_TypeDefinitionIndex = 29086;

	class CallbackHelpers : public Il2CppObject
	{
	public:
		::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* PublicToMono(::System::Net::Security::RemoteCertificateValidationCallback* arg)
		{
			return (return (::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*(*)(::System::Net::Security::RemoteCertificateValidationCallback*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_PUBLICTOMONO_OFFSET))(arg, nullptr);
		}

		::System::Net::Security::LocalCertSelectionCallback* MonoToInternal(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* arg)
		{
			return (return (::System::Net::Security::LocalCertSelectionCallback*(*)(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_PRIVATE_CALLBACKHELPERS_MONOTOINTERNAL_OFFSET))(arg, nullptr);
		}

	};
}

