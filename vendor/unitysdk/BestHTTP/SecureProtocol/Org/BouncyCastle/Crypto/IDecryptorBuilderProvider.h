#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherBuilder; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IDECRYPTORBUILDERPROVIDER_CREATEDECRYPTORBUILDER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int IDecryptorBuilderProvider_TypeDefinitionIndex = 22027;

	class IDecryptorBuilderProvider : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilder* CreateDecryptorBuilder(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilder*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IDECRYPTORBUILDERPROVIDER_CREATEDECRYPTORBUILDER_OFFSET))(arg, nullptr);
		}

	};
}

