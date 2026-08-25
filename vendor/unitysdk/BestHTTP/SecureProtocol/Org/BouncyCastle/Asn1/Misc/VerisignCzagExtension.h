#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerIA5String; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_VERISIGNCZAGEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x846E90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_VERISIGNCZAGEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x846EF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Misc
{
	inline static constexpr unsigned int VerisignCzagExtension_TypeDefinitionIndex = 23078;

	class VerisignCzagExtension : public Il2CppObject
	{
	public:
		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_VERISIGNCZAGEXTENSION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_VERISIGNCZAGEXTENSION_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

