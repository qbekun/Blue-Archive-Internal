#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CLIENTAUTHENTICATIONTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F95E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ClientAuthenticationType_TypeDefinitionIndex = 22094;

	class ClientAuthenticationType : public Il2CppObject
	{
	public:
		::System::Byte anonymous; // 0x0
		::System::Byte certificate_based; // 0x0
		::System::Byte psk; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CLIENTAUTHENTICATIONTYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

