#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NAMEDCURVE_REFERSTOASPECIFICNAMEDCURVE_OFFSET UNITYSDK_OFFSET(0x6110D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NAMEDCURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6110E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NAMEDCURVE_ISVALID_OFFSET UNITYSDK_OFFSET(0x6110F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int NamedCurve_TypeDefinitionIndex = 22150;

	class NamedCurve : public Il2CppObject
	{
	public:
		::System::Int32 sect163k1; // 0x0
		::System::Int32 sect163r1; // 0x0
		::System::Int32 sect163r2; // 0x0
		::System::Int32 sect193r1; // 0x0
		::System::Int32 sect193r2; // 0x0
		::System::Int32 sect233k1; // 0x0
		::System::Int32 sect233r1; // 0x0
		::System::Int32 sect239k1; // 0x0
		::System::Int32 sect283k1; // 0x0
		::System::Int32 sect283r1; // 0x0
		::System::Int32 sect409k1; // 0x0
		::System::Int32 sect409r1; // 0x0
		::System::Int32 sect571k1; // 0x0
		::System::Int32 sect571r1; // 0x0
		::System::Int32 secp160k1; // 0x0
		::System::Int32 secp160r1; // 0x0
		::System::Int32 secp160r2; // 0x0
		::System::Int32 secp192k1; // 0x0
		::System::Int32 secp192r1; // 0x0
		::System::Int32 secp224k1; // 0x0
		::System::Int32 secp224r1; // 0x0
		::System::Int32 secp256k1; // 0x0
		::System::Int32 secp256r1; // 0x0
		::System::Int32 secp384r1; // 0x0
		::System::Int32 secp521r1; // 0x0
		::System::Int32 brainpoolP256r1; // 0x0
		::System::Int32 brainpoolP384r1; // 0x0
		::System::Int32 brainpoolP512r1; // 0x0
		::System::Int32 arbitrary_explicit_prime_curves; // 0x0
		::System::Int32 arbitrary_explicit_char2_curves; // 0x0

		::System::Boolean RefersToASpecificNamedCurve(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NAMEDCURVE_REFERSTOASPECIFICNAMEDCURVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NAMEDCURVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsValid(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_NAMEDCURVE_ISVALID_OFFSET))(arg, nullptr);
		}

	};
}

