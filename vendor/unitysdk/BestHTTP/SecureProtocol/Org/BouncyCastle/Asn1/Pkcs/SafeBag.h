#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class SafeBag; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x83A1C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_.CTOR_OFFSET UNITYSDK_OFFSET(0x83A490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_.CTOR_OFFSET UNITYSDK_OFFSET(0x83A4F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_.CTOR_OFFSET UNITYSDK_OFFSET(0x83A260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_GET_BAGID_OFFSET UNITYSDK_OFFSET(0x83A550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_GET_BAGVALUE_OFFSET UNITYSDK_OFFSET(0x83A560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_GET_BAGATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x83A570)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x83A580)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs
{
	inline static constexpr unsigned int SafeBag_TypeDefinitionIndex = 23047;

	class SafeBag : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* bagID; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* bagValue; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* bagAttributes; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::SafeBag* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::SafeBag*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_BagID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_GET_BAGID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* get_BagValue()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_GET_BAGVALUE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* get_BagAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_GET_BAGATTRIBUTES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_SAFEBAG_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

