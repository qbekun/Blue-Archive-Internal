#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class X25519PrivateKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X25519AGREEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x77F130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X25519AGREEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x77F140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X25519AGREEMENT_CALCULATEAGREEMENT_OFFSET UNITYSDK_OFFSET(0x77F1C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X25519AGREEMENT_GET_AGREEMENTSIZE_OFFSET UNITYSDK_OFFSET(0x77F250)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement
{
	inline static constexpr unsigned int X25519Agreement_TypeDefinitionIndex = 22629;

	class X25519Agreement : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters* privateKey; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X25519AGREEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X25519AGREEMENT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void CalculateAgreement(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X25519AGREEMENT_CALCULATEAGREEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_AgreementSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X25519AGREEMENT_GET_AGREEMENTSIZE_OFFSET))(nullptr);
		}

	};
}

