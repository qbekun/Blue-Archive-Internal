#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines { class Dstu7624Engine; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DSTU7624WRAPENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x6F6180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DSTU7624WRAPENGINE_UNWRAP_OFFSET UNITYSDK_OFFSET(0x6F62B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DSTU7624WRAPENGINE_WRAP_OFFSET UNITYSDK_OFFSET(0x6F6D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DSTU7624WRAPENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6F7650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DSTU7624WRAPENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6F7680)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int Dstu7624WrapEngine_TypeDefinitionIndex = 22503;

	class Dstu7624WrapEngine : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* param; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* engine; // 0x18
		::System::Boolean forWrapping; // 0x20
		::System::Int32 blockSize; // 0x24

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DSTU7624WRAPENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Unwrap(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DSTU7624WRAPENGINE_UNWRAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Wrap(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DSTU7624WRAPENGINE_WRAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DSTU7624WRAPENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_DSTU7624WRAPENGINE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

