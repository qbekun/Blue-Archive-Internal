#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_MAXFRAGMENTLENGTH_.CTOR_OFFSET UNITYSDK_OFFSET(0x6110C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_MAXFRAGMENTLENGTH_ISVALID_OFFSET UNITYSDK_OFFSET(0x6089A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int MaxFragmentLength_TypeDefinitionIndex = 22149;

	class MaxFragmentLength : public Il2CppObject
	{
	public:
		::System::Byte pow2_9; // 0x0
		::System::Byte pow2_10; // 0x0
		::System::Byte pow2_11; // 0x0
		::System::Byte pow2_12; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_MAXFRAGMENTLENGTH_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsValid(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_MAXFRAGMENTLENGTH_ISVALID_OFFSET))(arg, nullptr);
		}

	};
}

