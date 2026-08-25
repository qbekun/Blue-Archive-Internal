#pragma once
#include "../../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_ISP80090DRBG_GENERATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_ISP80090DRBG_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_ISP80090DRBG_RESEED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg
{
	inline static constexpr unsigned int ISP80090Drbg_TypeDefinitionIndex = 22300;

	class ISP80090Drbg : public Il2CppObject
	{
	public:
		::System::Int32 Generate(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_ISP80090DRBG_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_BlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_ISP80090DRBG_GET_BLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void Reseed(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_ISP80090DRBG_RESEED_OFFSET))(arg, nullptr);
		}

	};
}

