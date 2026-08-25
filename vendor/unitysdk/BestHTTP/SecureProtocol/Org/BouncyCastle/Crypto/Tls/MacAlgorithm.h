#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_MACALGORITHM_.CTOR_OFFSET UNITYSDK_OFFSET(0x6110B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int MacAlgorithm_TypeDefinitionIndex = 22148;

	class MacAlgorithm : public Il2CppObject
	{
	public:
		::System::Int32 cls_null; // 0x0
		::System::Int32 md5; // 0x0
		::System::Int32 sha; // 0x0
		::System::Int32 hmac_md5; // 0x0
		::System::Int32 hmac_sha1; // 0x0
		::System::Int32 hmac_sha256; // 0x0
		::System::Int32 hmac_sha384; // 0x0
		::System::Int32 hmac_sha512; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_MACALGORITHM_.CTOR_OFFSET))(nullptr);
		}

	};
}

