#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1StreamParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class IAsn1Convertible; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETPARSER_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7DAEF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CA5C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETPARSER_READOBJECT_OFFSET UNITYSDK_OFFSET(0x7DAF60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerSetParser_TypeDefinitionIndex = 22809;

	class DerSetParser : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser* _parser; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETPARSER_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERSETPARSER_READOBJECT_OFFSET))(nullptr);
		}

	};
}

