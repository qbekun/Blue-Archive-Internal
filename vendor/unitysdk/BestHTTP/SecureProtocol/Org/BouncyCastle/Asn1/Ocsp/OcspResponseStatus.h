#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerEnumerated; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_OCSPRESPONSESTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x83EDE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_OCSPRESPONSESTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x83EC10)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp
{
	inline static constexpr unsigned int OcspResponseStatus_TypeDefinitionIndex = 23059;

	class OcspResponseStatus : public Il2CppObject
	{
	public:
		::System::Int32 Successful; // 0x0
		::System::Int32 MalformedRequest; // 0x0
		::System::Int32 InternalError; // 0x0
		::System::Int32 TryLater; // 0x0
		::System::Int32 SignatureRequired; // 0x0
		::System::Int32 Unauthorized; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_OCSPRESPONSESTATUS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerEnumerated* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerEnumerated*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_OCSPRESPONSESTATUS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

