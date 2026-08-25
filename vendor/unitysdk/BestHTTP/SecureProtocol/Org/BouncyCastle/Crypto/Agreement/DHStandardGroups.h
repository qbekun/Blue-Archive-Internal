#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_DHSTANDARDGROUPS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x77AF40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_DHSTANDARDGROUPS_FROMPG_OFFSET UNITYSDK_OFFSET(0x77BAC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_DHSTANDARDGROUPS_FROMPGQ_OFFSET UNITYSDK_OFFSET(0x77BB60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_DHSTANDARDGROUPS_FROMHEX_OFFSET UNITYSDK_OFFSET(0x77BD00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_DHSTANDARDGROUPS_RFC7919PARAMETERS_OFFSET UNITYSDK_OFFSET(0x77BC10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_DHSTANDARDGROUPS_.CTOR_OFFSET UNITYSDK_OFFSET(0x77BD90)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement
{
	inline static constexpr unsigned int DHStandardGroups_TypeDefinitionIndex = 22622;

	class DHStandardGroups : public Il2CppObject
	{
	public:
		::System::String* rfc2409_768_p; // 0x0
		::System::String* rfc2409_768_g; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc2409_768; // 0x10
		::System::String* rfc2409_1024_p; // 0x18
		::System::String* rfc2409_1024_g; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc2409_1024; // 0x28
		::System::String* rfc3526_1536_p; // 0x30
		::System::String* rfc3526_1536_g; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_1536; // 0x40
		::System::String* rfc3526_2048_p; // 0x48
		::System::String* rfc3526_2048_g; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_2048; // 0x58
		::System::String* rfc3526_3072_p; // 0x60
		::System::String* rfc3526_3072_g; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_3072; // 0x70
		::System::String* rfc3526_4096_p; // 0x78
		::System::String* rfc3526_4096_g; // 0x80
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_4096; // 0x88
		::System::String* rfc3526_6144_p; // 0x90
		::System::String* rfc3526_6144_g; // 0x98
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_6144; // 0xA0
		::System::String* rfc3526_8192_p; // 0xA8
		::System::String* rfc3526_8192_g; // 0xB0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_8192; // 0xB8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc4306_768; // 0xC0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc4306_1024; // 0xC8
		::System::String* rfc5114_1024_160_p; // 0xD0
		::System::String* rfc5114_1024_160_g; // 0xD8
		::System::String* rfc5114_1024_160_q; // 0xE0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc5114_1024_160; // 0xE8
		::System::String* rfc5114_2048_224_p; // 0xF0
		::System::String* rfc5114_2048_224_g; // 0xF8
		::System::String* rfc5114_2048_224_q; // 0x100
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc5114_2048_224; // 0x108
		::System::String* rfc5114_2048_256_p; // 0x110
		::System::String* rfc5114_2048_256_g; // 0x118
		::System::String* rfc5114_2048_256_q; // 0x120
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc5114_2048_256; // 0x128
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc5996_768; // 0x130
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc5996_1024; // 0x138
		::System::String* rfc7919_ffdhe2048_p; // 0x140
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe2048; // 0x148
		::System::String* rfc7919_ffdhe3072_p; // 0x150
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe3072; // 0x158
		::System::String* rfc7919_ffdhe4096_p; // 0x160
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe4096; // 0x168
		::System::String* rfc7919_ffdhe6144_p; // 0x170
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe6144; // 0x178
		::System::String* rfc7919_ffdhe8192_p; // 0x180
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe8192; // 0x188

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_DHSTANDARDGROUPS_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* FromPG(::System::String* str, ::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_DHSTANDARDGROUPS_FROMPG_OFFSET))(str, str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* FromPGQ(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_DHSTANDARDGROUPS_FROMPGQ_OFFSET))(str, str, str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* FromHex(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_DHSTANDARDGROUPS_FROMHEX_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* Rfc7919Parameters(::System::String* str, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_DHSTANDARDGROUPS_RFC7919PARAMETERS_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_DHSTANDARDGROUPS_.CTOR_OFFSET))(nullptr);
		}

	};
}

