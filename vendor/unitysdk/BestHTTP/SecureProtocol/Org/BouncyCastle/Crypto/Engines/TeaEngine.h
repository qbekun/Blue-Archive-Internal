#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x71B0D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x71B2C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_ENCRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x71B2D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x71B3B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x71B3D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_SETKEY_OFFSET UNITYSDK_OFFSET(0x71B260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_DECRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x71B3E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x71B4D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x71B4E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x71B510)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int TeaEngine_TypeDefinitionIndex = 22535;

	class TeaEngine : public Il2CppObject
	{
	public:
		::System::Int32 rounds; // 0x0
		::System::Int32 block_size; // 0x0
		::System::UInt32 delta; // 0x0
		::System::UInt32 d_sum; // 0x0
		::System::UInt32 _a; // 0x10
		::System::UInt32 _b; // 0x14
		::System::UInt32 _c; // 0x18
		::System::UInt32 _d; // 0x1C
		::System::Boolean _initialised; // 0x20
		::System::Boolean _forEncryption; // 0x21

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 encryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_ENCRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

		::System::Void setKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 decryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_DECRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_RESET_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TEAENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

