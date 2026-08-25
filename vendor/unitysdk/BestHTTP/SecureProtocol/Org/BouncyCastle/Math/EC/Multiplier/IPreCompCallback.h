#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class PreCompInfo; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_IPRECOMPCALLBACK_PRECOMPUTE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier
{
	inline static constexpr unsigned int IPreCompCallback_TypeDefinitionIndex = 21829;

	class IPreCompCallback : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_IPRECOMPCALLBACK_PRECOMPUTE_OFFSET))(arg, nullptr);
		}

	};
}

