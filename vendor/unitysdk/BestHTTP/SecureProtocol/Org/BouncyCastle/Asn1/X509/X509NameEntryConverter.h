#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMEENTRYCONVERTER_GETCONVERTEDVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMEENTRYCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x811230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMEENTRYCONVERTER_CONVERTHEXENCODED_OFFSET UNITYSDK_OFFSET(0x811240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMEENTRYCONVERTER_CANBEPRINTABLE_OFFSET UNITYSDK_OFFSET(0x8112B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int X509NameEntryConverter_TypeDefinitionIndex = 22938;

	class X509NameEntryConverter : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* GetConvertedValue(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMEENTRYCONVERTER_GETCONVERTEDVALUE_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMEENTRYCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ConvertHexEncoded(::System::String* str, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMEENTRYCONVERTER_CONVERTHEXENCODED_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean CanBePrintable(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMEENTRYCONVERTER_CANBEPRINTABLE_OFFSET))(str, nullptr);
		}

	};
}

