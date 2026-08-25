#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extension; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETEXTENSION_OFFSET UNITYSDK_OFFSET(0x8063B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETEXTENSIONPARSEDVALUE_OFFSET UNITYSDK_OFFSET(0x7ED700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x8063F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7EC7B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x806450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x806C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x806C90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x804190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x807270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x807280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x8077B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_OIDS_OFFSET UNITYSDK_OFFSET(0x807C90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GET_EXTENSIONOIDS_OFFSET UNITYSDK_OFFSET(0x807D70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETEXTENSION_OFFSET UNITYSDK_OFFSET(0x805080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETEXTENSIONPARSEDVALUE_OFFSET UNITYSDK_OFFSET(0x8063C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x807DD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_EQUIVALENT_OFFSET UNITYSDK_OFFSET(0x808400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETEXTENSIONOIDS_OFFSET UNITYSDK_OFFSET(0x808A20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETNONCRITICALEXTENSIONOIDS_OFFSET UNITYSDK_OFFSET(0x808B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETCRITICALEXTENSIONOIDS_OFFSET UNITYSDK_OFFSET(0x8090E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETEXTENSIONOIDS_OFFSET UNITYSDK_OFFSET(0x808BA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_TOOIDARRAY_OFFSET UNITYSDK_OFFSET(0x808A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8090F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int X509Extensions_TypeDefinitionIndex = 22935;

	class X509Extensions : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectDirectoryAttributes; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectKeyIdentifier; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* KeyUsage; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* PrivateKeyUsagePeriod; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectAlternativeName; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IssuerAlternativeName; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* BasicConstraints; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* CrlNumber; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* ReasonCode; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* InstructionCode; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* InvalidityDate; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* DeltaCrlIndicator; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IssuingDistributionPoint; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* CertificateIssuer; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* NameConstraints; // 0x70
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* CrlDistributionPoints; // 0x78
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* CertificatePolicies; // 0x80
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* PolicyMappings; // 0x88
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuthorityKeyIdentifier; // 0x90
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* PolicyConstraints; // 0x98
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* ExtendedKeyUsage; // 0xA0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* FreshestCrl; // 0xA8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* InhibitAnyPolicy; // 0xB0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuthorityInfoAccess; // 0xB8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* SubjectInfoAccess; // 0xC0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* LogoType; // 0xC8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* BiometricInfo; // 0xD0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* QCStatements; // 0xD8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* AuditIdentity; // 0xE0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* NoRevAvail; // 0xE8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* TargetInformation; // 0xF0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* ExpiredCertsOnCrl; // 0xF8
		::System::Collections::IDictionary* extensions; // 0x10
		::System::Collections::IList* ordering; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extension* GetExtension(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extension*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETEXTENSION_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GetExtensionParsedValue(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETEXTENSIONPARSEDVALUE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IList* arg, ::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IList* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::Hashtable* arg)
		{
			((::System::Void(*)(::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::ArrayList* arg, ::System::Collections::Hashtable* arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::ArrayList* arg, ::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* Oids()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_OIDS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerable* get_ExtensionOids()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GET_EXTENSIONOIDS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extension* GetExtension(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extension*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETEXTENSION_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GetExtensionParsedValue(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETEXTENSIONPARSEDVALUE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::Boolean Equivalent(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_EQUIVALENT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetExtensionOids()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETEXTENSIONOIDS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNonCriticalExtensionOids()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETNONCRITICALEXTENSIONOIDS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCriticalExtensionOids()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETCRITICALEXTENSIONOIDS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetExtensionOids(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_GETEXTENSIONOIDS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToOidArray(::System::Collections::IList* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_TOOIDARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509EXTENSIONS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

