#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECPrivateKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPRIVATEPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6951B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPRIVATEPARAMETERS_GET_EPHEMERALPUBLICPOINT_OFFSET UNITYSDK_OFFSET(0x695470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPRIVATEPARAMETERS_GET_EPHEMERALPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x695480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPRIVATEPARAMETERS_GET_STATICPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x695490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPRIVATEPARAMETERS_GET_ISINITIATOR_OFFSET UNITYSDK_OFFSET(0x6954A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPRIVATEPARAMETERS_GET_STATICPUBLICPOINT_OFFSET UNITYSDK_OFFSET(0x6954B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int SM2KeyExchangePrivateParameters_TypeDefinitionIndex = 22369;

	class SM2KeyExchangePrivateParameters : public Il2CppObject
	{
	public:
		::System::Boolean mInitiator; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mStaticPrivateKey; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* mStaticPublicPoint; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mEphemeralPrivateKey; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* mEphemeralPublicPoint; // 0x30

		::System::Void .ctor(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPRIVATEPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* get_EphemeralPublicPoint()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPRIVATEPARAMETERS_GET_EPHEMERALPUBLICPOINT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* get_EphemeralPrivateKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPRIVATEPARAMETERS_GET_EPHEMERALPRIVATEKEY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* get_StaticPrivateKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPRIVATEPARAMETERS_GET_STATICPRIVATEKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInitiator()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPRIVATEPARAMETERS_GET_ISINITIATOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* get_StaticPublicPoint()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_SM2KEYEXCHANGEPRIVATEPARAMETERS_GET_STATICPUBLICPOINT_OFFSET))(nullptr);
		}

	};
}

