#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECDomainParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x864BF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_GETOID_OFFSET UNITYSDK_OFFSET(0x867270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_.CTOR_OFFSET UNITYSDK_OFFSET(0x8673B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_GETBYOID_OFFSET UNITYSDK_OFFSET(0x8673C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_CONFIGURECURVE_OFFSET UNITYSDK_OFFSET(0x8671E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_GETNAME_OFFSET UNITYSDK_OFFSET(0x867500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x867630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_GETBYNAME_OFFSET UNITYSDK_OFFSET(0x867750)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_CONFIGUREBASEPOINT_OFFSET UNITYSDK_OFFSET(0x8671F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro
{
	inline static constexpr unsigned int ECGost3410NamedCurves_TypeDefinitionIndex = 23143;

	class ECGost3410NamedCurves : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* objIds; // 0x0
		::System::Collections::IDictionary* parameters; // 0x8
		::System::Collections::IDictionary* names; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_GETOID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GetByOid(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_GETBYOID_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_CONFIGURECURVE_OFFSET))(arg, nullptr);
		}

		::System::String* GetName(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerable* get_Names()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_GET_NAMES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GetByName(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_GETBYNAME_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* ConfigureBasepoint(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRYPTOPRO_ECGOST3410NAMEDCURVES_CONFIGUREBASEPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

