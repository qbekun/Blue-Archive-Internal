#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND2PAYLOAD_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x7860A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND2PAYLOAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x7842A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND2PAYLOAD_GET_KNOWLEDGEPROOFFORX2S_OFFSET UNITYSDK_OFFSET(0x7860B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND2PAYLOAD_GET_A_OFFSET UNITYSDK_OFFSET(0x786120)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake
{
	inline static constexpr unsigned int JPakeRound2Payload_TypeDefinitionIndex = 22644;

	class JPakeRound2Payload : public Il2CppObject
	{
	public:
		::System::String* participantId; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* a; // 0x18
		::Il2CppArray<::System::Object*>* knowledgeProofForX2s; // 0x20

		::System::String* get_ParticipantId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND2PAYLOAD_GET_PARTICIPANTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND2PAYLOAD_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_KnowledgeProofForX2s()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND2PAYLOAD_GET_KNOWLEDGEPROOFFORX2S_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_A()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND2PAYLOAD_GET_A_OFFSET))(nullptr);
		}

	};
}

