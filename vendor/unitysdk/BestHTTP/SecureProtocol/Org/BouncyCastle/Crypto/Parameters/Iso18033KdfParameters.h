#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ISO18033KDFPARAMETERS_GETSEED_OFFSET UNITYSDK_OFFSET(0x691390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ISO18033KDFPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6913A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int Iso18033KdfParameters_TypeDefinitionIndex = 22344;

	class Iso18033KdfParameters : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* seed; // 0x10

		::Il2CppArray<::System::Object*>* GetSeed()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ISO18033KDFPARAMETERS_GETSEED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ISO18033KDFPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

