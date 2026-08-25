#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500 { class Rdn; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500 { class AttributeTypeAndValue; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_DECODEOBJECT_OFFSET UNITYSDK_OFFSET(0x816810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_STRIPINTERNALSPACES_OFFSET UNITYSDK_OFFSET(0x8169A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_CANONICALSTRING_OFFSET UNITYSDK_OFFSET(0x816AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x817250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_CANONICALIZE_OFFSET UNITYSDK_OFFSET(0x816FC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_RDNAREEQUAL_OFFSET UNITYSDK_OFFSET(0x817260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_ATVAREEQUAL_OFFSET UNITYSDK_OFFSET(0x817340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_VALUETOSTRING_OFFSET UNITYSDK_OFFSET(0x816AE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::Style
{
	inline static constexpr unsigned int IetfUtilities_TypeDefinitionIndex = 22955;

	class IetfUtilities : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* DecodeObject(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_DECODEOBJECT_OFFSET))(str, nullptr);
		}

		::System::String* StripInternalSpaces(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_STRIPINTERNALSPACES_OFFSET))(str, nullptr);
		}

		::System::String* CanonicalString(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_CANONICALSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::String* Canonicalize(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_CANONICALIZE_OFFSET))(str, nullptr);
		}

		::System::Boolean RdnAreEqual(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::Rdn* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::Rdn* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::Rdn*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::Rdn*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_RDNAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AtvAreEqual(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_ATVAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ValueToString(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X500_STYLE_IETFUTILITIES_VALUETOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

