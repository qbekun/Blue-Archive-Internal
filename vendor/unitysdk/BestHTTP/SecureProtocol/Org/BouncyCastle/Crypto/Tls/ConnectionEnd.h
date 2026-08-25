#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CONNECTIONEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x5FA530)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ConnectionEnd_TypeDefinitionIndex = 22098;

	class ConnectionEnd : public Il2CppObject
	{
	public:
		::System::Int32 server; // 0x0
		::System::Int32 client; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CONNECTIONEND_.CTOR_OFFSET))(nullptr);
		}

	};
}

