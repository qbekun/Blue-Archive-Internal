#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsServer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsServerContextImpl; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSession; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SessionParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsKeyExchange; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCredentials; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }

#define SERVERHANDSHAKESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x60D4E0)

	inline static constexpr unsigned int ServerHandshakeState_TypeDefinitionIndex = 22126;

	class ServerHandshakeState : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServer* server; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* serverContext; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSession* tlsSession; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters; // 0x28
		Builder* sessionParametersBuilder; // 0x30
		::Il2CppArray<::System::Object*>* offeredCipherSuites; // 0x38
		::Il2CppArray<::System::Object*>* offeredCompressionMethods; // 0x40
		::System::Collections::IDictionary* clientExtensions; // 0x48
		::System::Collections::IDictionary* serverExtensions; // 0x50
		::System::Boolean resumedSession; // 0x58
		::System::Boolean secure_renegotiation; // 0x59
		::System::Boolean allowCertificateStatus; // 0x5A
		::System::Boolean expectSessionTicket; // 0x5B
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* keyExchange; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest; // 0x70
		::System::Int16 clientCertificateType; // 0x78
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERHANDSHAKESTATE_.CTOR_OFFSET))(nullptr);
		}

	};

