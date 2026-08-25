#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro { class Gost3410ParamSetParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_GOST3410NAMEDPARAMETERS_GETBYNAME_OFFSET UNITYSDK_OFFSET(0x868510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_GOST3410NAMEDPARAMETERS_GETOID_OFFSET UNITYSDK_OFFSET(0x868730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_GOST3410NAMEDPARAMETERS_GETBYOID_OFFSET UNITYSDK_OFFSET(0x868870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_GOST3410NAMEDPARAMETERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8689B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_GOST3410NAMEDPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x869230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_GOST3410NAMEDPARAMETERS_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x869240)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro
{
	inline static constexpr unsigned int Gost3410NamedParameters_TypeDefinitionIndex = 23146;

	class Gost3410NamedParameters : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* objIds; // 0x0
		::System::Collections::IDictionary* parameters; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* cryptoProA; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* cryptoProB; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* cryptoProXchA; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* GetByName(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_GOST3410NAMEDPARAMETERS_GETBYNAME_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_GOST3410NAMEDPARAMETERS_GETOID_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* GetByOid(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_GOST3410NAMEDPARAMETERS_GETBYOID_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_GOST3410NAMEDPARAMETERS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_GOST3410NAMEDPARAMETERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerable* get_Names()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_GOST3410NAMEDPARAMETERS_GET_NAMES_OFFSET))(nullptr);
		}

	};
}

