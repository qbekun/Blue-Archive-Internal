#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { class WhirlpoolDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { class IMemoable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x777CA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x778420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_PACKINTOLONG_OFFSET UNITYSDK_OFFSET(0x7783D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_MASKWITHREDUCTIONPOLYNOMIAL_OFFSET UNITYSDK_OFFSET(0x7783B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x7787A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x778AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_GETDIGESTSIZE_OFFSET UNITYSDK_OFFSET(0x778B00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_DOFINAL_OFFSET UNITYSDK_OFFSET(0x778B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_RESET_OFFSET UNITYSDK_OFFSET(0x779000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_PROCESSFILLEDBUFFER_OFFSET UNITYSDK_OFFSET(0x7790D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_BYTESTOLONGFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x7791A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_CONVERTLONGTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x778F30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x779280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x77A170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_INCREMENT_OFFSET UNITYSDK_OFFSET(0x77A1D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x77A2B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_FINISH_OFFSET UNITYSDK_OFFSET(0x778D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_COPYBITLENGTH_OFFSET UNITYSDK_OFFSET(0x77A350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_GETBYTELENGTH_OFFSET UNITYSDK_OFFSET(0x77A3E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_COPY_OFFSET UNITYSDK_OFFSET(0x77A3F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_RESET_OFFSET UNITYSDK_OFFSET(0x778910)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	inline static constexpr unsigned int WhirlpoolDigest_TypeDefinitionIndex = 22619;

	class WhirlpoolDigest : public Il2CppObject
	{
	public:
		::System::Int32 BYTE_LENGTH; // 0x0
		::System::Int32 DIGEST_LENGTH_BYTES; // 0x0
		::System::Int32 ROUNDS; // 0x0
		::System::Int32 REDUCTION_POLYNOMIAL; // 0x0
		::Il2CppArray<::System::Object*>* SBOX; // 0x0
		::Il2CppArray<::System::Object*>* C0; // 0x8
		::Il2CppArray<::System::Object*>* C1; // 0x10
		::Il2CppArray<::System::Object*>* C2; // 0x18
		::Il2CppArray<::System::Object*>* C3; // 0x20
		::Il2CppArray<::System::Object*>* C4; // 0x28
		::Il2CppArray<::System::Object*>* C5; // 0x30
		::Il2CppArray<::System::Object*>* C6; // 0x38
		::Il2CppArray<::System::Object*>* C7; // 0x40
		::Il2CppArray<::System::Object*>* _rc; // 0x10
		::Il2CppArray<::System::Object*>* EIGHT; // 0x48
		::System::Int32 BITCOUNT_ARRAY_SIZE; // 0x0
		::Il2CppArray<::System::Object*>* _buffer; // 0x18
		::System::Int32 _bufferPos; // 0x20
		::Il2CppArray<::System::Object*>* _bitCount; // 0x28
		::Il2CppArray<::System::Object*>* _hash; // 0x30
		::Il2CppArray<::System::Object*>* _K; // 0x38
		::Il2CppArray<::System::Object*>* _L; // 0x40
		::Il2CppArray<::System::Object*>* _block; // 0x48
		::Il2CppArray<::System::Object*>* _state; // 0x50

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 packIntoLong(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_PACKINTOLONG_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 maskWithReductionPolynomial(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_MASKWITHREDUCTIONPOLYNOMIAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetDigestSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_GETDIGESTSIZE_OFFSET))(nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_RESET_OFFSET))(nullptr);
		}

		::System::Void processFilledBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_PROCESSFILLEDBUFFER_OFFSET))(nullptr);
		}

		::System::Int64 bytesToLongFromBuffer(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_BYTESTOLONGFROMBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void convertLongToByteArray(::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int64, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_CONVERTLONGTOBYTEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void processBlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_PROCESSBLOCK_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void increment()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_INCREMENT_OFFSET))(nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_FINISH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* copyBitLength()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_COPYBITLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 GetByteLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_GETBYTELENGTH_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_COPY_OFFSET))(nullptr);
		}

		::System::Void Reset(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_WHIRLPOOLDIGEST_RESET_OFFSET))(arg, nullptr);
		}

	};
}

