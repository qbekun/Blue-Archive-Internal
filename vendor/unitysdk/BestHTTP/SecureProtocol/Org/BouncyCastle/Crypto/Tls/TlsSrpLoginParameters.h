#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Srp6GroupParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPLOGINPARAMETERS_GET_SALT_OFFSET UNITYSDK_OFFSET(0x65E680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPLOGINPARAMETERS_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x65E690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPLOGINPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x65E6A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPLOGINPARAMETERS_GET_VERIFIER_OFFSET UNITYSDK_OFFSET(0x65E700)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsSrpLoginParameters_TypeDefinitionIndex = 22237;

	class TlsSrpLoginParameters : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* mGroup; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* mVerifier; // 0x18
		::Il2CppArray<::System::Object*>* mSalt; // 0x20

		::Il2CppArray<::System::Object*>* get_Salt()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPLOGINPARAMETERS_GET_SALT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* get_Group()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPLOGINPARAMETERS_GET_GROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPLOGINPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Verifier()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPLOGINPARAMETERS_GET_VERIFIER_OFFSET))(nullptr);
		}

	};
}

