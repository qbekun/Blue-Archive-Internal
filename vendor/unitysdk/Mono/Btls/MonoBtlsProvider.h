#pragma once
#include "../../unitysdk.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace Microsoft::Win32::SafeHandles { class SafePasswordHandle; }
namespace Mono::Btls { class MonoBtlsX509VerifyParam; }
namespace Mono::Net::Security { class ChainValidationHelper; }
namespace Mono::Btls { class MonoBtlsX509Chain; }
namespace Mono::Btls { class MonoBtlsX509StoreCtx; }
namespace Mono::Btls { class MonoBtlsX509Error; }
namespace Mono::Btls { class MonoBtlsX509Store; }
namespace Mono::Btls { class MonoBtlsX509; }

#define MONO_BTLS_MONOBTLSPROVIDER_GET_ID_OFFSET UNITYSDK_OFFSET(0x96E2360)
#define MONO_BTLS_MONOBTLSPROVIDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x96E23C0)
#define MONO_BTLS_MONOBTLSPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D9B00)
#define MONO_BTLS_MONOBTLSPROVIDER_GET_SUPPORTSSSLSTREAM_OFFSET UNITYSDK_OFFSET(0x96E23F0)
#define MONO_BTLS_MONOBTLSPROVIDER_GET_SUPPORTSMONOEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x96E2400)
#define MONO_BTLS_MONOBTLSPROVIDER_GET_SUPPORTSCONNECTIONINFO_OFFSET UNITYSDK_OFFSET(0x96E2410)
#define MONO_BTLS_MONOBTLSPROVIDER_GET_SUPPORTSCLEANSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x96E2420)
#define MONO_BTLS_MONOBTLSPROVIDER_GET_SUPPORTEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x96E2430)
#define MONO_BTLS_MONOBTLSPROVIDER_CREATESSLSTREAM_OFFSET UNITYSDK_OFFSET(0x96E2440)
#define MONO_BTLS_MONOBTLSPROVIDER_GETNATIVECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96E24D0)
#define MONO_BTLS_MONOBTLSPROVIDER_GETNATIVECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96E2720)
#define MONO_BTLS_MONOBTLSPROVIDER_GETNATIVECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96E26B0)
#define MONO_BTLS_MONOBTLSPROVIDER_GETVERIFYPARAM_OFFSET UNITYSDK_OFFSET(0x96DF5A0)
#define MONO_BTLS_MONOBTLSPROVIDER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96E2830)
#define MONO_BTLS_MONOBTLSPROVIDER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96E35D0)
#define MONO_BTLS_MONOBTLSPROVIDER_CHECKVALIDATIONRESULT_OFFSET UNITYSDK_OFFSET(0x96E3060)
#define MONO_BTLS_MONOBTLSPROVIDER_MAPVERIFYERRORTOCHAINSTATUS_OFFSET UNITYSDK_OFFSET(0x96E3960)
#define MONO_BTLS_MONOBTLSPROVIDER_SETUPCERTIFICATESTORE_OFFSET UNITYSDK_OFFSET(0x96DF240)
#define MONO_BTLS_MONOBTLSPROVIDER_SETUPDEFAULTCERTIFICATESTORE_OFFSET UNITYSDK_OFFSET(0x96E3B30)
#define MONO_BTLS_MONOBTLSPROVIDER_ADDUSERSTORE_OFFSET UNITYSDK_OFFSET(0x96E3BC0)
#define MONO_BTLS_MONOBTLSPROVIDER_ADDMACHINESTORE_OFFSET UNITYSDK_OFFSET(0x96E3C20)
#define MONO_BTLS_MONOBTLSPROVIDER_ADDTRUSTEDROOTS_OFFSET UNITYSDK_OFFSET(0x96E3AF0)
#define MONO_BTLS_MONOBTLSPROVIDER_CREATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96DF7B0)
#define MONO_BTLS_MONOBTLSPROVIDER_GETMANAGEDCHAIN_OFFSET UNITYSDK_OFFSET(0x96E3540)
#define MONO_BTLS_MONOBTLSPROVIDER_GETBTLSCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96E3C80)
#define MONO_BTLS_MONOBTLSPROVIDER_GETNATIVECHAIN_OFFSET UNITYSDK_OFFSET(0x96E3170)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsProvider_TypeDefinitionIndex = 29108;

	class MonoBtlsProvider : public Il2CppObject
	{
	public:
		::System::Guid* get_ID()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsSslStream()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GET_SUPPORTSSSLSTREAM_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsMonoExtensions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GET_SUPPORTSMONOEXTENSIONS_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsConnectionInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GET_SUPPORTSCONNECTIONINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsCleanShutdown()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GET_SUPPORTSCLEANSHUTDOWN_OFFSET))(nullptr);
		}

		::System::Security::Authentication::SslProtocols* get_SupportedProtocols()
		{
			return (return (::System::Security::Authentication::SslProtocols*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GET_SUPPORTEDPROTOCOLS_OFFSET))(nullptr);
		}

		::Mono::Net::Security::MobileAuthenticatedStream* CreateSslStream(::System::Net::Security::SslStream* arg, ::System::IO::Stream* arg, ::System::Boolean arg, ::Mono::Security::Interface::MonoTlsSettings* arg)
		{
			return (return (::Mono::Net::Security::MobileAuthenticatedStream*(*)(::System::Net::Security::SslStream*, ::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_CREATESSLSTREAM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* GetNativeCertificate(::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GETNATIVECERTIFICATE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* GetNativeCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GETNATIVECERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* GetNativeCertificate(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GETNATIVECERTIFICATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509VerifyParam* GetVerifyParam(::Mono::Security::Interface::MonoTlsSettings* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509VerifyParam*(*)(::Mono::Security::Interface::MonoTlsSettings*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GETVERIFYPARAM_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean ValidateCertificate(::Mono::Net::Security::ChainValidationHelper* arg, ::System::String* str, ::System::Boolean arg, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Boolean arg, ::System::Security::Cryptography::X509Certificates::X509Chain&* arg, ::System::Net::Security::SslPolicyErrors&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Net::Security::ChainValidationHelper*, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Chain&*, ::System::Net::Security::SslPolicyErrors&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_VALIDATECERTIFICATE_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ValidateCertificate(::Mono::Btls::MonoBtlsX509Chain* arg, ::Mono::Btls::MonoBtlsX509VerifyParam* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Btls::MonoBtlsX509Chain*, ::Mono::Btls::MonoBtlsX509VerifyParam*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_VALIDATECERTIFICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckValidationResult(::Mono::Net::Security::ChainValidationHelper* arg, ::System::String* str, ::System::Boolean arg, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Boolean arg, ::System::Security::Cryptography::X509Certificates::X509Chain* arg, ::Mono::Btls::MonoBtlsX509StoreCtx* arg, ::System::Boolean arg, ::System::Net::Security::SslPolicyErrors&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::Mono::Net::Security::ChainValidationHelper*, ::System::String*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Btls::MonoBtlsX509StoreCtx*, ::System::Boolean, ::System::Net::Security::SslPolicyErrors&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_CHECKVALIDATIONRESULT_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* MapVerifyErrorToChainStatus(::Mono::Btls::MonoBtlsX509Error* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*(*)(::Mono::Btls::MonoBtlsX509Error*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_MAPVERIFYERRORTOCHAINSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void SetupCertificateStore(::Mono::Btls::MonoBtlsX509Store* arg, ::Mono::Security::Interface::MonoTlsSettings* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509Store*, ::Mono::Security::Interface::MonoTlsSettings*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_SETUPCERTIFICATESTORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetupDefaultCertificateStore(::Mono::Btls::MonoBtlsX509Store* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_SETUPDEFAULTCERTIFICATESTORE_OFFSET))(arg, nullptr);
		}

		::System::Void AddUserStore(::Mono::Btls::MonoBtlsX509Store* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_ADDUSERSTORE_OFFSET))(arg, nullptr);
		}

		::System::Void AddMachineStore(::Mono::Btls::MonoBtlsX509Store* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_ADDMACHINESTORE_OFFSET))(arg, nullptr);
		}

		::System::Void AddTrustedRoots(::Mono::Btls::MonoBtlsX509Store* arg, ::Mono::Security::Interface::MonoTlsSettings* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509Store*, ::Mono::Security::Interface::MonoTlsSettings*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_ADDTRUSTEDROOTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* CreateCertificate(::Mono::Btls::MonoBtlsX509* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::Mono::Btls::MonoBtlsX509*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_CREATECERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Chain* GetManagedChain(::Mono::Btls::MonoBtlsX509Chain* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Chain*(*)(::Mono::Btls::MonoBtlsX509Chain*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GETMANAGEDCHAIN_OFFSET))(arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509* GetBtlsCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GETBTLSCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509Chain* GetNativeChain(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509Chain*(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPROVIDER_GETNATIVECHAIN_OFFSET))(arg, nullptr);
		}

	};
}

