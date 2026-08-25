#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_VMPCRANDOMGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x681CB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_VMPCRANDOMGENERATOR_ADDSEEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x681D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_VMPCRANDOMGENERATOR_ADDSEEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x681E00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_VMPCRANDOMGENERATOR_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x681E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_VMPCRANDOMGENERATOR_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x681E80)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	inline static constexpr unsigned int VmpcRandomGenerator_TypeDefinitionIndex = 22292;

	class VmpcRandomGenerator : public Il2CppObject
	{
	public:
		::System::Byte n; // 0x10
		::Il2CppArray<::System::Object*>* P; // 0x18
		::System::Byte s; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_VMPCRANDOMGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddSeedMaterial(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_VMPCRANDOMGENERATOR_ADDSEEDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeedMaterial(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_VMPCRANDOMGENERATOR_ADDSEEDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_VMPCRANDOMGENERATOR_NEXTBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_VMPCRANDOMGENERATOR_NEXTBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

