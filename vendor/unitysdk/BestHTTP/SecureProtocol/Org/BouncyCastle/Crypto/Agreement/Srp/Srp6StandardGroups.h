#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Srp6GroupParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6STANDARDGROUPS_FROMHEX_OFFSET UNITYSDK_OFFSET(0x7806C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6STANDARDGROUPS_.CTOR_OFFSET UNITYSDK_OFFSET(0x780750)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6STANDARDGROUPS_FROMNG_OFFSET UNITYSDK_OFFSET(0x780760)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6STANDARDGROUPS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x780800)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp
{
	inline static constexpr unsigned int Srp6StandardGroups_TypeDefinitionIndex = 22633;

	class Srp6StandardGroups : public Il2CppObject
	{
	public:
		::System::String* rfc5054_1024_N; // 0x0
		::System::String* rfc5054_1024_g; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_1024; // 0x0
		::System::String* rfc5054_1536_N; // 0x0
		::System::String* rfc5054_1536_g; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_1536; // 0x8
		::System::String* rfc5054_2048_N; // 0x0
		::System::String* rfc5054_2048_g; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_2048; // 0x10
		::System::String* rfc5054_3072_N; // 0x0
		::System::String* rfc5054_3072_g; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_3072; // 0x18
		::System::String* rfc5054_4096_N; // 0x0
		::System::String* rfc5054_4096_g; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_4096; // 0x20
		::System::String* rfc5054_6144_N; // 0x0
		::System::String* rfc5054_6144_g; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_6144; // 0x28
		::System::String* rfc5054_8192_N; // 0x0
		::System::String* rfc5054_8192_g; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_8192; // 0x30

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* FromHex(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6STANDARDGROUPS_FROMHEX_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6STANDARDGROUPS_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* FromNG(::System::String* str, ::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6STANDARDGROUPS_FROMNG_OFFSET))(str, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6STANDARDGROUPS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

