#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x6F2880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6F29C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6F17A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x6F2AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_GENERATEWORKINGKEY_OFFSET UNITYSDK_OFFSET(0x6F09F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6F2B00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x6F2B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_GETWORKINGKEY_OFFSET UNITYSDK_OFFSET(0x6F2B40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6F2B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6F3020)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_DESFUNC_OFFSET UNITYSDK_OFFSET(0x6F1230)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int DesEngine_TypeDefinitionIndex = 22501;

	class DesEngine : public Il2CppObject
	{
	public:
		::System::Int32 BLOCK_SIZE; // 0x0
		::Il2CppArray<::System::Object*>* workingKey; // 0x10
		::Il2CppArray<::System::Object*>* bytebit; // 0x0
		::Il2CppArray<::System::Object*>* bigbyte; // 0x8
		::Il2CppArray<::System::Object*>* pc1; // 0x10
		::Il2CppArray<::System::Object*>* totrot; // 0x18
		::Il2CppArray<::System::Object*>* pc2; // 0x20
		::Il2CppArray<::System::Object*>* SP1; // 0x28
		::Il2CppArray<::System::Object*>* SP2; // 0x30
		::Il2CppArray<::System::Object*>* SP3; // 0x38
		::Il2CppArray<::System::Object*>* SP4; // 0x40
		::Il2CppArray<::System::Object*>* SP5; // 0x48
		::Il2CppArray<::System::Object*>* SP6; // 0x50
		::Il2CppArray<::System::Object*>* SP7; // 0x58
		::Il2CppArray<::System::Object*>* SP8; // 0x60

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_RESET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateWorkingKey(::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_GENERATEWORKINGKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetWorkingKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_GETWORKINGKEY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void DesFunc(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DESENGINE_DESFUNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

