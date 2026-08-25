#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFPARAMETERS_GETSHAREDSECRET_OFFSET UNITYSDK_OFFSET(0x691E30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFPARAMETERS_GETIV_OFFSET UNITYSDK_OFFSET(0x691E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x691E50)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int KdfParameters_TypeDefinitionIndex = 22348;

	class KdfParameters : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* iv; // 0x10
		::Il2CppArray<::System::Object*>* shared; // 0x18

		::Il2CppArray<::System::Object*>* GetSharedSecret()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFPARAMETERS_GETSHAREDSECRET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetIV()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFPARAMETERS_GETIV_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_KDFPARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

