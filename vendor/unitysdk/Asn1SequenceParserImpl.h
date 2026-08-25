#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class IAsn1Convertible; }

#define ASN1SEQUENCEPARSERIMPL_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7C89C0)
#define ASN1SEQUENCEPARSERIMPL_READOBJECT_OFFSET UNITYSDK_OFFSET(0x7C89D0)
#define ASN1SEQUENCEPARSERIMPL_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C86C0)

	inline static constexpr unsigned int Asn1SequenceParserImpl_TypeDefinitionIndex = 22753;

	class Asn1SequenceParserImpl : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* outer; // 0x10
		::System::Int32 max; // 0x18
		::System::Int32 index; // 0x1C

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASN1SEQUENCEPARSERIMPL_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASN1SEQUENCEPARSERIMPL_READOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + ASN1SEQUENCEPARSERIMPL_.CTOR_OFFSET))(arg, nullptr);
		}

	};

