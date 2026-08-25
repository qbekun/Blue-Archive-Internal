#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class X509CertificateImplBtls; }
namespace Mono::Btls { class MonoBtlsSslCtx; }
namespace Mono::Btls { class MonoBtlsSsl; }
namespace Mono::Btls { class MonoBtlsBio; }
namespace Mono::Security::Interface { class MonoTlsConnectionInfo; }
namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Net::Security { class MonoSslAuthenticationOptions; }
namespace Mono::Btls { class MonoBtlsX509StoreCtx; }
namespace Mono::Btls { class MonoBtlsSslError; }
namespace Mono::Security::Interface { class TlsProtocols; }
namespace Mono::Security::Interface { class TlsProtocolCode; }

#define MONO_BTLS_MONOBTLSCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DD1B0)
#define MONO_BTLS_MONOBTLSCONTEXT_GETPRIVATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96DD1F0)
#define MONO_BTLS_MONOBTLSCONTEXT_VERIFYCALLBACK_OFFSET UNITYSDK_OFFSET(0x96DD480)
#define MONO_BTLS_MONOBTLSCONTEXT_SELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x96DD810)
#define MONO_BTLS_MONOBTLSCONTEXT_SERVERNAMECALLBACK_OFFSET UNITYSDK_OFFSET(0x96DDD70)
#define MONO_BTLS_MONOBTLSCONTEXT_STARTHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x96DDDD0)
#define MONO_BTLS_MONOBTLSCONTEXT_SETPRIVATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96DDA50)
#define MONO_BTLS_MONOBTLSCONTEXT_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x96DE300)
#define MONO_BTLS_MONOBTLSCONTEXT_PROCESSHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x96DEB80)
#define MONO_BTLS_MONOBTLSCONTEXT_DOPROCESSHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x96DEDA0)
#define MONO_BTLS_MONOBTLSCONTEXT_FINISHHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x96DF040)
#define MONO_BTLS_MONOBTLSCONTEXT_INITIALIZECONNECTION_OFFSET UNITYSDK_OFFSET(0x96DDF20)
#define MONO_BTLS_MONOBTLSCONTEXT_GETPEERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96DD8D0)
#define MONO_BTLS_MONOBTLSCONTEXT_INITIALIZESESSION_OFFSET UNITYSDK_OFFSET(0x96DF060)
#define MONO_BTLS_MONOBTLSCONTEXT_GETPROTOCOL_OFFSET UNITYSDK_OFFSET(0x96DF970)
#define MONO_BTLS_MONOBTLSCONTEXT_FLUSH_OFFSET UNITYSDK_OFFSET(0x96DF9E0)
#define MONO_BTLS_MONOBTLSCONTEXT_READ_OFFSET UNITYSDK_OFFSET(0x96DFA30)
#define MONO_BTLS_MONOBTLSCONTEXT_WRITE_OFFSET UNITYSDK_OFFSET(0x96DFD60)
#define MONO_BTLS_MONOBTLSCONTEXT_RENEGOTIATE_OFFSET UNITYSDK_OFFSET(0x96E0070)
#define MONO_BTLS_MONOBTLSCONTEXT_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x96E00C0)
#define MONO_BTLS_MONOBTLSCONTEXT_PENDINGRENEGOTIATION_OFFSET UNITYSDK_OFFSET(0x96E0120)
#define MONO_BTLS_MONOBTLSCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_BTLS_MONOBTLSCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96E0150)
#define MONO_BTLS_MONOBTLSCONTEXT_MONO.BTLS.IMONOBTLSBIOMONO.READ_OFFSET UNITYSDK_OFFSET(0x96E02C0)
#define MONO_BTLS_MONOBTLSCONTEXT_MONO.BTLS.IMONOBTLSBIOMONO.WRITE_OFFSET UNITYSDK_OFFSET(0x96E02F0)
#define MONO_BTLS_MONOBTLSCONTEXT_MONO.BTLS.IMONOBTLSBIOMONO.FLUSH_OFFSET UNITYSDK_OFFSET(0x96E0310)
#define MONO_BTLS_MONOBTLSCONTEXT_MONO.BTLS.IMONOBTLSBIOMONO.CLOSE_OFFSET UNITYSDK_OFFSET(0x96E0320)
#define MONO_BTLS_MONOBTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x96E0330)
#define MONO_BTLS_MONOBTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96E0340)
#define MONO_BTLS_MONOBTLSCONTEXT_GET_REMOTECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96E0350)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsContext_TypeDefinitionIndex = 29099;

	class MonoBtlsContext : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509Certificate2* remoteCertificate; // 0x58
		::System::Security::Cryptography::X509Certificates::X509Certificate* clientCertificate; // 0x60
		::Mono::Btls::X509CertificateImplBtls* nativeServerCertificate; // 0x68
		::Mono::Btls::X509CertificateImplBtls* nativeClientCertificate; // 0x70
		::Mono::Btls::MonoBtlsSslCtx* ctx; // 0x78
		::Mono::Btls::MonoBtlsSsl* ssl; // 0x80
		::Mono::Btls::MonoBtlsBio* bio; // 0x88
		::Mono::Btls::MonoBtlsBio* errbio; // 0x90
		::Mono::Security::Interface::MonoTlsConnectionInfo* connectionInfo; // 0x98
		::System::Boolean certificateValidated; // 0xA0
		::System::Boolean isAuthenticated; // 0xA1
		::System::Boolean connected; // 0xA2

		::System::Void .ctor(::Mono::Net::Security::MobileAuthenticatedStream* arg, ::Mono::Net::Security::MonoSslAuthenticationOptions* arg)
		{
			((::System::Void(*)(::Mono::Net::Security::MobileAuthenticatedStream*, ::Mono::Net::Security::MonoSslAuthenticationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Btls::X509CertificateImplBtls* GetPrivateCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* arg)
		{
			return (return (::Mono::Btls::X509CertificateImplBtls*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_GETPRIVATECERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 VerifyCallback(::Mono::Btls::MonoBtlsX509StoreCtx* arg)
		{
			return (return (::System::Int32(*)(::Mono::Btls::MonoBtlsX509StoreCtx*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_VERIFYCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Int32 SelectCallback(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_SELECTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Int32 ServerNameCallback()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_SERVERNAMECALLBACK_OFFSET))(nullptr);
		}

		::System::Void StartHandshake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_STARTHANDSHAKE_OFFSET))(nullptr);
		}

		::System::Void SetPrivateCertificate(::Mono::Btls::X509CertificateImplBtls* arg)
		{
			((::System::Void(*)(::Mono::Btls::X509CertificateImplBtls*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_SETPRIVATECERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Exception* GetException(::Mono::Btls::MonoBtlsSslError* arg)
		{
			return (return (::System::Exception*(*)(::Mono::Btls::MonoBtlsSslError*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_GETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean ProcessHandshake()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_PROCESSHANDSHAKE_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsSslError* DoProcessHandshake()
		{
			return (return (::Mono::Btls::MonoBtlsSslError*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_DOPROCESSHANDSHAKE_OFFSET))(nullptr);
		}

		::System::Void FinishHandshake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_FINISHHANDSHAKE_OFFSET))(nullptr);
		}

		::System::Void InitializeConnection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_INITIALIZECONNECTION_OFFSET))(nullptr);
		}

		::System::Void GetPeerCertificate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_GETPEERCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Void InitializeSession()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_INITIALIZESESSION_OFFSET))(nullptr);
		}

		::Mono::Security::Interface::TlsProtocols* GetProtocol(::Mono::Security::Interface::TlsProtocolCode* arg)
		{
			return (return (::Mono::Security::Interface::TlsProtocols*(*)(::Mono::Security::Interface::TlsProtocolCode*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_GETPROTOCOL_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_FLUSH_OFFSET))(nullptr);
		}

		Il2CppObject* Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Renegotiate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_RENEGOTIATE_OFFSET))(nullptr);
		}

		::System::Void Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Boolean PendingRenegotiation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_PENDINGRENEGOTIATION_OFFSET))(nullptr);
		}

		::System::Void Dispose(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Mono.Btls.IMonoBtlsBioMono.Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, bool&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_MONO.BTLS.IMONOBTLSBIOMONO.READ_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Mono.Btls.IMonoBtlsBioMono.Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_MONO.BTLS.IMONOBTLSBIOMONO.WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Mono.Btls.IMonoBtlsBioMono.Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_MONO.BTLS.IMONOBTLSBIOMONO.FLUSH_OFFSET))(nullptr);
		}

		::System::Void Mono.Btls.IMonoBtlsBioMono.Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_MONO.BTLS.IMONOBTLSBIOMONO.CLOSE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* get_RemoteCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSCONTEXT_GET_REMOTECERTIFICATE_OFFSET))(nullptr);
		}

	};
}

