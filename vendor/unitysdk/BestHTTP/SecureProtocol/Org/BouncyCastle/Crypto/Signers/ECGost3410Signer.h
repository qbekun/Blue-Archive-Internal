#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class ECMultiplier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x66B820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_GENERATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x66B840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x66BCA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x66BCB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_CREATEBASEPOINTMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x66C030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x66C080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_INIT_OFFSET UNITYSDK_OFFSET(0x66C0B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers
{
	inline static constexpr unsigned int ECGost3410Signer_TypeDefinitionIndex = 22249;

	class ECGost3410Signer : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* key; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x18
		::System::Boolean forSigning; // 0x20

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_GENERATESIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_VERIFYSIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_CREATEBASEPOINTMULTIPLIER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Order()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECGOST3410SIGNER_INIT_OFFSET))(arg, arg, nullptr);
		}

	};
}

