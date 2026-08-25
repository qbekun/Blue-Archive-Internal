#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ASYMMETRICKEYPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x5E83D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ASYMMETRICKEYPARAMETER_GET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x5E83F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ASYMMETRICKEYPARAMETER_EQUALS_OFFSET UNITYSDK_OFFSET(0x5E8400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ASYMMETRICKEYPARAMETER_EQUALS_OFFSET UNITYSDK_OFFSET(0x5E8480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ASYMMETRICKEYPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5E84B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int AsymmetricKeyParameter_TypeDefinitionIndex = 22005;

	class AsymmetricKeyParameter : public Il2CppObject
	{
	public:
		::System::Boolean privateKey; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ASYMMETRICKEYPARAMETER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPrivate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ASYMMETRICKEYPARAMETER_GET_ISPRIVATE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ASYMMETRICKEYPARAMETER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ASYMMETRICKEYPARAMETER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ASYMMETRICKEYPARAMETER_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

