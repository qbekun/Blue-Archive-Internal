#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class HeartbeatMessage; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMESSAGE_PARSE_OFFSET UNITYSDK_OFFSET(0x6106E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6109C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMESSAGE_ENCODE_OFFSET UNITYSDK_OFFSET(0x610B00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int HeartbeatMessage_TypeDefinitionIndex = 22140;

	class HeartbeatMessage : public Il2CppObject
	{
	public:
		::System::Byte mType; // 0x10
		::Il2CppArray<::System::Object*>* mPayload; // 0x18
		::System::Int32 mPaddingLength; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* Parse(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMESSAGE_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMESSAGE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Encode(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMESSAGE_ENCODE_OFFSET))(arg, arg, nullptr);
		}

	};
}

