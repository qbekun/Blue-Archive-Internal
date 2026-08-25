#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake { class JPakePrimeOrderGroup; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake { class JPakeRound1Payload; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake { class JPakeRound2Payload; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake { class JPakeRound3Payload; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_.CTOR_OFFSET UNITYSDK_OFFSET(0x782A50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_.CTOR_OFFSET UNITYSDK_OFFSET(0x782AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_.CTOR_OFFSET UNITYSDK_OFFSET(0x782B70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x782E90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_CREATEROUND1PAYLOADTOSEND_OFFSET UNITYSDK_OFFSET(0x782EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_VALIDATEROUND1PAYLOADRECEIVED_OFFSET UNITYSDK_OFFSET(0x7837D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_CREATEROUND2PAYLOADTOSEND_OFFSET UNITYSDK_OFFSET(0x783E30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_VALIDATEROUND2PAYLOADRECEIVED_OFFSET UNITYSDK_OFFSET(0x7843F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_CALCULATEKEYINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x784930)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_CREATEROUND3PAYLOADTOSEND_OFFSET UNITYSDK_OFFSET(0x784CB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_VALIDATEROUND3PAYLOADRECEIVED_OFFSET UNITYSDK_OFFSET(0x785350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x785740)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake
{
	inline static constexpr unsigned int JPakeParticipant_TypeDefinitionIndex = 22640;

	class JPakeParticipant : public Il2CppObject
	{
	public:
		::System::Int32 STATE_INITIALIZED; // 0x0
		::System::Int32 STATE_ROUND_1_CREATED; // 0x4
		::System::Int32 STATE_ROUND_1_VALIDATED; // 0x8
		::System::Int32 STATE_ROUND_2_CREATED; // 0xC
		::System::Int32 STATE_ROUND_2_VALIDATED; // 0x10
		::System::Int32 STATE_KEY_CALCULATED; // 0x14
		::System::Int32 STATE_ROUND_3_CREATED; // 0x18
		::System::Int32 STATE_ROUND_3_VALIDATED; // 0x1C
		::System::String* participantId; // 0x10
		::Il2CppArray<::System::Object*>* password; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* p; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* q; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* g; // 0x40
		::System::String* partnerParticipantId; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x1; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x2; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* gx1; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* gx2; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* gx3; // 0x70
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* gx4; // 0x78
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* b; // 0x80
		::System::Int32 state; // 0x88

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_State()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_GET_STATE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload* CreateRound1PayloadToSend()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_CREATEROUND1PAYLOADTOSEND_OFFSET))(nullptr);
		}

		::System::Void ValidateRound1PayloadReceived(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_VALIDATEROUND1PAYLOADRECEIVED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload* CreateRound2PayloadToSend()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_CREATEROUND2PAYLOADTOSEND_OFFSET))(nullptr);
		}

		::System::Void ValidateRound2PayloadReceived(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_VALIDATEROUND2PAYLOADRECEIVED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateKeyingMaterial()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_CALCULATEKEYINGMATERIAL_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload* CreateRound3PayloadToSend(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_CREATEROUND3PAYLOADTOSEND_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateRound3PayloadReceived(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_VALIDATEROUND3PAYLOADRECEIVED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_JPAKE_JPAKEPARTICIPANT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

