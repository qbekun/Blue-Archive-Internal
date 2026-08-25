#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class IAsn1Convertible; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define ASN1SETPARSERIMPL_READOBJECT_OFFSET UNITYSDK_OFFSET(0x7C9CF0)
#define ASN1SETPARSERIMPL_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C98E0)
#define ASN1SETPARSERIMPL_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7C9DF0)

	inline static constexpr unsigned int Asn1SetParserImpl_TypeDefinitionIndex = 22756;

	class Asn1SetParserImpl : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* outer; // 0x10
		::System::Int32 max; // 0x18
		::System::Int32 index; // 0x1C

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASN1SETPARSERIMPL_READOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::PVOID))((::PBYTE)hIl2Cpp + ASN1SETPARSERIMPL_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASN1SETPARSERIMPL_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};

