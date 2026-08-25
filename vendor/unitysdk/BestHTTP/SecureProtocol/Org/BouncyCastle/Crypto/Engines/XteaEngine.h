#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x729310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x729320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_ENCRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x729330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_DECRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x729460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x7295B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_SETKEY_OFFSET UNITYSDK_OFFSET(0x7295E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x729740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x729880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x729920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x729A70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int XteaEngine_TypeDefinitionIndex = 22546;

	class XteaEngine : public Il2CppObject
	{
	public:
		::System::Int32 rounds; // 0x0
		::System::Int32 block_size; // 0x0
		::System::Int32 delta; // 0x0
		::Il2CppArray<::System::Object*>* _S; // 0x10
		::Il2CppArray<::System::Object*>* _sum0; // 0x18
		::Il2CppArray<::System::Object*>* _sum1; // 0x20
		::System::Boolean _initialised; // 0x28
		::System::Boolean _forEncryption; // 0x29

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_RESET_OFFSET))(nullptr);
		}

		::System::Int32 encryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_ENCRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 decryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_DECRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void setKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_XTEAENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

	};
}

