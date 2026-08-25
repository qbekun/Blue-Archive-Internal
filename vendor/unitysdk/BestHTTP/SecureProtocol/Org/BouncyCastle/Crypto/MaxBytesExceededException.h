#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MAXBYTESEXCEEDEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x5ECE10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MAXBYTESEXCEEDEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x5ECE60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MAXBYTESEXCEEDEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x5ECEC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int MaxBytesExceededException_TypeDefinitionIndex = 22054;

	class MaxBytesExceededException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MAXBYTESEXCEEDEDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MAXBYTESEXCEEDEDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MAXBYTESEXCEEDEDEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

