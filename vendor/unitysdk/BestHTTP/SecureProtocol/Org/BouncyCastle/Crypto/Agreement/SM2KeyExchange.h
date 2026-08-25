#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECPrivateKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECDomainParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class SM2KeyExchangePublicParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECFieldElement; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x77D470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x77D4E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x77D510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_CALCULATEKEY_OFFSET UNITYSDK_OFFSET(0x77D730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_CALCULATEKEYWITHCONFIRMATION_OFFSET UNITYSDK_OFFSET(0x77DA90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_CALCULATEU_OFFSET UNITYSDK_OFFSET(0x77E4D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_KDF_OFFSET UNITYSDK_OFFSET(0x77E7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_REDUCE_OFFSET UNITYSDK_OFFSET(0x77E710)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_S1_OFFSET UNITYSDK_OFFSET(0x77E1F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_CALCULATEINNERHASH_OFFSET UNITYSDK_OFFSET(0x77DFC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_S2_OFFSET UNITYSDK_OFFSET(0x77E360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_GETZ_OFFSET UNITYSDK_OFFSET(0x77D910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_ADDUSERID_OFFSET UNITYSDK_OFFSET(0x77EFA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_ADDFIELDELEMENT_OFFSET UNITYSDK_OFFSET(0x77EEC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement
{
	inline static constexpr unsigned int SM2KeyExchange_TypeDefinitionIndex = 22628;

	class SM2KeyExchange : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* mDigest; // 0x10
		::Il2CppArray<::System::Object*>* mUserID; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mStaticKey; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* mStaticPubPoint; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* mEphemeralPubPoint; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* mECParams; // 0x38
		::System::Int32 mW; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mEphemeralKey; // 0x48
		::System::Boolean mInitiator; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_INIT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CalculateKey(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_CALCULATEKEY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CalculateKeyWithConfirmation(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_CALCULATEKEYWITHCONFIRMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* CalculateU(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_CALCULATEU_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Kdf(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_KDF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Reduce(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_REDUCE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* S1(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_S1_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CalculateInnerHash(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_CALCULATEINNERHASH_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* S2(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_S2_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetZ(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_GETZ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddUserID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_ADDUSERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFieldElement(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_SM2KEYEXCHANGE_ADDFIELDELEMENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

