#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1OCTETSTRINGPARSER_GETOCTETSTREAM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int Asn1OctetStringParser_TypeDefinitionIndex = 22750;

	class Asn1OctetStringParser : public Il2CppObject
	{
	public:
		::System::IO::Stream* GetOctetStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1OCTETSTRINGPARSER_GETOCTETSTREAM_OFFSET))(nullptr);
		}

	};
}

