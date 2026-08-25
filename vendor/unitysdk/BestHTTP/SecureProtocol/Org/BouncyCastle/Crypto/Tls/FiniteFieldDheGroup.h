#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_FINITEFIELDDHEGROUP_ISVALID_OFFSET UNITYSDK_OFFSET(0x6103D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_FINITEFIELDDHEGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x6103E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int FiniteFieldDheGroup_TypeDefinitionIndex = 22135;

	class FiniteFieldDheGroup : public Il2CppObject
	{
	public:
		::System::Byte ffdhe2432; // 0x0
		::System::Byte ffdhe3072; // 0x0
		::System::Byte ffdhe4096; // 0x0
		::System::Byte ffdhe6144; // 0x0
		::System::Byte ffdhe8192; // 0x0

		::System::Boolean IsValid(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_FINITEFIELDDHEGROUP_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_FINITEFIELDDHEGROUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

