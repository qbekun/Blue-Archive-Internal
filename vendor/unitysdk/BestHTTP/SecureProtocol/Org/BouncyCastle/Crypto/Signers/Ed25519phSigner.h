#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Ed25519PrivateKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Ed25519PublicKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x66D610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x66D6D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x66D770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x66D920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_RESET_OFFSET UNITYSDK_OFFSET(0x66D950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_GENERATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x66D9F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_INIT_OFFSET UNITYSDK_OFFSET(0x66DC40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x66DDF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers
{
	inline static constexpr unsigned int Ed25519phSigner_TypeDefinitionIndex = 22253;

	class Ed25519phSigner : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* prehash; // 0x10
		::Il2CppArray<::System::Object*>* context; // 0x18
		::System::Boolean forSigning; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey; // 0x30

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_VERIFYSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_RESET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSignature()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_GENERATESIGNATURE_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ED25519PHSIGNER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

