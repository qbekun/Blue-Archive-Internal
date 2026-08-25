#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND3PAYLOAD_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x786130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND3PAYLOAD_GET_MACTAG_OFFSET UNITYSDK_OFFSET(0x786140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND3PAYLOAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x785300)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake
{
	inline static constexpr unsigned int JPakeRound3Payload_TypeDefinitionIndex = 22645;

	class JPakeRound3Payload : public Il2CppObject
	{
	public:
		::System::String* participantId; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* macTag; // 0x18

		::System::String* get_ParticipantId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND3PAYLOAD_GET_PARTICIPANTID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_MacTag()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND3PAYLOAD_GET_MACTAG_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND3PAYLOAD_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

