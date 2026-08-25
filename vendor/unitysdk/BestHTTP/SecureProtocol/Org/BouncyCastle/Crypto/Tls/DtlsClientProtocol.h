#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DtlsRecordLayer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class ProtocolVersion; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsClient; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DtlsTransport; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DatagramTransport; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DigitallySigned; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_ABORTCLIENTHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x602F20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_GENERATECLIENTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x602F80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_REPORTSERVERVERSION_OFFSET UNITYSDK_OFFSET(0x603070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSCERTIFICATESTATUS_OFFSET UNITYSDK_OFFSET(0x6031E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSNEWSESSIONTICKET_OFFSET UNITYSDK_OFFSET(0x6032B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSSERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x603460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSSERVERSUPPLEMENTALDATA_OFFSET UNITYSDK_OFFSET(0x603550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSCERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x603640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_INVALIDATESESSION_OFFSET UNITYSDK_OFFSET(0x6037A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_GENERATECLIENTHELLO_OFFSET UNITYSDK_OFFSET(0x603930)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_CLIENTHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x604030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSSERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x606670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSSERVERHELLO_OFFSET UNITYSDK_OFFSET(0x606890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSHELLOVERIFYREQUEST_OFFSET UNITYSDK_OFFSET(0x607880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x607A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PATCHCLIENTHELLOWITHCOOKIE_OFFSET UNITYSDK_OFFSET(0x605D70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_CONNECT_OFFSET UNITYSDK_OFFSET(0x607B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_GENERATECERTIFICATEVERIFY_OFFSET UNITYSDK_OFFSET(0x608540)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DtlsClientProtocol_TypeDefinitionIndex = 22114;

	class DtlsClientProtocol : public Il2CppObject
	{
	public:
		::System::Void AbortClientHandshake(ClientHandshakeState* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* arg, ::System::Byte arg)
		{
			((::System::Void(*)(ClientHandshakeState*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_ABORTCLIENTHANDSHAKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateClientKeyExchange(ClientHandshakeState* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(ClientHandshakeState*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_GENERATECLIENTKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void ReportServerVersion(ClientHandshakeState* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* arg)
		{
			((::System::Void(*)(ClientHandshakeState*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_REPORTSERVERVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessCertificateStatus(ClientHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(ClientHandshakeState*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSCERTIFICATESTATUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessNewSessionTicket(ClientHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(ClientHandshakeState*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSNEWSESSIONTICKET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessServerKeyExchange(ClientHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(ClientHandshakeState*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSSERVERKEYEXCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessServerSupplementalData(ClientHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(ClientHandshakeState*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSSERVERSUPPLEMENTALDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessCertificateRequest(ClientHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(ClientHandshakeState*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSCERTIFICATEREQUEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvalidateSession(ClientHandshakeState* arg)
		{
			((::System::Void(*)(ClientHandshakeState*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_INVALIDATESESSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateClientHello(ClientHandshakeState* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClient* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(ClientHandshakeState*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClient*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_GENERATECLIENTHELLO_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsTransport* ClientHandshake(ClientHandshakeState* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsTransport*(*)(ClientHandshakeState*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_CLIENTHANDSHAKE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* ProcessServerCertificate(ClientHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*(*)(ClientHandshakeState*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSSERVERCERTIFICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessServerHello(ClientHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(ClientHandshakeState*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSSERVERHELLO_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ProcessHelloVerifyRequest(ClientHandshakeState* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(ClientHandshakeState*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PROCESSHELLOVERIFYREQUEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* PatchClientHelloWithCookie(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_PATCHCLIENTHELLOWITHCOOKIE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsTransport* Connect(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClient* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DatagramTransport* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsTransport*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClient*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DatagramTransport*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_CONNECT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateCertificateVerify(ClientHandshakeState* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DigitallySigned* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(ClientHandshakeState*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DigitallySigned*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSCLIENTPROTOCOL_GENERATECERTIFICATEVERIFY_OFFSET))(arg, arg, nullptr);
		}

	};
}

