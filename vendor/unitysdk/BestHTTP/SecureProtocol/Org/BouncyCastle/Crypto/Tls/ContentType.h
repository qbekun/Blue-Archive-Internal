#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CONTENTTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5FA540)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ContentType_TypeDefinitionIndex = 22099;

	class ContentType : public Il2CppObject
	{
	public:
		::System::Byte change_cipher_spec; // 0x0
		::System::Byte alert; // 0x0
		::System::Byte handshake; // 0x0
		::System::Byte application_data; // 0x0
		::System::Byte heartbeat; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CONTENTTYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

