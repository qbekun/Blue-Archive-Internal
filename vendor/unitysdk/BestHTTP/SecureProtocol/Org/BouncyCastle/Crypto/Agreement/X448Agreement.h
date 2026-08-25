#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class X448PrivateKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X448AGREEMENT_CALCULATEAGREEMENT_OFFSET UNITYSDK_OFFSET(0x77F2A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X448AGREEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x77F330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X448AGREEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x77F3B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X448AGREEMENT_GET_AGREEMENTSIZE_OFFSET UNITYSDK_OFFSET(0x77F3C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement
{
	inline static constexpr unsigned int X448Agreement_TypeDefinitionIndex = 22630;

	class X448Agreement : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters* privateKey; // 0x10

		::System::Void CalculateAgreement(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X448AGREEMENT_CALCULATEAGREEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X448AGREEMENT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X448AGREEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_AgreementSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_X448AGREEMENT_GET_AGREEMENTSIZE_OFFSET))(nullptr);
		}

	};
}

