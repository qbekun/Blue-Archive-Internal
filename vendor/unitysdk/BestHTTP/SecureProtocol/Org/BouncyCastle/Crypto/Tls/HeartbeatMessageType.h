#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMESSAGETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x610D10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMESSAGETYPE_ISVALID_OFFSET UNITYSDK_OFFSET(0x610900)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int HeartbeatMessageType_TypeDefinitionIndex = 22141;

	class HeartbeatMessageType : public Il2CppObject
	{
	public:
		::System::Byte heartbeat_request; // 0x0
		::System::Byte heartbeat_response; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMESSAGETYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsValid(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HEARTBEATMESSAGETYPE_ISVALID_OFFSET))(arg, nullptr);
		}

	};
}

