#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1StreamParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class IAsn1Convertible; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERAPPLICATIONSPECIFICPARSER_READOBJECT_OFFSET UNITYSDK_OFFSET(0x7CC130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERAPPLICATIONSPECIFICPARSER_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7CC160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERAPPLICATIONSPECIFICPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CB6C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int BerApplicationSpecificParser_TypeDefinitionIndex = 22765;

	class BerApplicationSpecificParser : public Il2CppObject
	{
	public:
		::System::Int32 tag; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser* parser; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERAPPLICATIONSPECIFICPARSER_READOBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERAPPLICATIONSPECIFICPARSER_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERAPPLICATIONSPECIFICPARSER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

