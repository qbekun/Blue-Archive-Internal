#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALERTLEVEL_GETTEXT_OFFSET UNITYSDK_OFFSET(0x5F3F60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALERTLEVEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F40A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALERTLEVEL_GETNAME_OFFSET UNITYSDK_OFFSET(0x5F4030)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int AlertLevel_TypeDefinitionIndex = 22075;

	class AlertLevel : public Il2CppObject
	{
	public:
		::System::Byte warning; // 0x0
		::System::Byte fatal; // 0x0

		::System::String* GetText(::System::Byte arg)
		{
			return (return (::System::String*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALERTLEVEL_GETTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALERTLEVEL_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetName(::System::Byte arg)
		{
			return (return (::System::String*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALERTLEVEL_GETNAME_OFFSET))(arg, nullptr);
		}

	};
}

