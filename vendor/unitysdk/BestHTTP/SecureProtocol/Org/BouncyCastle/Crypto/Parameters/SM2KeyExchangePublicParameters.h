#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECPublicKeyParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPUBLICPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6954C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPUBLICPARAMETERS_GET_EPHEMERALPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x6955F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPUBLICPARAMETERS_GET_STATICPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x695600)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int SM2KeyExchangePublicParameters_TypeDefinitionIndex = 22370;

	class SM2KeyExchangePublicParameters : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* mStaticPublicKey; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* mEphemeralPublicKey; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPUBLICPARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* get_EphemeralPublicKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPUBLICPARAMETERS_GET_EPHEMERALPUBLICKEY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* get_StaticPublicKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPUBLICPARAMETERS_GET_STATICPUBLICKEY_OFFSET))(nullptr);
		}

	};
}

