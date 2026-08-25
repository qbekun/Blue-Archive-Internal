#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DtlsRecordLayer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DtlsTransport; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsServer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DatagramTransport; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class NewSessionTicket; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsHandshakeHash; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_SET_VERIFYREQUESTS_OFFSET UNITYSDK_OFFSET(0x60C9D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_PROCESSCLIENTSUPPLEMENTALDATA_OFFSET UNITYSDK_OFFSET(0x60C9E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_NOTIFYCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x60CAD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_ABORTSERVERHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x60CDD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_ACCEPT_OFFSET UNITYSDK_OFFSET(0x60CE30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_GET_VERIFYREQUESTS_OFFSET UNITYSDK_OFFSET(0x60D4F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_GENERATENEWSESSIONTICKET_OFFSET UNITYSDK_OFFSET(0x60D500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_EXPECTCERTIFICATEVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x60D590)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_PROCESSCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x60D600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_PROCESSCLIENTHELLO_OFFSET UNITYSDK_OFFSET(0x60D6C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_GENERATESERVERHELLO_OFFSET UNITYSDK_OFFSET(0x60DE20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_INVALIDATESESSION_OFFSET UNITYSDK_OFFSET(0x60E610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_GENERATECERTIFICATESTATUS_OFFSET UNITYSDK_OFFSET(0x60E740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_SERVERHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x60E7D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_PROCESSCLIENTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x60F700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x60F7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_GENERATECERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x60F800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_PROCESSCERTIFICATEVERIFY_OFFSET UNITYSDK_OFFSET(0x60F890)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DtlsServerProtocol_TypeDefinitionIndex = 22127;

	class DtlsServerProtocol : public Il2CppObject
	{
	public:
		::System::Boolean mVerifyRequests; // 0x18

		::System::Void set_VerifyRequests(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_SET_VERIFYREQUESTS_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessClientSupplementalData(ServerHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(ServerHandshakeState*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_PROCESSCLIENTSUPPLEMENTALDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NotifyClientCertificate(ServerHandshakeState* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg)
		{
			((::System::Void(*)(ServerHandshakeState*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_NOTIFYCLIENTCERTIFICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AbortServerHandshake(ServerHandshakeState* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* arg, ::System::Byte arg)
		{
			((::System::Void(*)(ServerHandshakeState*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_ABORTSERVERHANDSHAKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsTransport* Accept(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServer* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DatagramTransport* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsTransport*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServer*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DatagramTransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_ACCEPT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_VerifyRequests()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_GET_VERIFYREQUESTS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateNewSessionTicket(ServerHandshakeState* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(ServerHandshakeState*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_GENERATENEWSESSIONTICKET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ExpectCertificateVerifyMessage(ServerHandshakeState* arg)
		{
			return (return (::System::Boolean(*)(ServerHandshakeState*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_EXPECTCERTIFICATEVERIFYMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessClientCertificate(ServerHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(ServerHandshakeState*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_PROCESSCLIENTCERTIFICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessClientHello(ServerHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(ServerHandshakeState*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_PROCESSCLIENTHELLO_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateServerHello(ServerHandshakeState* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(ServerHandshakeState*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_GENERATESERVERHELLO_OFFSET))(arg, nullptr);
		}

		::System::Void InvalidateSession(ServerHandshakeState* arg)
		{
			((::System::Void(*)(ServerHandshakeState*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_INVALIDATESESSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateCertificateStatus(ServerHandshakeState* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(ServerHandshakeState*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_GENERATECERTIFICATESTATUS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsTransport* ServerHandshake(ServerHandshakeState* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsTransport*(*)(ServerHandshakeState*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_SERVERHANDSHAKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessClientKeyExchange(ServerHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(ServerHandshakeState*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_PROCESSCLIENTKEYEXCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateCertificateRequest(ServerHandshakeState* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(ServerHandshakeState*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_GENERATECERTIFICATEREQUEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessCertificateVerify(ServerHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* arg)
		{
			((::System::Void(*)(ServerHandshakeState*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSSERVERPROTOCOL_PROCESSCERTIFICATEVERIFY_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

