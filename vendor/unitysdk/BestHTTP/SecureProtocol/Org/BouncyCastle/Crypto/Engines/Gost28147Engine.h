#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x6F80D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6F80E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_BYTESTOINT_OFFSET UNITYSDK_OFFSET(0x6F8A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6F8A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GETSBOXNAME_OFFSET UNITYSDK_OFFSET(0x6F9000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_ADDSBOX_OFFSET UNITYSDK_OFFSET(0x6F8F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6F9610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GETSBOX_OFFSET UNITYSDK_OFFSET(0x6F9620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_INTTOBYTES_OFFSET UNITYSDK_OFFSET(0x6F97E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GOST28147_MAINSTEP_OFFSET UNITYSDK_OFFSET(0x6F9850)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GENERATEWORKINGKEY_OFFSET UNITYSDK_OFFSET(0x6F9980)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x6F9BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GOST28147FUNC_OFFSET UNITYSDK_OFFSET(0x6F81F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6F9BF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6F9C20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x6F9C90)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int Gost28147Engine_TypeDefinitionIndex = 22505;

	class Gost28147Engine : public Il2CppObject
	{
	public:
		::System::Int32 BlockSize; // 0x0
		::Il2CppArray<::System::Object*>* workingKey; // 0x10
		::System::Boolean forEncryption; // 0x18
		::Il2CppArray<::System::Object*>* S; // 0x20
		::Il2CppArray<::System::Object*>* Sbox_Default; // 0x0
		::Il2CppArray<::System::Object*>* ESbox_Test; // 0x8
		::Il2CppArray<::System::Object*>* ESbox_A; // 0x10
		::Il2CppArray<::System::Object*>* ESbox_B; // 0x18
		::Il2CppArray<::System::Object*>* ESbox_C; // 0x20
		::Il2CppArray<::System::Object*>* ESbox_D; // 0x28
		::Il2CppArray<::System::Object*>* DSbox_Test; // 0x30
		::Il2CppArray<::System::Object*>* DSbox_A; // 0x38
		::System::Collections::IDictionary* sBoxes; // 0x40

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 bytesToint(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_BYTESTOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* GetSBoxName(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GETSBOXNAME_OFFSET))(arg, nullptr);
		}

		::System::Void AddSBox(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_ADDSBOX_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSBox(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GETSBOX_OFFSET))(str, nullptr);
		}

		::System::Void intTobytes(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_INTTOBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Gost28147_mainStep(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GOST28147_MAINSTEP_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* generateWorkingKey(::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GENERATEWORKINGKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_RESET_OFFSET))(nullptr);
		}

		::System::Void Gost28147Func(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GOST28147FUNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_GOST28147ENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

	};
}

