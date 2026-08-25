#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_PACKTAUORSIGMA_OFFSET UNITYSDK_OFFSET(0x70E750)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x70E8A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x70E900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x70EA10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_GET_NONCESIZE_OFFSET UNITYSDK_OFFSET(0x70ED10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x70ED20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_RETURNBYTE_OFFSET UNITYSDK_OFFSET(0x70EDD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_ADVANCECOUNTER_OFFSET UNITYSDK_OFFSET(0x70EED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x70EF10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x70F230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_RESETCOUNTER_OFFSET UNITYSDK_OFFSET(0x70F270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_SETKEY_OFFSET UNITYSDK_OFFSET(0x70F2A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_GENERATEKEYSTREAM_OFFSET UNITYSDK_OFFSET(0x70F530)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_SALSACORE_OFFSET UNITYSDK_OFFSET(0x70F5D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_RESETLIMITCOUNTER_OFFSET UNITYSDK_OFFSET(0x70F260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_LIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x70EEB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_LIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x70F210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x70F900)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int Salsa20Engine_TypeDefinitionIndex = 22527;

	class Salsa20Engine : public Il2CppObject
	{
	public:
		::System::Int32 DEFAULT_ROUNDS; // 0x0
		::System::Int32 StateSize; // 0x0
		::Il2CppArray<::System::Object*>* TAU_SIGMA; // 0x8
		::Il2CppArray<::System::Object*>* sigma; // 0x10
		::Il2CppArray<::System::Object*>* tau; // 0x18
		::System::Int32 rounds; // 0x10
		::System::Int32 index; // 0x14
		::Il2CppArray<::System::Object*>* engineState; // 0x18
		::Il2CppArray<::System::Object*>* x; // 0x20
		::Il2CppArray<::System::Object*>* keyStream; // 0x28
		::System::Boolean initialised; // 0x30
		::System::UInt32 cW0; // 0x34
		::System::UInt32 cW1; // 0x38
		::System::UInt32 cW2; // 0x3C

		::System::Void PackTauOrSigma(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_PACKTAUORSIGMA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_NonceSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_GET_NONCESIZE_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Byte ReturnByte(::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_RETURNBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void AdvanceCounter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_ADVANCECOUNTER_OFFSET))(nullptr);
		}

		::System::Void ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_PROCESSBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_RESET_OFFSET))(nullptr);
		}

		::System::Void ResetCounter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_RESETCOUNTER_OFFSET))(nullptr);
		}

		::System::Void SetKey(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_SETKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateKeyStream(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_GENERATEKEYSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void SalsaCore(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_SALSACORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ResetLimitCounter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_RESETLIMITCOUNTER_OFFSET))(nullptr);
		}

		::System::Boolean LimitExceeded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_LIMITEXCEEDED_OFFSET))(nullptr);
		}

		::System::Boolean LimitExceeded(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_LIMITEXCEEDED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SALSA20ENGINE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

