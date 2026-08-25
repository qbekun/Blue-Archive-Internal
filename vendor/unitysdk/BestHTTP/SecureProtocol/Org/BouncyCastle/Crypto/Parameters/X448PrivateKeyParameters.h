#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class X448PublicKeyParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x695F70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x696010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6960D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_ENCODE_OFFSET UNITYSDK_OFFSET(0x6961D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_GETENCODED_OFFSET UNITYSDK_OFFSET(0x696250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_GENERATEPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x6962A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_GENERATESECRET_OFFSET UNITYSDK_OFFSET(0x696400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6965C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int X448PrivateKeyParameters_TypeDefinitionIndex = 22377;

	class X448PrivateKeyParameters : public ::UnityEngine::Animations::Rigging::WeightedTransformArrayBinder
	{
	public:
		::System::Int32 KeySize; // 0x0
		::System::Int32 SecretSize; // 0x4
		::Il2CppArray<::System::Object*>* data; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Encode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_ENCODE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_GETENCODED_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters* GeneratePublicKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_GENERATEPUBLICKEY_OFFSET))(nullptr);
		}

		::System::Void GenerateSecret(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_GENERATESECRET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X448PRIVATEKEYPARAMETERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

