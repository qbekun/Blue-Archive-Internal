#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSFATALALERT_.CTOR_OFFSET UNITYSDK_OFFSET(0x6166D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSFATALALERT_.CTOR_OFFSET UNITYSDK_OFFSET(0x618670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSFATALALERT_GET_ALERTDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x62CDE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsFatalAlert_TypeDefinitionIndex = 22208;

	class TlsFatalAlert : public Il2CppObject
	{
	public:
		::System::Byte alertDescription; // 0x90

		::System::Void .ctor(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSFATALALERT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Byte arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSFATALALERT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Byte get_AlertDescription()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSFATALALERT_GET_ALERTDESCRIPTION_OFFSET))(nullptr);
		}

	};
}

