#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectKeyIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectPublicKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7FE5C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7FE5E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_FROMEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x7FE820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FE8C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FE7E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FE7A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_GETKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x7FEB70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7FEBC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_CREATESHA1KEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x7FEC80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_CREATETRUNCATEDSHA1KEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x7FECF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_GETDIGEST_OFFSET UNITYSDK_OFFSET(0x7FE980)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int SubjectKeyIdentifier_TypeDefinitionIndex = 22913;

	class SubjectKeyIdentifier : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::Il2CppArray<::System::Object*>* keyIdentifier; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* FromExtensions(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_FROMEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetKeyIdentifier()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_GETKEYIDENTIFIER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* CreateSha1KeyIdentifier(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_CREATESHA1KEYIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* CreateTruncatedSha1KeyIdentifier(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_CREATETRUNCATEDSHA1KEYIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDigest(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTKEYIDENTIFIER_GETDIGEST_OFFSET))(arg, nullptr);
		}

	};
}

