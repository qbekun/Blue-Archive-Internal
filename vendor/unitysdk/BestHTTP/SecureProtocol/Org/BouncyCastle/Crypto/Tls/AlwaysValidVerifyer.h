#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALWAYSVALIDVERIFYER_ISVALID_OFFSET UNITYSDK_OFFSET(0x5F40B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALWAYSVALIDVERIFYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F40C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int AlwaysValidVerifyer_TypeDefinitionIndex = 22076;

	class AlwaysValidVerifyer : public Il2CppObject
	{
	public:
		::System::Boolean IsValid(::System::Uri* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALWAYSVALIDVERIFYER_ISVALID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALWAYSVALIDVERIFYER_.CTOR_OFFSET))(nullptr);
		}

	};
}

