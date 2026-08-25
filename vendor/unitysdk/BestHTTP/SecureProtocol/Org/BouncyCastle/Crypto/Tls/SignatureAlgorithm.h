#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREALGORITHM_.CTOR_OFFSET UNITYSDK_OFFSET(0x615600)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int SignatureAlgorithm_TypeDefinitionIndex = 22168;

	class SignatureAlgorithm : public Il2CppObject
	{
	public:
		::System::Byte anonymous; // 0x0
		::System::Byte rsa; // 0x0
		::System::Byte dsa; // 0x0
		::System::Byte ecdsa; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREALGORITHM_.CTOR_OFFSET))(nullptr);
		}

	};
}

