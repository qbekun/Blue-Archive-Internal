#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x704550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x704860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x704AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x704AE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x704B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_SETKEY_OFFSET UNITYSDK_OFFSET(0x704660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x704B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_RETURNBYTE_OFFSET UNITYSDK_OFFSET(0x704B30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int RC4Engine_TypeDefinitionIndex = 22516;

	class RC4Engine : public Il2CppObject
	{
	public:
		::System::Int32 STATE_LENGTH; // 0x0
		::Il2CppArray<::System::Object*>* engineState; // 0x10
		::System::Int32 x; // 0x18
		::System::Int32 y; // 0x1C
		::Il2CppArray<::System::Object*>* workingKey; // 0x20

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_PROCESSBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_RESET_OFFSET))(nullptr);
		}

		::System::Void SetKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Byte ReturnByte(::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC4ENGINE_RETURNBYTE_OFFSET))(arg, nullptr);
		}

	};
}

