#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_IASN1STRING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int IAsn1String_TypeDefinitionIndex = 22821;

	class IAsn1String : public Il2CppObject
	{
	public:
		::System::String* GetString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_IASN1STRING_GETSTRING_OFFSET))(nullptr);
		}

	};
}

