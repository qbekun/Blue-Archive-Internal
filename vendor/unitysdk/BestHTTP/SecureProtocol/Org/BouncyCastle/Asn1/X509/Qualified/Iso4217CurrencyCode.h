#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified { class Iso4217CurrencyCode; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x814280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x814470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x814680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_GET_ISALPHABETIC_OFFSET UNITYSDK_OFFSET(0x814780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_GET_ALPHABETIC_OFFSET UNITYSDK_OFFSET(0x8147F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_GET_NUMERIC_OFFSET UNITYSDK_OFFSET(0x814870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x8148F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified
{
	inline static constexpr unsigned int Iso4217CurrencyCode_TypeDefinitionIndex = 22946;

	class Iso4217CurrencyCode : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::System::Int32 AlphabeticMaxSize; // 0x0
		::System::Int32 NumericMinSize; // 0x0
		::System::Int32 NumericMaxSize; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* obj; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsAlphabetic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_GET_ISALPHABETIC_OFFSET))(nullptr);
		}

		::System::String* get_Alphabetic()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_GET_ALPHABETIC_OFFSET))(nullptr);
		}

		::System::Int32 get_Numeric()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_GET_NUMERIC_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_ISO4217CURRENCYCODE_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

