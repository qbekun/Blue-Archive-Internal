#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class NameConstraints; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerSequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7F9480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F9610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F9970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F99E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_CREATESEQUENCE_OFFSET UNITYSDK_OFFSET(0x7F9A50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_GET_PERMITTEDSUBTREES_OFFSET UNITYSDK_OFFSET(0x7F9D20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_GET_EXCLUDEDSUBTREES_OFFSET UNITYSDK_OFFSET(0x7F9D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7F9D40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int NameConstraints_TypeDefinitionIndex = 22900;

	class NameConstraints : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* permitted; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* excluded; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::NameConstraints* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::NameConstraints*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::ArrayList* arg, ::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IList* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSequence* CreateSequence(::System::Collections::IList* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSequence*(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_CREATESEQUENCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* get_PermittedSubtrees()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_GET_PERMITTEDSUBTREES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* get_ExcludedSubtrees()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_GET_EXCLUDEDSUBTREES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_NAMECONSTRAINTS_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

