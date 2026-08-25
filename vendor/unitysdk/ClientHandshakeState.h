#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsClient; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsClientContextImpl; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSession; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SessionParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsKeyExchange; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsAuthentication; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCredentials; }

#define CLIENTHANDSHAKESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x608350)

	inline static constexpr unsigned int ClientHandshakeState_TypeDefinitionIndex = 22113;

	class ClientHandshakeState : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClient* client; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* clientContext; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSession* tlsSession; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters; // 0x28
		Builder* sessionParametersBuilder; // 0x30
		::Il2CppArray<::System::Object*>* offeredCipherSuites; // 0x38
		::System::Collections::IDictionary* clientExtensions; // 0x40
		::System::Collections::IDictionary* serverExtensions; // 0x48
		::Il2CppArray<::System::Object*>* selectedSessionID; // 0x50
		::System::Boolean resumedSession; // 0x58
		::System::Boolean secure_renegotiation; // 0x59
		::System::Boolean allowCertificateStatus; // 0x5A
		::System::Boolean expectSessionTicket; // 0x5B
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* keyExchange; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* authentication; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus* certificateStatus; // 0x70
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest; // 0x78
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTHANDSHAKESTATE_.CTOR_OFFSET))(nullptr);
		}

	};

