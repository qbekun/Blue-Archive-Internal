#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KEYPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6846E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KEYPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6896D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KEYPARAMETER_GETKEY_OFFSET UNITYSDK_OFFSET(0x691EA0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int KeyParameter_TypeDefinitionIndex = 22349;

	class KeyParameter : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* key; // 0x10

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KEYPARAMETER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KEYPARAMETER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KEYPARAMETER_GETKEY_OFFSET))(nullptr);
		}

	};
}

