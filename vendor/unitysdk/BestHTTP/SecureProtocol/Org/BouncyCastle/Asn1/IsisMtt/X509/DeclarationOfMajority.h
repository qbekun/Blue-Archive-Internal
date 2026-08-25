#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerGeneralizedTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509 { class DeclarationOfMajority; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x849770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x849820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x849A90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x849B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x849CB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x849D70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x849D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_GET_NOTYOUNGERTHAN_OFFSET UNITYSDK_OFFSET(0x849DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_GET_FULLAGEATCOUNTRY_OFFSET UNITYSDK_OFFSET(0x849DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_GET_DATEOFBIRTH_OFFSET UNITYSDK_OFFSET(0x849E10)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509
{
	inline static constexpr unsigned int DeclarationOfMajority_TypeDefinitionIndex = 23086;

	class DeclarationOfMajority : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* declaration; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_TOASN1OBJECT_OFFSET))(nullptr);
		}

		Choice* get_Type()
		{
			return (return (Choice*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_NotYoungerThan()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_GET_NOTYOUNGERTHAN_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* get_FullAgeAtCountry()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_GET_FULLAGEATCOUNTRY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_DateOfBirth()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_DECLARATIONOFMAJORITY_GET_DATEOFBIRTH_OFFSET))(nullptr);
		}

	};
}

