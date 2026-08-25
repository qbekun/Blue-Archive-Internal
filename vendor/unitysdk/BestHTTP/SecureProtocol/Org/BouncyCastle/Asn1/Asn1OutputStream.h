#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1OUTPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C7E00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1OUTPUTSTREAM_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x7C7E20)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int Asn1OutputStream_TypeDefinitionIndex = 22751;

	class Asn1OutputStream : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1OUTPUTSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1OUTPUTSTREAM_WRITEOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

