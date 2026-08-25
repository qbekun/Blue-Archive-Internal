#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_RC5PARAMETERS_GET_ROUNDS_OFFSET UNITYSDK_OFFSET(0x692F50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_RC5PARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x692F60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int RC5Parameters_TypeDefinitionIndex = 22362;

	class RC5Parameters : public Il2CppObject
	{
	public:
		::System::Int32 rounds; // 0x18

		::System::Int32 get_Rounds()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_RC5PARAMETERS_GET_ROUNDS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_RC5PARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

