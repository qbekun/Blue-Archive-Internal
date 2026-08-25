#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Srp6GroupParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x77F410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_INIT_OFFSET UNITYSDK_OFFSET(0x77F420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_INIT_OFFSET UNITYSDK_OFFSET(0x77F480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_GENERATECLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x77F4D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_CALCULATESECRET_OFFSET UNITYSDK_OFFSET(0x77F980)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_SELECTPRIVATEVALUE_OFFSET UNITYSDK_OFFSET(0x77FBE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_CALCULATES_OFFSET UNITYSDK_OFFSET(0x77FAF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_CALCULATECLIENTEVIDENCEMESSAGE_OFFSET UNITYSDK_OFFSET(0x77FD10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_VERIFYSERVEREVIDENCEMESSAGE_OFFSET UNITYSDK_OFFSET(0x77FDD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_CALCULATESESSIONKEY_OFFSET UNITYSDK_OFFSET(0x77FED0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp
{
	inline static constexpr unsigned int Srp6Client_TypeDefinitionIndex = 22631;

	class Srp6Client : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* N; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* g; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* privA; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* pubA; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* B; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* u; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* S; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* M1; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* M2; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Key; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* GenerateClientCredentials(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_GENERATECLIENTCREDENTIALS_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateSecret(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_CALCULATESECRET_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* SelectPrivateValue()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_SELECTPRIVATEVALUE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateS()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_CALCULATES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateClientEvidenceMessage()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_CALCULATECLIENTEVIDENCEMESSAGE_OFFSET))(nullptr);
		}

		::System::Boolean VerifyServerEvidenceMessage(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_VERIFYSERVEREVIDENCEMESSAGE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateSessionKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SRP_SRP6CLIENT_CALCULATESESSIONKEY_OFFSET))(nullptr);
		}

	};
}

