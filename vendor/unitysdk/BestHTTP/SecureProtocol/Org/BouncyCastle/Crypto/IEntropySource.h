#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IENTROPYSOURCE_GETENTROPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IENTROPYSOURCE_GET_ISPREDICTIONRESISTANT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IENTROPYSOURCE_GET_ENTROPYSIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int IEntropySource_TypeDefinitionIndex = 22033;

	class IEntropySource : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetEntropy()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IENTROPYSOURCE_GETENTROPY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPredictionResistant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IENTROPYSOURCE_GET_ISPREDICTIONRESISTANT_OFFSET))(nullptr);
		}

		::System::Int32 get_EntropySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IENTROPYSOURCE_GET_ENTROPYSIZE_OFFSET))(nullptr);
		}

	};
}

