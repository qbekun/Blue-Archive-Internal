#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Srp6GroupParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSSRPGROUPVERIFIER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x5FFFE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSSRPGROUPVERIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x600480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSSRPGROUPVERIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6004F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSSRPGROUPVERIFIER_ACCEPT_OFFSET UNITYSDK_OFFSET(0x600520)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSSRPGROUPVERIFIER_AREGROUPSEQUAL_OFFSET UNITYSDK_OFFSET(0x6008C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSSRPGROUPVERIFIER_AREPARAMETERSEQUAL_OFFSET UNITYSDK_OFFSET(0x600940)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DefaultTlsSrpGroupVerifier_TypeDefinitionIndex = 22108;

	class DefaultTlsSrpGroupVerifier : public Il2CppObject
	{
	public:
		::System::Collections::IList* DefaultGroups; // 0x0
		::System::Collections::IList* mGroups; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSSRPGROUPVERIFIER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSSRPGROUPVERIFIER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSSRPGROUPVERIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Accept(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSSRPGROUPVERIFIER_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Boolean AreGroupsEqual(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSSRPGROUPVERIFIER_AREGROUPSEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AreParametersEqual(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSSRPGROUPVERIFIER_AREPARAMETERSEQUAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

