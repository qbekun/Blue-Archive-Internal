#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_INVALIDCIPHERTEXTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x5ECCE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_INVALIDCIPHERTEXTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x5ECD30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_INVALIDCIPHERTEXTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x5ECD90)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int InvalidCipherTextException_TypeDefinitionIndex = 22040;

	class InvalidCipherTextException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_INVALIDCIPHERTEXTEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_INVALIDCIPHERTEXTEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_INVALIDCIPHERTEXTEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

