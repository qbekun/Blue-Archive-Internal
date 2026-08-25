#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class DistributionPointName; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralNames; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7F2560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7F2A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F2C40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F2C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_GET_POINTTYPE_OFFSET UNITYSDK_OFFSET(0x7F2CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x7F2CD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F2BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7F2CE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7F2D50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_APPENDOBJECT_OFFSET UNITYSDK_OFFSET(0x7F2EB0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int DistributionPointName_TypeDefinitionIndex = 22888;

	class DistributionPointName : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* name; // 0x10
		::System::Int32 type; // 0x18
		::System::Int32 FullName; // 0x0
		::System::Int32 NameRelativeToCrlIssuer; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPointName* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPointName*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPointName* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPointName*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PointType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_GET_POINTTYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Name()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void appendObject(::System::Text::StringBuilder* arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISTRIBUTIONPOINTNAME_APPENDOBJECT_OFFSET))(arg, str, str, str, nullptr);
		}

	};
}

