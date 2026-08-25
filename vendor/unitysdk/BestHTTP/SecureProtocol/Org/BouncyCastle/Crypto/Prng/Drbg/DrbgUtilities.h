#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_DRBGUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6858C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_DRBGUTILITIES_GETMAXSECURITYSTRENGTH_OFFSET UNITYSDK_OFFSET(0x685E10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_DRBGUTILITIES_GETMAXSECURITYSTRENGTH_OFFSET UNITYSDK_OFFSET(0x685FB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_DRBGUTILITIES_HASHDF_OFFSET UNITYSDK_OFFSET(0x686160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_DRBGUTILITIES_ISTOOLARGE_OFFSET UNITYSDK_OFFSET(0x6858A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_DRBGUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x686830)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg
{
	inline static constexpr unsigned int DrbgUtilities_TypeDefinitionIndex = 22297;

	class DrbgUtilities : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* maxSecurityStrengths; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_DRBGUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxSecurityStrength(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_DRBGUTILITIES_GETMAXSECURITYSTRENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxSecurityStrength(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_DRBGUTILITIES_GETMAXSECURITYSTRENGTH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HashDF(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_DRBGUTILITIES_HASHDF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsTooLarge(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_DRBGUTILITIES_ISTOOLARGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_DRBG_DRBGUTILITIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

