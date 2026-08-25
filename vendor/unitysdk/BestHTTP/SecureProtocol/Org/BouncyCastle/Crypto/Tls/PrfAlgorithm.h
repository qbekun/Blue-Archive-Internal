#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_PRFALGORITHM_.CTOR_OFFSET UNITYSDK_OFFSET(0x611660)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int PrfAlgorithm_TypeDefinitionIndex = 22154;

	class PrfAlgorithm : public Il2CppObject
	{
	public:
		::System::Int32 tls_prf_legacy; // 0x0
		::System::Int32 tls_prf_sha256; // 0x0
		::System::Int32 tls_prf_sha384; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_PRFALGORITHM_.CTOR_OFFSET))(nullptr);
		}

	};
}

