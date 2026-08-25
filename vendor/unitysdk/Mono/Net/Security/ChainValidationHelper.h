#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace Mono::Net::Security { class MobileTlsProvider; }
namespace Mono::Net::Security { class MonoTlsStream; }
namespace Mono::Net::Security { class ChainValidationHelper; }
namespace Mono::Security::Interface { class MonoTlsSettings&; }
namespace Mono::Security::Interface { class ValidationResult; }

#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET UNITYSDK_OFFSET(0x96D33C0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_CREATE_OFFSET UNITYSDK_OFFSET(0x96D37E0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D34B0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GETVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x96D39C0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_DEFAULTSELECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x96D3B80)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x96D3BC0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_SELECTCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96D3BD0)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96D3C20)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_OFFSET UNITYSDK_OFFSET(0x96D3D50)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_OFFSET UNITYSDK_OFFSET(0x96D3E90)
#define MONO_NET_SECURITY_CHAINVALIDATIONHELPER_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x96D44B0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int ChainValidationHelper_TypeDefinitionIndex = 29066;

	class ChainValidationHelper : public Il2CppObject
	{
	public:
		Il2CppObject* owner; // 0x10
		::Mono::Security::Interface::MonoTlsSettings* settings; // 0x18
		::Mono::Net::Security::MobileTlsProvider* provider; // 0x20
		::System::Net::ServerCertValidationCallback* certValidationCallback; // 0x28
		::System::Net::Security::LocalCertSelectionCallback* certSelectionCallback; // 0x30
		::Mono::Net::Security::MonoTlsStream* tlsStream; // 0x38
		::System::Net::HttpWebRequest* request; // 0x40

		::Mono::Net::Security::ChainValidationHelper* GetInternalValidator(::System::Net::Security::SslStream* arg, ::Mono::Net::Security::MobileTlsProvider* arg, ::Mono::Security::Interface::MonoTlsSettings* arg)
		{
			return (return (::Mono::Net::Security::ChainValidationHelper*(*)(::System::Net::Security::SslStream*, ::Mono::Net::Security::MobileTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Mono::Net::Security::ChainValidationHelper* Create(::Mono::Net::Security::MobileTlsProvider* arg, ::Mono::Security::Interface::MonoTlsSettings&* arg, ::Mono::Net::Security::MonoTlsStream* arg)
		{
			return (return (::Mono::Net::Security::ChainValidationHelper*(*)(::Mono::Net::Security::MobileTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings&*, ::Mono::Net::Security::MonoTlsStream*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Net::Security::SslStream* arg, ::Mono::Net::Security::MobileTlsProvider* arg, ::Mono::Security::Interface::MonoTlsSettings* arg, ::System::Boolean arg, ::Mono::Net::Security::MonoTlsStream* arg)
		{
			((::System::Void(*)(::System::Net::Security::SslStream*, ::Mono::Net::Security::MobileTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*, ::System::Boolean, ::Mono::Net::Security::MonoTlsStream*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Net::ServerCertValidationCallback* GetValidationCallback(::Mono::Security::Interface::MonoTlsSettings* arg)
		{
			return (return (::System::Net::ServerCertValidationCallback*(*)(::Mono::Security::Interface::MonoTlsSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GETVALIDATIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* DefaultSelectionCallback(::System::String* str, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_DEFAULTSELECTIONCALLBACK_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::Mono::Security::Interface::MonoTlsSettings* get_Settings()
		{
			return (return (::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_GET_SETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean SelectClientCertificate(::System::String* str, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::X509Certificates::X509Certificate&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_SELECTCLIENTCERTIFICATE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::Mono::Security::Interface::ValidationResult* ValidateCertificate(::System::String* str, ::System::Boolean arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::System::Security::Cryptography::X509Certificates::X509Chain* arg)
		{
			return (return (::Mono::Security::Interface::ValidationResult*(*)(::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECERTIFICATE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::Mono::Security::Interface::ValidationResult* ValidateChain(::System::String* str, ::System::Boolean arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::System::Security::Cryptography::X509Certificates::X509Chain* arg, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Net::Security::SslPolicyErrors* arg)
		{
			return (return (::Mono::Security::Interface::ValidationResult*(*)(::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Net::Security::SslPolicyErrors*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::Mono::Security::Interface::ValidationResult* ValidateChain(::System::String* str, ::System::Boolean arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::System::Security::Cryptography::X509Certificates::X509Chain&* arg, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Net::Security::SslPolicyErrors* arg)
		{
			return (return (::Mono::Security::Interface::ValidationResult*(*)(::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain&*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Net::Security::SslPolicyErrors*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_VALIDATECHAIN_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean InvokeCallback(::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::System::Security::Cryptography::X509Certificates::X509Chain* arg, ::System::Net::Security::SslPolicyErrors* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_CHAINVALIDATIONHELPER_INVOKECALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

