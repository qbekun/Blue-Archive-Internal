#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IEntropySource; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_ISTDEA_OFFSET UNITYSDK_OFFSET(0x683540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_CTR_DRBG_INSTANTIATE_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x683690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_GETENTROPY_OFFSET UNITYSDK_OFFSET(0x684430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_.CTOR_OFFSET UNITYSDK_OFFSET(0x6815E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_CTR_DRBG_UPDATE_OFFSET UNITYSDK_OFFSET(0x683F90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_EXPANDKEY_OFFSET UNITYSDK_OFFSET(0x684640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x684B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x684C10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_ADDONETO_OFFSET UNITYSDK_OFFSET(0x6847E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_BCC_OFFSET UNITYSDK_OFFSET(0x684C30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_BLOCK_CIPHER_DF_OFFSET UNITYSDK_OFFSET(0x6838F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_CTR_DRBG_RESEED_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x685120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_PADKEY_OFFSET UNITYSDK_OFFSET(0x6848D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_GENERATE_OFFSET UNITYSDK_OFFSET(0x685270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_RESEED_OFFSET UNITYSDK_OFFSET(0x6858B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_XOR_OFFSET UNITYSDK_OFFSET(0x684840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_COPYINTTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x6850B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_GETMAXSECURITYSTRENGTH_OFFSET UNITYSDK_OFFSET(0x684550)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg
{
	inline static constexpr unsigned int CtrSP800Drbg_TypeDefinitionIndex = 22296;

	class CtrSP800Drbg : public Il2CppObject
	{
	public:
		::System::Int64 TDEA_RESEED_MAX; // 0x0
		::System::Int64 AES_RESEED_MAX; // 0x8
		::System::Int32 TDEA_MAX_BITS_REQUEST; // 0x10
		::System::Int32 AES_MAX_BITS_REQUEST; // 0x14
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* mEngine; // 0x18
		::System::Int32 mKeySizeInBits; // 0x20
		::System::Int32 mSeedLength; // 0x24
		::System::Int32 mSecurityStrength; // 0x28
		::Il2CppArray<::System::Object*>* mKey; // 0x30
		::Il2CppArray<::System::Object*>* mV; // 0x38
		::System::Int64 mReseedCounter; // 0x40
		::System::Boolean mIsTdea; // 0x48
		::Il2CppArray<::System::Object*>* K_BITS; // 0x18

		::System::Boolean IsTdea(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_ISTDEA_OFFSET))(arg, nullptr);
		}

		::System::Void CTR_DRBG_Instantiate_algorithm(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_CTR_DRBG_INSTANTIATE_ALGORITHM_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEntropy()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_GETENTROPY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg, ::System::Int32 arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::System::Int32, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CTR_DRBG_Update(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_CTR_DRBG_UPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ExpandKey(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_EXPANDKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_BlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_GET_BLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void AddOneTo(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_ADDONETO_OFFSET))(arg, nullptr);
		}

		::System::Void BCC(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_BCC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Block_Cipher_df(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_BLOCK_CIPHER_DF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CTR_DRBG_Reseed_algorithm(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_CTR_DRBG_RESEED_ALGORITHM_OFFSET))(arg, nullptr);
		}

		::System::Void PadKey(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_PADKEY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Generate(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reseed(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_RESEED_OFFSET))(arg, nullptr);
		}

		::System::Void XOR(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_XOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void copyIntToByteArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_COPYINTTOBYTEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetMaxSecurityStrength(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_CTRSP800DRBG_GETMAXSECURITYSTRENGTH_OFFSET))(arg, arg, nullptr);
		}

	};
}

