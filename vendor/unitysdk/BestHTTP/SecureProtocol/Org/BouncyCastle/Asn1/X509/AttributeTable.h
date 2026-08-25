#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AttributeX509; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7ECD70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7ECDE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7ECE50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7ECFA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_GET_OFFSET UNITYSDK_OFFSET(0x7ED130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_TOHASHTABLE_OFFSET UNITYSDK_OFFSET(0x7ED230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_TODICTIONARY_OFFSET UNITYSDK_OFFSET(0x7ED290)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int AttributeTable_TypeDefinitionIndex = 22874;

	class AttributeTable : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* attributes; // 0x10

		::System::Void .ctor(::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::Hashtable* arg)
		{
			((::System::Void(*)(::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeX509* Get(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeX509*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_GET_OFFSET))(arg, nullptr);
		}

		::System::Collections::Hashtable* ToHashtable()
		{
			return (return (::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_TOHASHTABLE_OFFSET))(nullptr);
		}

		::System::Collections::IDictionary* ToDictionary()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ATTRIBUTETABLE_TODICTIONARY_OFFSET))(nullptr);
		}

	};
}

