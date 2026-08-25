#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSFATALALERTRECEIVED_GET_ALERTDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x62CDF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSFATALALERTRECEIVED_.CTOR_OFFSET UNITYSDK_OFFSET(0x62CE00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsFatalAlertReceived_TypeDefinitionIndex = 22209;

	class TlsFatalAlertReceived : public Il2CppObject
	{
	public:
		::System::Byte alertDescription; // 0x90

		::System::Byte get_AlertDescription()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSFATALALERTRECEIVED_GET_ALERTDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSFATALALERTRECEIVED_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

