#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509DEFAULTENTRYCONVERTER_GETCONVERTEDVALUE_OFFSET UNITYSDK_OFFSET(0x805DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509DEFAULTENTRYCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8061F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int X509DefaultEntryConverter_TypeDefinitionIndex = 22933;

	class X509DefaultEntryConverter : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* GetConvertedValue(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509DEFAULTENTRYCONVERTER_GETCONVERTEDVALUE_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509DEFAULTENTRYCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

