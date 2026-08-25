#pragma once
#include "../../unitysdk.h"

namespace Mono::Security::Interface { class MonoTlsConnectionInfo; }
namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Net::Security { class MonoSslAuthenticationOptions; }

#define MONO_UNITY_UNITYTLSCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CC300)
#define MONO_UNITY_UNITYTLSCONTEXT_EXTRACTNATIVEKEYANDCHAINFROMMANAGEDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96CCE30)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x96CD1D0)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96CD1E0)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_REMOTECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96CD1F0)
#define MONO_UNITY_UNITYTLSCONTEXT_FLUSH_OFFSET UNITYSDK_OFFSET(0x96CD200)
#define MONO_UNITY_UNITYTLSCONTEXT_READ_OFFSET UNITYSDK_OFFSET(0x96CD210)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITE_OFFSET UNITYSDK_OFFSET(0x96CD400)
#define MONO_UNITY_UNITYTLSCONTEXT_RENEGOTIATE_OFFSET UNITYSDK_OFFSET(0x96CD5F0)
#define MONO_UNITY_UNITYTLSCONTEXT_PENDINGRENEGOTIATION_OFFSET UNITYSDK_OFFSET(0x96CD640)
#define MONO_UNITY_UNITYTLSCONTEXT_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x96CD650)
#define MONO_UNITY_UNITYTLSCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96CD790)
#define MONO_UNITY_UNITYTLSCONTEXT_STARTHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x96CD8C0)
#define MONO_UNITY_UNITYTLSCONTEXT_PROCESSHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x96CDA60)
#define MONO_UNITY_UNITYTLSCONTEXT_FINISHHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x96CDC90)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x96CC000)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x96CDE00)
#define MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_OFFSET UNITYSDK_OFFSET(0x96CC0C0)
#define MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_OFFSET UNITYSDK_OFFSET(0x96CE240)
#define MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_OFFSET UNITYSDK_OFFSET(0x96CC180)
#define MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_OFFSET UNITYSDK_OFFSET(0x96CE660)
#define MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_OFFSET UNITYSDK_OFFSET(0x96CC230)
#define MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_OFFSET UNITYSDK_OFFSET(0x96CEB80)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsContext_TypeDefinitionIndex = 29048;

	class UnityTlsContext : public Il2CppObject
	{
	public:
		::System::Object** tlsContext; // 0x58
		::System::Object** requestedClientCertChain; // 0x60
		::System::Object** requestedClientKey; // 0x68
		unitytls_tlsctx_read_callback* readCallback; // 0x70
		unitytls_tlsctx_write_callback* writeCallback; // 0x78
		unitytls_tlsctx_certificate_callback* certificateCallback; // 0x80
		unitytls_tlsctx_x509verify_callback* verifyCallback; // 0x88
		::System::Security::Cryptography::X509Certificates::X509Certificate* localClientCertificate; // 0x90
		::System::Security::Cryptography::X509Certificates::X509Certificate2* remoteCertificate; // 0x98
		::Mono::Security::Interface::MonoTlsConnectionInfo* connectioninfo; // 0xA0
		::System::Boolean isAuthenticated; // 0xA8
		::System::Boolean hasContext; // 0xA9
		::System::Boolean closedGraceful; // 0xAA
		::Il2CppArray<::System::Object*>* writeBuffer; // 0xB0
		::Il2CppArray<::System::Object*>* readBuffer; // 0xB8
		::System::Runtime::InteropServices::GCHandle* handle; // 0xC0
		::System::Exception* lastException; // 0xC8

		::System::Void .ctor(::Mono::Net::Security::MobileAuthenticatedStream* arg, ::Mono::Net::Security::MonoSslAuthenticationOptions* arg)
		{
			((::System::Void(*)(::Mono::Net::Security::MobileAuthenticatedStream*, ::Mono::Net::Security::MonoSslAuthenticationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExtractNativeKeyAndChainFromManagedCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::System::Object** arg, ::System::Object*&* arg, ::System::Object*&* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Object**, ::System::Object*&*, ::System::Object*&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_EXTRACTNATIVEKEYANDCHAINFROMMANAGEDCERTIFICATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* get_RemoteCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_REMOTECERTIFICATE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_FLUSH_OFFSET))(nullptr);
		}

		Il2CppObject* Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Renegotiate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_RENEGOTIATE_OFFSET))(nullptr);
		}

		::System::Boolean PendingRenegotiation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_PENDINGRENEGOTIATION_OFFSET))(nullptr);
		}

		::System::Void Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void StartHandshake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_STARTHANDSHAKE_OFFSET))(nullptr);
		}

		::System::Boolean ProcessHandshake()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_PROCESSHANDSHAKE_OFFSET))(nullptr);
		}

		::System::Void FinishHandshake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_FINISHHANDSHAKE_OFFSET))(nullptr);
		}

		::System::Int32 WriteCallback(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 WriteCallback(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadCallback(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ReadCallback(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		unitytls_x509verify_result* VerifyCallback(::System::Object** arg, unitytls_x509list_ref* arg, ::System::Object** arg)
		{
			return (return (unitytls_x509verify_result*(*)(::System::Object**, unitytls_x509list_ref*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		unitytls_x509verify_result* VerifyCallback(unitytls_x509list_ref* arg, ::System::Object** arg)
		{
			return (return (unitytls_x509verify_result*(*)(unitytls_x509list_ref*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CertificateCallback(::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CertificateCallback(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

