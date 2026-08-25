#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Ed448PublicKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68ECF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68EDB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68EE70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_ENCODE_OFFSET UNITYSDK_OFFSET(0x68EF70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_GETENCODED_OFFSET UNITYSDK_OFFSET(0x68EFF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_GENERATEPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x68F040)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_SIGN_OFFSET UNITYSDK_OFFSET(0x68F2E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_SIGN_OFFSET UNITYSDK_OFFSET(0x68F330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x68F630)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int Ed448PrivateKeyParameters_TypeDefinitionIndex = 22328;

	class Ed448PrivateKeyParameters : public ::UnityEngine::Animations::Rigging::WeightedTransformArrayBinder
	{
	public:
		::System::Int32 KeySize; // 0x0
		::System::Int32 SignatureSize; // 0x4
		::Il2CppArray<::System::Object*>* data; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* cachedPublicKey; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Encode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_ENCODE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_GETENCODED_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* GeneratePublicKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_GENERATEPUBLICKEY_OFFSET))(nullptr);
		}

		::System::Void Sign(Algorithm* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Algorithm*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_SIGN_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Sign(Algorithm* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Algorithm*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_SIGN_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ED448PRIVATEKEYPARAMETERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

