#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1PARSINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C7FD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1PARSINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C7FE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1PARSINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C7FF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int Asn1ParsingException_TypeDefinitionIndex = 22752;

	class Asn1ParsingException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1PARSINGEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1PARSINGEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1PARSINGEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

