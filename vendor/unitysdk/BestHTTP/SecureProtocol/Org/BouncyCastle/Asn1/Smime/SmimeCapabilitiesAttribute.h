#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Smime { class SmimeCapabilityVector; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8234B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Smime
{
	inline static constexpr unsigned int SmimeCapabilitiesAttribute_TypeDefinitionIndex = 22982;

	class SmimeCapabilitiesAttribute : public ::UnityEngine::AI::NavMeshBuildSource
	{
	public:
		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIESATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

