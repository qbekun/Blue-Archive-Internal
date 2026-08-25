#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IEntropySourceProvider; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng { class SP800SecureRandomBuilder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng { class SP800SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x680300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x680360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x680410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_SETPERSONALIZATIONSTRING_OFFSET UNITYSDK_OFFSET(0x680460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_SETSECURITYSTRENGTH_OFFSET UNITYSDK_OFFSET(0x680480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_SETENTROPYBITSREQUIRED_OFFSET UNITYSDK_OFFSET(0x680490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_BUILDHASH_OFFSET UNITYSDK_OFFSET(0x6804A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_BUILDCTR_OFFSET UNITYSDK_OFFSET(0x6806E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_BUILDHMAC_OFFSET UNITYSDK_OFFSET(0x680940)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	inline static constexpr unsigned int SP800SecureRandomBuilder_TypeDefinitionIndex = 22289;

	class SP800SecureRandomBuilder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* mRandom; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySourceProvider* mEntropySourceProvider; // 0x18
		::Il2CppArray<::System::Object*>* mPersonalizationString; // 0x20
		::System::Int32 mSecurityStrength; // 0x28
		::System::Int32 mEntropyBitsRequired; // 0x2C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySourceProvider* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySourceProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* SetPersonalizationString(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_SETPERSONALIZATIONSTRING_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* SetSecurityStrength(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_SETSECURITYSTRENGTH_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* SetEntropyBitsRequired(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_SETENTROPYBITSREQUIRED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* BuildHash(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_BUILDHASH_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* BuildCtr(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_BUILDCTR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* BuildHMac(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PRNG_SP800SECURERANDOMBUILDER_BUILDHMAC_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

