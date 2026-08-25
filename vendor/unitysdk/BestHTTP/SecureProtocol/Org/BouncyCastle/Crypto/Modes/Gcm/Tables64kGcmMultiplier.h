#pragma once
#include "../../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES64KGCMMULTIPLIER_MULTIPLYH_OFFSET UNITYSDK_OFFSET(0x6B51A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES64KGCMMULTIPLIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6B5320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES64KGCMMULTIPLIER_INIT_OFFSET UNITYSDK_OFFSET(0x6B5330)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm
{
	inline static constexpr unsigned int Tables64kGcmMultiplier_TypeDefinitionIndex = 22427;

	class Tables64kGcmMultiplier : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* H; // 0x10
		::Il2CppArray<::System::Object*>* M; // 0x18

		::System::Void MultiplyH(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES64KGCMMULTIPLIER_MULTIPLYH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES64KGCMMULTIPLIER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES64KGCMMULTIPLIER_INIT_OFFSET))(arg, nullptr);
		}

	};
}

