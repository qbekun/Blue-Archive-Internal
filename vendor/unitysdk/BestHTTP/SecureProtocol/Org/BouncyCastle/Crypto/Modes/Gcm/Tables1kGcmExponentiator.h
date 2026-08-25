#pragma once
#include "../../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES1KGCMEXPONENTIATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6B4AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES1KGCMEXPONENTIATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6A9760)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES1KGCMEXPONENTIATOR_EXPONENTIATEX_OFFSET UNITYSDK_OFFSET(0x6B4D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES1KGCMEXPONENTIATOR_ENSUREAVAILABLE_OFFSET UNITYSDK_OFFSET(0x6B4F40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm
{
	inline static constexpr unsigned int Tables1kGcmExponentiator_TypeDefinitionIndex = 22426;

	class Tables1kGcmExponentiator : public Il2CppObject
	{
	public:
		::System::Collections::IList* lookupPowX2; // 0x10

		::System::Void Init(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES1KGCMEXPONENTIATOR_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES1KGCMEXPONENTIATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ExponentiateX(::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES1KGCMEXPONENTIATOR_EXPONENTIATEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnsureAvailable(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCM_TABLES1KGCMEXPONENTIATOR_ENSUREAVAILABLE_OFFSET))(arg, nullptr);
		}

	};
}

