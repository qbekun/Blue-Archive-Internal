#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IStreamCalculator; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IMACFACTORY_GET_ALGORITHMDETAILS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IMACFACTORY_CREATECALCULATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int IMacFactory_TypeDefinitionIndex = 22039;

	class IMacFactory : public Il2CppObject
	{
	public:
		::System::Object* get_AlgorithmDetails()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IMACFACTORY_GET_ALGORITHMDETAILS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCalculator* CreateCalculator()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCalculator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IMACFACTORY_CREATECALCULATOR_OFFSET))(nullptr);
		}

	};
}

