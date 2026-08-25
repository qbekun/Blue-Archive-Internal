#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVENDOMORPHISM_DECOMPOSESCALAR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo
{
	inline static constexpr unsigned int GlvEndomorphism_TypeDefinitionIndex = 21853;

	class GlvEndomorphism : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* DecomposeScalar(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVENDOMORPHISM_DECOMPOSESCALAR_OFFSET))(arg, nullptr);
		}

	};
}

