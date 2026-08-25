#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IVerifierFactory; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IVERIFIERFACTORYPROVIDER_CREATEVERIFIERFACTORY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int IVerifierFactoryProvider_TypeDefinitionIndex = 22050;

	class IVerifierFactoryProvider : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactory* CreateVerifierFactory(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactory*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IVERIFIERFACTORYPROVIDER_CREATEVERIFIERFACTORY_OFFSET))(arg, nullptr);
		}

	};
}

