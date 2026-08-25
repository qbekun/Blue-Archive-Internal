#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified { class SemanticsInformation; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x815490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8155F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8159F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x815A40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x815A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_GET_SEMANTICSIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x815AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_GETNAMEREGISTRATIONAUTHORITIES_OFFSET UNITYSDK_OFFSET(0x815AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x815AC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified
{
	inline static constexpr unsigned int SemanticsInformation_TypeDefinitionIndex = 22950;

	class SemanticsInformation : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier; // 0x10
		::Il2CppArray<::System::Object*>* nameRegistrationAuthorities; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SemanticsIdentifier()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_GET_SEMANTICSIDENTIFIER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNameRegistrationAuthorities()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_GETNAMEREGISTRATIONAUTHORITIES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_SEMANTICSINFORMATION_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

