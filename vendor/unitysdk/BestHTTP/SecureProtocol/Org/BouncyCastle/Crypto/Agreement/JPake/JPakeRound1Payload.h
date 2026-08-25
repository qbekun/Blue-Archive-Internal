#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND1PAYLOAD_GET_GX1_OFFSET UNITYSDK_OFFSET(0x785F90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND1PAYLOAD_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x785FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND1PAYLOAD_GET_GX2_OFFSET UNITYSDK_OFFSET(0x785FB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND1PAYLOAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x7835E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND1PAYLOAD_GET_KNOWLEDGEPROOFFORX2_OFFSET UNITYSDK_OFFSET(0x785FC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND1PAYLOAD_GET_KNOWLEDGEPROOFFORX1_OFFSET UNITYSDK_OFFSET(0x786030)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake
{
	inline static constexpr unsigned int JPakeRound1Payload_TypeDefinitionIndex = 22643;

	class JPakeRound1Payload : public Il2CppObject
	{
	public:
		::System::String* participantId; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* gx1; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* gx2; // 0x20
		::Il2CppArray<::System::Object*>* knowledgeProofForX1; // 0x28
		::Il2CppArray<::System::Object*>* knowledgeProofForX2; // 0x30

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Gx1()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND1PAYLOAD_GET_GX1_OFFSET))(nullptr);
		}

		::System::String* get_ParticipantId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND1PAYLOAD_GET_PARTICIPANTID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Gx2()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND1PAYLOAD_GET_GX2_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND1PAYLOAD_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_KnowledgeProofForX2()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND1PAYLOAD_GET_KNOWLEDGEPROOFFORX2_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_KnowledgeProofForX1()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEROUND1PAYLOAD_GET_KNOWLEDGEPROOFFORX1_OFFSET))(nullptr);
		}

	};
}

