#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x610D20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMODE_ISVALID_OFFSET UNITYSDK_OFFSET(0x6105B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int HeartbeatMode_TypeDefinitionIndex = 22142;

	class HeartbeatMode : public Il2CppObject
	{
	public:
		::System::Byte peer_allowed_to_send; // 0x0
		::System::Byte peer_not_allowed_to_send; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsValid(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMODE_ISVALID_OFFSET))(arg, nullptr);
		}

	};
}

