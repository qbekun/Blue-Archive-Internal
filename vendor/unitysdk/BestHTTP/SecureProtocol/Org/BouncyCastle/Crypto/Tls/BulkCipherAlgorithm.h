#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BULKCIPHERALGORITHM_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F4270)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int BulkCipherAlgorithm_TypeDefinitionIndex = 22078;

	class BulkCipherAlgorithm : public Il2CppObject
	{
	public:
		::System::Int32 cls_null; // 0x0
		::System::Int32 rc4; // 0x0
		::System::Int32 rc2; // 0x0
		::System::Int32 des; // 0x0
		::System::Int32 cls_3des; // 0x0
		::System::Int32 des40; // 0x0
		::System::Int32 aes; // 0x0
		::System::Int32 idea; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BULKCIPHERALGORITHM_.CTOR_OFFSET))(nullptr);
		}

	};
}

