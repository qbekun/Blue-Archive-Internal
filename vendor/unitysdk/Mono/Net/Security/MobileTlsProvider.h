#pragma once
#include "../../../unitysdk.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace Mono::Net::Security { class ChainValidationHelper; }

#define MONO_NET_SECURITY_MOBILETLSPROVIDER_CREATESSLSTREAM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSPROVIDER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D0410)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileTlsProvider_TypeDefinitionIndex = 29076;

	class MobileTlsProvider : public Il2CppObject
	{
	public:
		::Mono::Net::Security::MobileAuthenticatedStream* CreateSslStream(::System::Net::Security::SslStream* arg, ::System::IO::Stream* arg, ::System::Boolean arg, ::Mono::Security::Interface::MonoTlsSettings* arg)
		{
			return (return (::Mono::Net::Security::MobileAuthenticatedStream*(*)(::System::Net::Security::SslStream*, ::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSPROVIDER_CREATESSLSTREAM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ValidateCertificate(::Mono::Net::Security::ChainValidationHelper* arg, ::System::String* str, ::System::Boolean arg, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Boolean arg, ::System::Security::Cryptography::X509Certificates::X509Chain&* arg, ::System::Net::Security::SslPolicyErrors&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Net::Security::ChainValidationHelper*, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Chain&*, ::System::Net::Security::SslPolicyErrors&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSPROVIDER_VALIDATECERTIFICATE_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSPROVIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

