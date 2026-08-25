#pragma once
#include "../../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_IGCMMULTIPLIER_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_IGCMMULTIPLIER_MULTIPLYH_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm
{
	inline static constexpr unsigned int IGcmMultiplier_TypeDefinitionIndex = 22425;

	class IGcmMultiplier : public Il2CppObject
	{
	public:
		::System::Void Init(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_IGCMMULTIPLIER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void MultiplyH(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_IGCMMULTIPLIER_MULTIPLYH_OFFSET))(arg, nullptr);
		}

	};
}

