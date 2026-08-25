#pragma once
#include "../../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_BASICGCMEXPONENTIATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6B31A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_BASICGCMEXPONENTIATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6B3260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_BASICGCMEXPONENTIATOR_EXPONENTIATEX_OFFSET UNITYSDK_OFFSET(0x6B3270)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm
{
	inline static constexpr unsigned int BasicGcmExponentiator_TypeDefinitionIndex = 22421;

	class BasicGcmExponentiator : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* x; // 0x10

		::System::Void Init(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_BASICGCMEXPONENTIATOR_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_BASICGCMEXPONENTIATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ExponentiateX(::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_BASICGCMEXPONENTIATOR_EXPONENTIATEX_OFFSET))(arg, arg, nullptr);
		}

	};
}

