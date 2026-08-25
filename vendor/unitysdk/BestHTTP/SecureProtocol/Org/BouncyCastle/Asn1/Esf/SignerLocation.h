#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500 { class DirectoryString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerUtf8String; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class SignerLocation; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8627A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x862BF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x862CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x862D40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x862D90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x862E30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GET_LOCALITY_OFFSET UNITYSDK_OFFSET(0x862E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GETPOSTAL_OFFSET UNITYSDK_OFFSET(0x862E50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GET_COUNTRYNAME_OFFSET UNITYSDK_OFFSET(0x862F70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GET_LOCALITYNAME_OFFSET UNITYSDK_OFFSET(0x862FE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GET_POSTALADDRESS_OFFSET UNITYSDK_OFFSET(0x863050)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x863060)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf
{
	inline static constexpr unsigned int SignerLocation_TypeDefinitionIndex = 23138;

	class SignerLocation : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* countryName; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* localityName; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* postalAddress; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SignerLocation* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::SignerLocation*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* get_Country()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GET_COUNTRY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* get_Locality()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GET_LOCALITY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPostal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GETPOSTAL_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String* get_CountryName()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GET_COUNTRYNAME_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String* get_LocalityName()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GET_LOCALITYNAME_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* get_PostalAddress()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_GET_POSTALADDRESS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_SIGNERLOCATION_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

