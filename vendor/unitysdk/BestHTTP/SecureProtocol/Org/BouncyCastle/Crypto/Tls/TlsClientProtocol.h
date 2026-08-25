#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsClient; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsClientContextImpl; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsKeyExchange; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsAuthentication; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class AbstractTlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsPeer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DigitallySigned; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x61B850)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x61B890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x61BA00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_CONNECT_OFFSET UNITYSDK_OFFSET(0x61BC00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_CLEANUPHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x61C430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x61C7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_GET_CONTEXTADMIN_OFFSET UNITYSDK_OFFSET(0x61C800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_GET_PEER_OFFSET UNITYSDK_OFFSET(0x61C810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_HANDLEHANDSHAKEMESSAGE_OFFSET UNITYSDK_OFFSET(0x61C820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_HANDLESUPPLEMENTALDATA_OFFSET UNITYSDK_OFFSET(0x61E4F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_RECEIVENEWSESSIONTICKETMESSAGE_OFFSET UNITYSDK_OFFSET(0x61E860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_RECEIVESERVERHELLOMESSAGE_OFFSET UNITYSDK_OFFSET(0x61EAC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_SENDCERTIFICATEVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x620960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_SENDCLIENTHELLOMESSAGE_OFFSET UNITYSDK_OFFSET(0x620D50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_SENDCLIENTKEYEXCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x6219D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsClientProtocol_TypeDefinitionIndex = 22188;

	class TlsClientProtocol : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClient* mTlsClient; // 0xB0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* mTlsClientContext; // 0xB8
		::Il2CppArray<::System::Object*>* mSelectedSessionID; // 0xC0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* mKeyExchange; // 0xC8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* mAuthentication; // 0xD0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* mCertificateRequest; // 0xD8

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::IO::Stream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::IO::Stream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Connect(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClient* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClient*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_CONNECT_OFFSET))(arg, nullptr);
		}

		::System::Void CleanupHandshake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_CLEANUPHANDSHAKE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* get_Context()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_GET_CONTEXT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* get_ContextAdmin()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_GET_CONTEXTADMIN_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPeer* get_Peer()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPeer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_GET_PEER_OFFSET))(nullptr);
		}

		::System::Void HandleHandshakeMessage(::System::Byte arg, ::System::IO::MemoryStream* arg)
		{
			((::System::Void(*)(::System::Byte, ::System::IO::MemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_HANDLEHANDSHAKEMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandleSupplementalData(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_HANDLESUPPLEMENTALDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ReceiveNewSessionTicketMessage(::System::IO::MemoryStream* arg)
		{
			((::System::Void(*)(::System::IO::MemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_RECEIVENEWSESSIONTICKETMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ReceiveServerHelloMessage(::System::IO::MemoryStream* arg)
		{
			((::System::Void(*)(::System::IO::MemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_RECEIVESERVERHELLOMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SendCertificateVerifyMessage(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DigitallySigned* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DigitallySigned*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_SENDCERTIFICATEVERIFYMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SendClientHelloMessage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_SENDCLIENTHELLOMESSAGE_OFFSET))(nullptr);
		}

		::System::Void SendClientKeyExchangeMessage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTPROTOCOL_SENDCLIENTKEYEXCHANGEMESSAGE_OFFSET))(nullptr);
		}

	};
}

