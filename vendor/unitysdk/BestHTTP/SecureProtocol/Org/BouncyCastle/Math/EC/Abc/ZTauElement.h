#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_ZTAUELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x5E4B50)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc
{
	inline static constexpr unsigned int ZTauElement_TypeDefinitionIndex = 22001;

	class ZTauElement : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* u; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* v; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_ZTAUELEMENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

