#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERSEQUENCEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CF1A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERSEQUENCEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CF1D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int BerSequenceGenerator_TypeDefinitionIndex = 22775;

	class BerSequenceGenerator : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERSEQUENCEGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_BERSEQUENCEGENERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

