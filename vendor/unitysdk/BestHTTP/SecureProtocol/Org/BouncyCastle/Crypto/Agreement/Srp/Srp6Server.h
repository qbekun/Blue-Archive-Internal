#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Srp6GroupParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7801E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_INIT_OFFSET UNITYSDK_OFFSET(0x7801F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_INIT_OFFSET UNITYSDK_OFFSET(0x780270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_GENERATESERVERCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x7802C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_CALCULATESECRET_OFFSET UNITYSDK_OFFSET(0x7803A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_SELECTPRIVATEVALUE_OFFSET UNITYSDK_OFFSET(0x780480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_CALCULATES_OFFSET UNITYSDK_OFFSET(0x780410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_VERIFYCLIENTEVIDENCEMESSAGE_OFFSET UNITYSDK_OFFSET(0x7804A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_CALCULATESERVEREVIDENCEMESSAGE_OFFSET UNITYSDK_OFFSET(0x780580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_CALCULATESESSIONKEY_OFFSET UNITYSDK_OFFSET(0x780620)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp
{
	inline static constexpr unsigned int Srp6Server_TypeDefinitionIndex = 22632;

	class Srp6Server : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* N; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* g; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* v; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* A; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* privB; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* pubB; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* u; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* S; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* M1; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* M2; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Key; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_INIT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* GenerateServerCredentials()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_GENERATESERVERCREDENTIALS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateSecret(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_CALCULATESECRET_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* SelectPrivateValue()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_SELECTPRIVATEVALUE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateS()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_CALCULATES_OFFSET))(nullptr);
		}

		::System::Boolean VerifyClientEvidenceMessage(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_VERIFYCLIENTEVIDENCEMESSAGE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateServerEvidenceMessage()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_CALCULATESERVEREVIDENCEMESSAGE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateSessionKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6SERVER_CALCULATESESSIONKEY_OFFSET))(nullptr);
		}

	};
}

