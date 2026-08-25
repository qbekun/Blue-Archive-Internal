#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IDSA_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IDSA_GENERATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IDSA_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IDSA_INIT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int IDsa_TypeDefinitionIndex = 22031;

	class IDsa : public Il2CppObject
	{
	public:
		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IDSA_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IDSA_GENERATESIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IDSA_VERIFYSIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IDSA_INIT_OFFSET))(arg, arg, nullptr);
		}

	};
}

