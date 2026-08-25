#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao { class DataGroupHash; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_DATAGROUPHASH_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x84EA70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_DATAGROUPHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x84EB10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_DATAGROUPHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x84EC20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_DATAGROUPHASH_GET_DATAGROUPNUMBER_OFFSET UNITYSDK_OFFSET(0x84ECB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_DATAGROUPHASH_GET_DATAGROUPHASHVALUE_OFFSET UNITYSDK_OFFSET(0x84ECD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_DATAGROUPHASH_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x84ECE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao
{
	inline static constexpr unsigned int DataGroupHash_TypeDefinitionIndex = 23096;

	class DataGroupHash : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* dataGroupNumber; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* dataGroupHashValue; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::DataGroupHash* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::DataGroupHash*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_DATAGROUPHASH_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_DATAGROUPHASH_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_DATAGROUPHASH_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_DataGroupNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_DATAGROUPHASH_GET_DATAGROUPNUMBER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_DataGroupHashValue()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_DATAGROUPHASH_GET_DATAGROUPHASHVALUE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_DATAGROUPHASH_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

