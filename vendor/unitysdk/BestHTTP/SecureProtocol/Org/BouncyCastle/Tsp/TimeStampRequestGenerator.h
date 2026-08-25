#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBoolean; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { class TimeStampRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_SETREQPOLICY_OFFSET UNITYSDK_OFFSET(0x93EEA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_SETCERTREQ_OFFSET UNITYSDK_OFFSET(0x93EF10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x93EF70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x93EFB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x93F180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x93F1D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x93F370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x93F390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x93F6A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x93F6D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F6F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	inline static constexpr unsigned int TimeStampRequestGenerator_TypeDefinitionIndex = 21639;

	class TimeStampRequestGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* reqPolicy; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBoolean* certReq; // 0x18
		::System::Collections::IDictionary* extensions; // 0x20
		::System::Collections::IList* extOrdering; // 0x28

		::System::Void SetReqPolicy(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_SETREQPOLICY_OFFSET))(str, nullptr);
		}

		::System::Void SetCertReq(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_SETCERTREQ_OFFSET))(arg, nullptr);
		}

		::System::Void AddExtension(::System::String* str, ::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_ADDEXTENSION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddExtension(::System::String* str, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_ADDEXTENSION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddExtension(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_ADDEXTENSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddExtension(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_ADDEXTENSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* Generate(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_GENERATE_OFFSET))(str, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* Generate(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_GENERATE_OFFSET))(str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_GENERATE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPREQUESTGENERATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

