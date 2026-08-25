#pragma once
#include "../../../unitysdk.h"

namespace Mono::Net::Security { class ChainValidationHelper; }
namespace Mono::Net::Security { class MonoSslAuthenticationOptions; }
namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Security::Interface { class MonoTlsSettings; }

#define MONO_NET_SECURITY_MOBILETLSCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CCC10)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x96D80D0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x96D80E0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x96CD770)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x96D80F0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x96D8100)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_SERVERNAME_OFFSET UNITYSDK_OFFSET(0x96D8110)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ASKFORCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96D8120)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ENABLEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x96D8130)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x96D8140)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GETPROTOCOLVERSIONS_OFFSET UNITYSDK_OFFSET(0x96D8150)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_STARTHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_PROCESSHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_FINISHHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_LOCALSERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96D8280)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_SET_LOCALSERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96D8290)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_REMOTECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_FLUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_READ_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_WRITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_PENDINGRENEGOTIATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96CDC40)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_SELECTSERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96D82A0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_SELECTCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96CEEB0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_RENEGOTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96D5BE0)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96D8560)
#define MONO_NET_SECURITY_MOBILETLSCONTEXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x96D8570)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileTlsContext_TypeDefinitionIndex = 29075;

	class MobileTlsContext : public Il2CppObject
	{
	public:
		::Mono::Net::Security::ChainValidationHelper* certificateValidator; // 0x10
		::Mono::Net::Security::MonoSslAuthenticationOptions* _Options_k__BackingField; // 0x18
		::Mono::Net::Security::MobileAuthenticatedStream* _Parent_k__BackingField; // 0x20
		::System::Boolean _IsServer_k__BackingField; // 0x28
		::System::String* _TargetHost_k__BackingField; // 0x30
		::System::String* _ServerName_k__BackingField; // 0x38
		::System::Boolean _AskForClientCertificate_k__BackingField; // 0x40
		::System::Security::Authentication::SslProtocols* _EnabledProtocols_k__BackingField; // 0x44
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _ClientCertificates_k__BackingField; // 0x48
		::System::Security::Cryptography::X509Certificates::X509Certificate* _LocalServerCertificate_k__BackingField; // 0x50

		::System::Void .ctor(::Mono::Net::Security::MobileAuthenticatedStream* arg, ::Mono::Net::Security::MonoSslAuthenticationOptions* arg)
		{
			((::System::Void(*)(::Mono::Net::Security::MobileAuthenticatedStream*, ::Mono::Net::Security::MonoSslAuthenticationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Net::Security::MonoSslAuthenticationOptions* get_Options()
		{
			return (return (::Mono::Net::Security::MonoSslAuthenticationOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_OPTIONS_OFFSET))(nullptr);
		}

		::Mono::Net::Security::MobileAuthenticatedStream* get_Parent()
		{
			return (return (::Mono::Net::Security::MobileAuthenticatedStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_PARENT_OFFSET))(nullptr);
		}

		::Mono::Security::Interface::MonoTlsSettings* get_Settings()
		{
			return (return (::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_SETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ISAUTHENTICATED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsServer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ISSERVER_OFFSET))(nullptr);
		}

		::System::String* get_TargetHost()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_TARGETHOST_OFFSET))(nullptr);
		}

		::System::String* get_ServerName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_SERVERNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_AskForClientCertificate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ASKFORCLIENTCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Security::Authentication::SslProtocols* get_EnabledProtocols()
		{
			return (return (::System::Security::Authentication::SslProtocols*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_ENABLEDPROTOCOLS_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_CLIENTCERTIFICATES_OFFSET))(nullptr);
		}

		::System::Void GetProtocolVersions(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GETPROTOCOLVERSIONS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartHandshake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_STARTHANDSHAKE_OFFSET))(nullptr);
		}

		::System::Boolean ProcessHandshake()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_PROCESSHANDSHAKE_OFFSET))(nullptr);
		}

		::System::Void FinishHandshake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_FINISHHANDSHAKE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalServerCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_LOCALSERVERCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Void set_LocalServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_SET_LOCALSERVERCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* get_RemoteCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_GET_REMOTECERTIFICATE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_FLUSH_OFFSET))(nullptr);
		}

		Il2CppObject* Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Boolean PendingRenegotiation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_PENDINGRENEGOTIATION_OFFSET))(nullptr);
		}

		::System::Boolean ValidateCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg, ::System::Security::Cryptography::X509Certificates::X509Chain* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_VALIDATECERTIFICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* SelectServerCertificate(::System::String* str)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_SELECTSERVERCERTIFICATE_OFFSET))(str, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* SelectClientCertificate(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_SELECTCLIENTCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void Renegotiate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_RENEGOTIATE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILETLSCONTEXT_FINALIZE_OFFSET))(nullptr);
		}

	};
}

