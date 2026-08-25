#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { class TimeStampTokenGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiStatusInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { class TimeStampResponse; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { class TimeStampRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date { class DateTimeObject; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x940470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x940560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x940490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_ADDSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x940580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_SETFAILINFOFIELD_OFFSET UNITYSDK_OFFSET(0x9405F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_GETPKISTATUSINFO_OFFSET UNITYSDK_OFFSET(0x940600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x9408B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x940930)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_GENERATEFAILRESPONSE_OFFSET UNITYSDK_OFFSET(0x941610)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	inline static constexpr unsigned int TimeStampResponseGenerator_TypeDefinitionIndex = 21642;

	class TimeStampResponseGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus* status; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* statusStrings; // 0x18
		::System::Int32 failInfo; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator; // 0x28
		::System::Collections::IList* acceptedAlgorithms; // 0x30
		::System::Collections::IList* acceptedPolicies; // 0x38
		::System::Collections::IList* acceptedExtensions; // 0x40

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* arg, ::System::Collections::IList* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*, ::System::Collections::IList*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* arg, ::System::Collections::IList* arg, ::System::Collections::IList* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddStatusString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_ADDSTATUSSTRING_OFFSET))(str, nullptr);
		}

		::System::Void SetFailInfoField(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_SETFAILINFOFIELD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* GetPkiStatusInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_GETPKISTATUSINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampResponse* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::DateTime* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampResponse*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampResponse* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampResponse*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampResponse* GenerateFailResponse(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus* arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampResponse*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSEGENERATOR_GENERATEFAILRESPONSE_OFFSET))(arg, arg, str, nullptr);
		}

	};
}

