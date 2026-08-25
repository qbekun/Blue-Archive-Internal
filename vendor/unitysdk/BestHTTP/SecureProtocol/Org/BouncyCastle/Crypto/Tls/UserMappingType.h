#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_USERMAPPINGTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x668E20)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int UserMappingType_TypeDefinitionIndex = 22244;

	class UserMappingType : public Il2CppObject
	{
	public:
		::System::Byte upn_domain_hint; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_USERMAPPINGTYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

