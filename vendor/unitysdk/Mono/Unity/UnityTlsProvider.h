#pragma once
#include "../../unitysdk.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace Mono::Net::Security { class ChainValidationHelper; }

#define MONO_UNITY_UNITYTLSPROVIDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x96CF5D0)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_ID_OFFSET UNITYSDK_OFFSET(0x96CF600)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSSSLSTREAM_OFFSET UNITYSDK_OFFSET(0x96CF660)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSMONOEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x96CF670)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSCONNECTIONINFO_OFFSET UNITYSDK_OFFSET(0x96CF680)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSCLEANSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x96CF690)
#define MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x96CF6A0)
#define MONO_UNITY_UNITYTLSPROVIDER_CREATESSLSTREAM_OFFSET UNITYSDK_OFFSET(0x96CF6B0)
#define MONO_UNITY_UNITYTLSPROVIDER_X509VERIFY_CALLBACK_OFFSET UNITYSDK_OFFSET(0x96CF570)
#define MONO_UNITY_UNITYTLSPROVIDER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96CF800)
#define MONO_UNITY_UNITYTLSPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D0400)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsProvider_TypeDefinitionIndex = 29050;

	class UnityTlsProvider : public Il2CppObject
	{
	public:
		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Guid* get_ID()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsSslStream()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSSSLSTREAM_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsMonoExtensions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSMONOEXTENSIONS_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsConnectionInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSCONNECTIONINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsCleanShutdown()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTSCLEANSHUTDOWN_OFFSET))(nullptr);
		}

		::System::Security::Authentication::SslProtocols* get_SupportedProtocols()
		{
			return (return (::System::Security::Authentication::SslProtocols*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_GET_SUPPORTEDPROTOCOLS_OFFSET))(nullptr);
		}

		::Mono::Net::Security::MobileAuthenticatedStream* CreateSslStream(::System::Net::Security::SslStream* arg, ::System::IO::Stream* arg, ::System::Boolean arg, ::Mono::Security::Interface::MonoTlsSettings* arg)
		{
			return (return (::Mono::Net::Security::MobileAuthenticatedStream*(*)(::System::Net::Security::SslStream*, ::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_CREATESSLSTREAM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		unitytls_x509verify_result* x509verify_callback(::System::Object** arg, unitytls_x509_ref* arg, unitytls_x509verify_result* arg, ::System::Object** arg)
		{
			return (return (unitytls_x509verify_result*(*)(::System::Object**, unitytls_x509_ref*, unitytls_x509verify_result*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_X509VERIFY_CALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ValidateCertificate(::Mono::Net::Security::ChainValidationHelper* arg, ::System::String* str, ::System::Boolean arg, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Boolean arg, ::System::Security::Cryptography::X509Certificates::X509Chain&* arg, ::System::Net::Security::SslPolicyErrors&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Net::Security::ChainValidationHelper*, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Chain&*, ::System::Net::Security::SslPolicyErrors&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_VALIDATECERTIFICATE_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSPROVIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

