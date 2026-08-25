#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1StreamParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetStringParser; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CONSTRUCTEDOCTETSTREAM_GETNEXTPARSER_OFFSET UNITYSDK_OFFSET(0x7D0C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CONSTRUCTEDOCTETSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CE370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CONSTRUCTEDOCTETSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x7D0D90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CONSTRUCTEDOCTETSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x7D0FA0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int ConstructedOctetStream_TypeDefinitionIndex = 22782;

	class ConstructedOctetStream : public ::TriInspector::ShowInEditModeAttribute
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser* _parser; // 0x30
		::System::Boolean _first; // 0x38
		::System::IO::Stream* _currentStream; // 0x40

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetStringParser* GetNextParser()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetStringParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CONSTRUCTEDOCTETSTREAM_GETNEXTPARSER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1StreamParser*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CONSTRUCTEDOCTETSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CONSTRUCTEDOCTETSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CONSTRUCTEDOCTETSTREAM_READBYTE_OFFSET))(nullptr);
		}

	};
}

