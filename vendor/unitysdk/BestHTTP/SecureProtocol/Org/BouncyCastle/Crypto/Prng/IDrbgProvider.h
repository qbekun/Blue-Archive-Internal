#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg { class ISP80090Drbg; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IEntropySource; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_IDRBGPROVIDER_GET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	inline static constexpr unsigned int IDrbgProvider_TypeDefinitionIndex = 22282;

	class IDrbgProvider : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Get(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_IDRBGPROVIDER_GET_OFFSET))(arg, nullptr);
		}

	};
}

