#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1StreamParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class IAsn1Convertible; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERTAGGEDOBJECTPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D09F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERTAGGEDOBJECTPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CB700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERTAGGEDOBJECTPARSER_GET_ISCONSTRUCTED_OFFSET UNITYSDK_OFFSET(0x7D0A90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERTAGGEDOBJECTPARSER_GET_TAGNO_OFFSET UNITYSDK_OFFSET(0x7D0AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERTAGGEDOBJECTPARSER_GETOBJECTPARSER_OFFSET UNITYSDK_OFFSET(0x7D0AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERTAGGEDOBJECTPARSER_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7D0B60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int BerTaggedObjectParser_TypeDefinitionIndex = 22781;

	class BerTaggedObjectParser : public Il2CppObject
	{
	public:
		::System::Boolean _constructed; // 0x10
		::System::Int32 _tagNumber; // 0x14
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser* _parser; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERTAGGEDOBJECTPARSER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERTAGGEDOBJECTPARSER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsConstructed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERTAGGEDOBJECTPARSER_GET_ISCONSTRUCTED_OFFSET))(nullptr);
		}

		::System::Int32 get_TagNo()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERTAGGEDOBJECTPARSER_GET_TAGNO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible* GetObjectParser(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERTAGGEDOBJECTPARSER_GETOBJECTPARSER_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERTAGGEDOBJECTPARSER_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

