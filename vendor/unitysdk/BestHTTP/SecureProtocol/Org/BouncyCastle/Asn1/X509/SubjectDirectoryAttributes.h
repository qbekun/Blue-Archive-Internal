#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectDirectoryAttributes; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTDIRECTORYATTRIBUTES_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7FDC80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTDIRECTORYATTRIBUTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FDE10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTDIRECTORYATTRIBUTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FE190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTDIRECTORYATTRIBUTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FE200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTDIRECTORYATTRIBUTES_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7FE270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTDIRECTORYATTRIBUTES_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x7FE560)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int SubjectDirectoryAttributes_TypeDefinitionIndex = 22912;

	class SubjectDirectoryAttributes : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::System::Collections::IList* attributes; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectDirectoryAttributes*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTDIRECTORYATTRIBUTES_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTDIRECTORYATTRIBUTES_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTDIRECTORYATTRIBUTES_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTDIRECTORYATTRIBUTES_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTDIRECTORYATTRIBUTES_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerable* get_Attributes()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_SUBJECTDIRECTORYATTRIBUTES_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

	};
}

