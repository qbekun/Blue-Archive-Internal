#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DIGESTINPUTBUFFER_UPDATEDIGEST_OFFSET UNITYSDK_OFFSET(0x600D50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DIGESTINPUTBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x600A30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DigestInputBuffer_TypeDefinitionIndex = 22111;

	class DigestInputBuffer : public Il2CppObject
	{
	public:
		::System::Void UpdateDigest(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DIGESTINPUTBUFFER_UPDATEDIGEST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DIGESTINPUTBUFFER_.CTOR_OFFSET))(nullptr);
		}

	};
}

