#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBasicAgreement; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IRawAgreement; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x99B200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99B210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETBASICAGREEMENT_OFFSET UNITYSDK_OFFSET(0x99B650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETBASICAGREEMENT_OFFSET UNITYSDK_OFFSET(0x99B6B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETBASICAGREEMENTWITHKDF_OFFSET UNITYSDK_OFFSET(0x99BA50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETBASICAGREEMENTWITHKDF_OFFSET UNITYSDK_OFFSET(0x99BAB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETRAWAGREEMENT_OFFSET UNITYSDK_OFFSET(0x99BCF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETRAWAGREEMENT_OFFSET UNITYSDK_OFFSET(0x99BD50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x99BEC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETMECHANISM_OFFSET UNITYSDK_OFFSET(0x99B910)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	inline static constexpr unsigned int AgreementUtilities_TypeDefinitionIndex = 21701;

	class AgreementUtilities : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* algorithms; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* GetBasicAgreement(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETBASICAGREEMENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* GetBasicAgreement(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETBASICAGREEMENT_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* GetBasicAgreementWithKdf(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETBASICAGREEMENTWITHKDF_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* GetBasicAgreementWithKdf(::System::String* str, ::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETBASICAGREEMENTWITHKDF_OFFSET))(str, str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IRawAgreement* GetRawAgreement(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IRawAgreement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETRAWAGREEMENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IRawAgreement* GetRawAgreement(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IRawAgreement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETRAWAGREEMENT_OFFSET))(str, nullptr);
		}

		::System::String* GetAlgorithmName(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETALGORITHMNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetMechanism(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_AGREEMENTUTILITIES_GETMECHANISM_OFFSET))(str, nullptr);
		}

	};
}

