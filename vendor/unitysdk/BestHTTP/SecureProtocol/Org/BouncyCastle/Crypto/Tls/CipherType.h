#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CIPHERTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F95D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int CipherType_TypeDefinitionIndex = 22093;

	class CipherType : public Il2CppObject
	{
	public:
		::System::Int32 stream; // 0x0
		::System::Int32 block; // 0x0
		::System::Int32 aead; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CIPHERTYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

