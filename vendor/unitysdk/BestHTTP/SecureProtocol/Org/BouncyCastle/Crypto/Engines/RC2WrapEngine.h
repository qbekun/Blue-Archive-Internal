#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes { class CbcBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ParametersWithIV; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x703300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_UNWRAP_OFFSET UNITYSDK_OFFSET(0x703670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_WRAP_OFFSET UNITYSDK_OFFSET(0x703D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_CHECKCMSKEYCHECKSUM_OFFSET UNITYSDK_OFFSET(0x703D10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7043F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_CALCULATECMSKEYCHECKSUM_OFFSET UNITYSDK_OFFSET(0x704270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x704480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x704520)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int RC2WrapEngine_TypeDefinitionIndex = 22515;

	class RC2WrapEngine : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* engine; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* paramPlusIV; // 0x20
		::Il2CppArray<::System::Object*>* iv; // 0x28
		::System::Boolean forWrapping; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* sr; // 0x38
		::Il2CppArray<::System::Object*>* IV2; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* sha1; // 0x40
		::Il2CppArray<::System::Object*>* digest; // 0x48

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Unwrap(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_UNWRAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Wrap(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_WRAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CheckCmsKeyChecksum(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_CHECKCMSKEYCHECKSUM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CalculateCmsKeyChecksum(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_CALCULATECMSKEYCHECKSUM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_RC2WRAPENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

	};
}

