#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerPrintableString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509 { class MonetaryLimit; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x849E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x849FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x84A110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0x84A210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x84A240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_GET_EXPONENT_OFFSET UNITYSDK_OFFSET(0x84A260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x84A280)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509
{
	inline static constexpr unsigned int MonetaryLimit_TypeDefinitionIndex = 23087;

	class MonetaryLimit : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerPrintableString* currency; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* amount; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* exponent; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* get_Currency()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_GET_CURRENCY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Amount()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Exponent()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_GET_EXPONENT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_MONETARYLIMIT_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

