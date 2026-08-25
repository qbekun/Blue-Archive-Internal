#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X25519PUBLICKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x695B00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X25519PUBLICKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x695DD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X25519PUBLICKEYPARAMETERS_ENCODE_OFFSET UNITYSDK_OFFSET(0x695D00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X25519PUBLICKEYPARAMETERS_GETENCODED_OFFSET UNITYSDK_OFFSET(0x695ED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X25519PUBLICKEYPARAMETERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x695F20)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int X25519PublicKeyParameters_TypeDefinitionIndex = 22375;

	class X25519PublicKeyParameters : public ::UnityEngine::Animations::Rigging::WeightedTransformArrayBinder
	{
	public:
		::System::Int32 KeySize; // 0x0
		::Il2CppArray<::System::Object*>* data; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X25519PUBLICKEYPARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X25519PUBLICKEYPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Encode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X25519PUBLICKEYPARAMETERS_ENCODE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X25519PUBLICKEYPARAMETERS_GETENCODED_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_X25519PUBLICKEYPARAMETERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

