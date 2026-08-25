#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class HeartbeatExtension; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATEXTENSION_PARSE_OFFSET UNITYSDK_OFFSET(0x6104D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATEXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x610670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATEXTENSION_GET_MODE_OFFSET UNITYSDK_OFFSET(0x6106D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x6105D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int HeartbeatExtension_TypeDefinitionIndex = 22138;

	class HeartbeatExtension : public Il2CppObject
	{
	public:
		::System::Byte mMode; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* Parse(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATEXTENSION_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void Encode(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATEXTENSION_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Byte get_Mode()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATEXTENSION_GET_MODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATEXTENSION_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

