#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMPRESSIONMETHOD_.CTOR_OFFSET UNITYSDK_OFFSET(0x5FA520)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int CompressionMethod_TypeDefinitionIndex = 22097;

	class CompressionMethod : public Il2CppObject
	{
	public:
		::System::Byte cls_null; // 0x0
		::System::Byte DEFLATE; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMPRESSIONMETHOD_.CTOR_OFFSET))(nullptr);
		}

	};
}

