#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers { class IDsaKCalculator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class ECMultiplier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECFieldElement; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x66A840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x66A8B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x66A8E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_INIT_OFFSET UNITYSDK_OFFSET(0x66A910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x66ABF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_GENERATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x66AC20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x66B180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_CALCULATEE_OFFSET UNITYSDK_OFFSET(0x66B5A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_CREATEBASEPOINTMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x66B650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_GETDENOMINATOR_OFFSET UNITYSDK_OFFSET(0x66B6A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_INITSECURERANDOM_OFFSET UNITYSDK_OFFSET(0x66B730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x66B7A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers
{
	inline static constexpr unsigned int ECDsaSigner_TypeDefinitionIndex = 22248;

	class ECDsaSigner : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Eight; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* key; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Order()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_GET_ORDER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_GENERATESIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_VERIFYSIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateE(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_CALCULATEE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_CREATEBASEPOINTMULTIPLIER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* GetDenominator(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_GETDENOMINATOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* InitSecureRandom(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_INITSECURERANDOM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ECDSASIGNER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

