#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6FDEA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x6FDEF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_RETURNBYTE_OFFSET UNITYSDK_OFFSET(0x6FE600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6FE800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_ISAAC_OFFSET UNITYSDK_OFFSET(0x6FE670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_SETKEY_OFFSET UNITYSDK_OFFSET(0x6FE000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x6FE9B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x6FE9C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_MIX_OFFSET UNITYSDK_OFFSET(0x6FE890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6FEC60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int IsaacEngine_TypeDefinitionIndex = 22510;

	class IsaacEngine : public Il2CppObject
	{
	public:
		::System::Int32 sizeL; // 0x0
		::System::Int32 stateArraySize; // 0x4
		::Il2CppArray<::System::Object*>* engineState; // 0x10
		::Il2CppArray<::System::Object*>* results; // 0x18
		::System::UInt32 a; // 0x20
		::System::UInt32 b; // 0x24
		::System::UInt32 c; // 0x28
		::System::Int32 index; // 0x2C
		::Il2CppArray<::System::Object*>* keyStream; // 0x30
		::Il2CppArray<::System::Object*>* workingKey; // 0x38
		::System::Boolean initialised; // 0x40

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Byte ReturnByte(::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_RETURNBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void isaac()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_ISAAC_OFFSET))(nullptr);
		}

		::System::Void setKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_RESET_OFFSET))(nullptr);
		}

		::System::Void ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_PROCESSBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void mix(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_MIX_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_ISAACENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

	};
}

