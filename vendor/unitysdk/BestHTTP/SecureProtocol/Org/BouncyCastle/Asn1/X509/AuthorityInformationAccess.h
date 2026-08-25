#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AuthorityInformationAccess; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AccessDescription; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralName; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_COPY_OFFSET UNITYSDK_OFFSET(0x7ED2E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7ED360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_FROMEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x7ED5E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7ED400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7ED730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7ED7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7ED890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_GETACCESSDESCRIPTIONS_OFFSET UNITYSDK_OFFSET(0x7ED920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7ED9A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7EDA00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int AuthorityInformationAccess_TypeDefinitionIndex = 22875;

	class AuthorityInformationAccess : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::Il2CppArray<::System::Object*>* descriptions; // 0x10

		::Il2CppArray<::System::Object*>* Copy(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_COPY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess* FromExtensions(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AuthorityInformationAccess*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_FROMEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AccessDescription* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AccessDescription*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAccessDescriptions()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_GETACCESSDESCRIPTIONS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_AUTHORITYINFORMATIONACCESS_TOSTRING_OFFSET))(nullptr);
		}

	};
}

