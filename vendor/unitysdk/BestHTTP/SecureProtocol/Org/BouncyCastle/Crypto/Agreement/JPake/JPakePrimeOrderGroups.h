#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake { class JPakePrimeOrderGroup; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPRIMEORDERGROUPS_.CTOR_OFFSET UNITYSDK_OFFSET(0x785C20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPRIMEORDERGROUPS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x785C30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake
{
	inline static constexpr unsigned int JPakePrimeOrderGroups_TypeDefinitionIndex = 22642;

	class JPakePrimeOrderGroups : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* SUN_JCE_1024; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* NIST_2048; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* NIST_3072; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPRIMEORDERGROUPS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPRIMEORDERGROUPS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

