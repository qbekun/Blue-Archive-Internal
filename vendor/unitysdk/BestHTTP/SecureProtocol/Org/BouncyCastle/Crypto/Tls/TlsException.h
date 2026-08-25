#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x62ACE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsException_TypeDefinitionIndex = 22206;

	class TlsException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

