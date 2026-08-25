#pragma once
#include "../../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_BASICGCMMULTIPLIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6B36F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_BASICGCMMULTIPLIER_MULTIPLYH_OFFSET UNITYSDK_OFFSET(0x6B3700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_BASICGCMMULTIPLIER_INIT_OFFSET UNITYSDK_OFFSET(0x6B37D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm
{
	inline static constexpr unsigned int BasicGcmMultiplier_TypeDefinitionIndex = 22422;

	class BasicGcmMultiplier : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* H; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_BASICGCMMULTIPLIER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MultiplyH(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_BASICGCMMULTIPLIER_MULTIPLYH_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_BASICGCMMULTIPLIER_INIT_OFFSET))(arg, nullptr);
		}

	};
}

