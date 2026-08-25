#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROUTPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CC9A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROUTPUTSTREAM_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x7CE5E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int BerOutputStream_TypeDefinitionIndex = 22773;

	class BerOutputStream : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROUTPUTSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BEROUTPUTSTREAM_WRITEOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

