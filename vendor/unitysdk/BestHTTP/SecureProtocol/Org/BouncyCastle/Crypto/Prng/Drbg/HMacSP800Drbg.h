#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IEntropySource; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x687B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x687BC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_GENERATE_OFFSET UNITYSDK_OFFSET(0x687BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_HMAC_DRBG_UPDATE_OFFSET UNITYSDK_OFFSET(0x688200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_GETENTROPY_OFFSET UNITYSDK_OFFSET(0x6886B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_HMAC_DRBG_UPDATE_FUNC_OFFSET UNITYSDK_OFFSET(0x688240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_RESEED_OFFSET UNITYSDK_OFFSET(0x688170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_.CTOR_OFFSET UNITYSDK_OFFSET(0x681180)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg
{
	inline static constexpr unsigned int HMacSP800Drbg_TypeDefinitionIndex = 22299;

	class HMacSP800Drbg : public Il2CppObject
	{
	public:
		::System::Int64 RESEED_MAX; // 0x0
		::System::Int32 MAX_BITS_REQUEST; // 0x8
		::Il2CppArray<::System::Object*>* mK; // 0x10
		::Il2CppArray<::System::Object*>* mV; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mHMac; // 0x28
		::System::Int32 mSecurityStrength; // 0x30
		::System::Int64 mReseedCounter; // 0x38

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_BlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_GET_BLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 Generate(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void hmac_DRBG_Update(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_HMAC_DRBG_UPDATE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEntropy()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_GETENTROPY_OFFSET))(nullptr);
		}

		::System::Void hmac_DRBG_Update_Func(::Il2CppArray<::System::Object*>* arg, ::System::Byte arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_HMAC_DRBG_UPDATE_FUNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reseed(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_RESEED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_HMACSP800DRBG_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

