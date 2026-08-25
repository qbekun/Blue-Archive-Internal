#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsServer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsServerContextImpl; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsKeyExchange; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCredentials; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsHandshakeHash; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class AbstractTlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsPeer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class NewSessionTicket; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x636E30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x636E50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x636E70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_ACCEPT_OFFSET UNITYSDK_OFFSET(0x636E80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_CLEANUPHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x637220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x6372A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_GET_CONTEXTADMIN_OFFSET UNITYSDK_OFFSET(0x6372B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_GET_PEER_OFFSET UNITYSDK_OFFSET(0x6372C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_HANDLEHANDSHAKEMESSAGE_OFFSET UNITYSDK_OFFSET(0x6372D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_HANDLEALERTWARNINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x6380E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_NOTIFYCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x638250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_RECEIVECERTIFICATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x638560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_RECEIVECERTIFICATEVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x6385E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_RECEIVECLIENTHELLOMESSAGE_OFFSET UNITYSDK_OFFSET(0x638B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_RECEIVECLIENTKEYEXCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x639360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_SENDCERTIFICATEREQUESTMESSAGE_OFFSET UNITYSDK_OFFSET(0x639670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_SENDCERTIFICATESTATUSMESSAGE_OFFSET UNITYSDK_OFFSET(0x639740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_SENDNEWSESSIONTICKETMESSAGE_OFFSET UNITYSDK_OFFSET(0x639810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_SENDSERVERHELLOMESSAGE_OFFSET UNITYSDK_OFFSET(0x639930)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_SENDSERVERHELLODONEMESSAGE_OFFSET UNITYSDK_OFFSET(0x63A460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_SENDSERVERKEYEXCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x63A520)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_EXPECTCERTIFICATEVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x63A610)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsServerProtocol_TypeDefinitionIndex = 22229;

	class TlsServerProtocol : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServer* mTlsServer; // 0xB0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* mTlsServerContext; // 0xB8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* mKeyExchange; // 0xC0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* mServerCredentials; // 0xC8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* mCertificateRequest; // 0xD0
		::System::Int16 mClientCertificateType; // 0xD8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* mPrepareFinishHash; // 0xE0

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::IO::Stream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::IO::Stream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Accept(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServer* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServer*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Void CleanupHandshake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_CLEANUPHANDSHAKE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* get_Context()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_GET_CONTEXT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* get_ContextAdmin()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_GET_CONTEXTADMIN_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPeer* get_Peer()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPeer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_GET_PEER_OFFSET))(nullptr);
		}

		::System::Void HandleHandshakeMessage(::System::Byte arg, ::System::IO::MemoryStream* arg)
		{
			((::System::Void(*)(::System::Byte, ::System::IO::MemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_HANDLEHANDSHAKEMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandleAlertWarningMessage(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_HANDLEALERTWARNINGMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void NotifyClientCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_NOTIFYCLIENTCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void ReceiveCertificateMessage(::System::IO::MemoryStream* arg)
		{
			((::System::Void(*)(::System::IO::MemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_RECEIVECERTIFICATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ReceiveCertificateVerifyMessage(::System::IO::MemoryStream* arg)
		{
			((::System::Void(*)(::System::IO::MemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_RECEIVECERTIFICATEVERIFYMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ReceiveClientHelloMessage(::System::IO::MemoryStream* arg)
		{
			((::System::Void(*)(::System::IO::MemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_RECEIVECLIENTHELLOMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ReceiveClientKeyExchangeMessage(::System::IO::MemoryStream* arg)
		{
			((::System::Void(*)(::System::IO::MemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_RECEIVECLIENTKEYEXCHANGEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SendCertificateRequestMessage(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_SENDCERTIFICATEREQUESTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SendCertificateStatusMessage(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_SENDCERTIFICATESTATUSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SendNewSessionTicketMessage(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_SENDNEWSESSIONTICKETMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SendServerHelloMessage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_SENDSERVERHELLOMESSAGE_OFFSET))(nullptr);
		}

		::System::Void SendServerHelloDoneMessage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_SENDSERVERHELLODONEMESSAGE_OFFSET))(nullptr);
		}

		::System::Void SendServerKeyExchangeMessage(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_SENDSERVERKEYEXCHANGEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ExpectCertificateVerifyMessage()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSERVERPROTOCOL_EXPECTCERTIFICATEVERIFYMESSAGE_OFFSET))(nullptr);
		}

	};
}

