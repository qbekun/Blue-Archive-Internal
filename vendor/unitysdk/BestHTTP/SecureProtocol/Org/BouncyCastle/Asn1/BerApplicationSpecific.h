#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERAPPLICATIONSPECIFIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CBF30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int BerApplicationSpecific_TypeDefinitionIndex = 22764;

	class BerApplicationSpecific : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERAPPLICATIONSPECIFIC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

