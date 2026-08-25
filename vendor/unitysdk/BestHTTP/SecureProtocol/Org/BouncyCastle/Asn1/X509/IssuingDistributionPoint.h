#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class DistributionPointName; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class ReasonFlags; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class IssuingDistributionPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7F7C20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7F7C40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F8120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F7DD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GET_ONLYCONTAINSUSERCERTS_OFFSET UNITYSDK_OFFSET(0x7F84A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GET_ONLYCONTAINSCACERTS_OFFSET UNITYSDK_OFFSET(0x7F84B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GET_ISINDIRECTCRL_OFFSET UNITYSDK_OFFSET(0x7F84C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GET_ONLYCONTAINSATTRIBUTECERTS_OFFSET UNITYSDK_OFFSET(0x7F84D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GET_DISTRIBUTIONPOINT_OFFSET UNITYSDK_OFFSET(0x7F84E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GET_ONLYSOMEREASONS_OFFSET UNITYSDK_OFFSET(0x7F84F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7F8500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7F8510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_APPENDOBJECT_OFFSET UNITYSDK_OFFSET(0x7F8800)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int IssuingDistributionPoint_TypeDefinitionIndex = 22897;

	class IssuingDistributionPoint : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPointName* _distributionPoint; // 0x10
		::System::Boolean _onlyContainsUserCerts; // 0x18
		::System::Boolean _onlyContainsCACerts; // 0x19
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ReasonFlags* _onlySomeReasons; // 0x20
		::System::Boolean _indirectCRL; // 0x28
		::System::Boolean _onlyContainsAttributeCerts; // 0x29
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* seq; // 0x30

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPointName* arg, ::System::Boolean arg, ::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ReasonFlags* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPointName*, ::System::Boolean, ::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ReasonFlags*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_OnlyContainsUserCerts()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GET_ONLYCONTAINSUSERCERTS_OFFSET))(nullptr);
		}

		::System::Boolean get_OnlyContainsCACerts()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GET_ONLYCONTAINSCACERTS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsIndirectCrl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GET_ISINDIRECTCRL_OFFSET))(nullptr);
		}

		::System::Boolean get_OnlyContainsAttributeCerts()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GET_ONLYCONTAINSATTRIBUTECERTS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPointName* get_DistributionPoint()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPointName*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GET_DISTRIBUTIONPOINT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ReasonFlags* get_OnlySomeReasons()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ReasonFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_GET_ONLYSOMEREASONS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void appendObject(::System::Text::StringBuilder* arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_ISSUINGDISTRIBUTIONPOINT_APPENDOBJECT_OFFSET))(arg, str, str, str, nullptr);
		}

	};
}

