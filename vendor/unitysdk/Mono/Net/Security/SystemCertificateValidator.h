#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class MonoTlsSettings; }

#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96DABD0)
#define MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_NEEDSCHAIN_OFFSET UNITYSDK_OFFSET(0x96D4580)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int SystemCertificateValidator_TypeDefinitionIndex = 29083;

	class SystemCertificateValidator : public Il2CppObject
	{
	public:
		::System::Boolean is_macosx; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* s_flags; // 0x4

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean NeedsChain(::Mono::Security::Interface::MonoTlsSettings* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Security::Interface::MonoTlsSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_SYSTEMCERTIFICATEVALIDATOR_NEEDSCHAIN_OFFSET))(arg, nullptr);
		}

	};
}

