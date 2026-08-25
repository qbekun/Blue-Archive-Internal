#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes { class CbcBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ParametersWithIV; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RFC3211WRAPENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x707E20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RFC3211WRAPENGINE_WRAP_OFFSET UNITYSDK_OFFSET(0x707EF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RFC3211WRAPENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x708190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RFC3211WRAPENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7083E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RFC3211WRAPENGINE_UNWRAP_OFFSET UNITYSDK_OFFSET(0x708460)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int Rfc3211WrapEngine_TypeDefinitionIndex = 22520;

	class Rfc3211WrapEngine : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* engine; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* param; // 0x18
		::System::Boolean forWrapping; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* rand; // 0x28

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RFC3211WRAPENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Wrap(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RFC3211WRAPENGINE_WRAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RFC3211WRAPENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RFC3211WRAPENGINE_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Unwrap(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RFC3211WRAPENGINE_UNWRAP_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

