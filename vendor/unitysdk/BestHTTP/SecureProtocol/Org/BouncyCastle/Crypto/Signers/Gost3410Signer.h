#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Gost3410KeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_GOST3410SIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6713B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_GOST3410SIGNER_INIT_OFFSET UNITYSDK_OFFSET(0x6713C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_GOST3410SIGNER_GENERATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x6715D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_GOST3410SIGNER_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x671870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_GOST3410SIGNER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6718A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_GOST3410SIGNER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x6718D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers
{
	inline static constexpr unsigned int Gost3410Signer_TypeDefinitionIndex = 22261;

	class Gost3410Signer : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters* key; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_GOST3410SIGNER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_GOST3410SIGNER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_GOST3410SIGNER_GENERATESIGNATURE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Order()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_GOST3410SIGNER_GET_ORDER_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_GOST3410SIGNER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_GOST3410SIGNER_VERIFYSIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

