#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHANGECIPHERSPEC_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F9590)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ChangeCipherSpec_TypeDefinitionIndex = 22091;

	class ChangeCipherSpec : public Il2CppObject
	{
	public:
		::System::Byte change_cipher_spec; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHANGECIPHERSPEC_.CTOR_OFFSET))(nullptr);
		}

	};
}

