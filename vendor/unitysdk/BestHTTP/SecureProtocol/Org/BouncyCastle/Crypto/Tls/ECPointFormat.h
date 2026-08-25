#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ECPOINTFORMAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x6102E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ECPointFormat_TypeDefinitionIndex = 22131;

	class ECPointFormat : public Il2CppObject
	{
	public:
		::System::Byte uncompressed; // 0x0
		::System::Byte ansiX962_compressed_prime; // 0x0
		::System::Byte ansiX962_compressed_char2; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ECPOINTFORMAT_.CTOR_OFFSET))(nullptr);
		}

	};
}

