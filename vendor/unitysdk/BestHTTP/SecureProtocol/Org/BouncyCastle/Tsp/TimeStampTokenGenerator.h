#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralName; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Store; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { class TimeStampToken; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { class TimeStampRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x943180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9431B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x943670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETCRLS_OFFSET UNITYSDK_OFFSET(0x943680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETACCURACYSECONDS_OFFSET UNITYSDK_OFFSET(0x943690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETACCURACYMILLIS_OFFSET UNITYSDK_OFFSET(0x9436A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETACCURACYMICROS_OFFSET UNITYSDK_OFFSET(0x9436B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETORDERING_OFFSET UNITYSDK_OFFSET(0x9436C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETTSA_OFFSET UNITYSDK_OFFSET(0x9436D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x940E40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	inline static constexpr unsigned int TimeStampTokenGenerator_TypeDefinitionIndex = 21645;

	class TimeStampTokenGenerator : public Il2CppObject
	{
	public:
		::System::Int32 accuracySeconds; // 0x10
		::System::Int32 accuracyMillis; // 0x14
		::System::Int32 accuracyMicros; // 0x18
		::System::Boolean ordering; // 0x1C
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* tsa; // 0x20
		::System::String* tsaPolicyOID; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert; // 0x38
		::System::String* digestOID; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* x509Certs; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* x509Crls; // 0x60

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_.CTOR_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_.CTOR_OFFSET))(arg, arg, str, str, arg, arg, nullptr);
		}

		::System::Void SetCertificates(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETCERTIFICATES_OFFSET))(arg, nullptr);
		}

		::System::Void SetCrls(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETCRLS_OFFSET))(arg, nullptr);
		}

		::System::Void SetAccuracySeconds(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETACCURACYSECONDS_OFFSET))(arg, nullptr);
		}

		::System::Void SetAccuracyMillis(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETACCURACYMILLIS_OFFSET))(arg, nullptr);
		}

		::System::Void SetAccuracyMicros(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETACCURACYMICROS_OFFSET))(arg, nullptr);
		}

		::System::Void SetOrdering(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETORDERING_OFFSET))(arg, nullptr);
		}

		::System::Void SetTsa(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_SETTSA_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampToken* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::DateTime* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampToken*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENGENERATOR_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

