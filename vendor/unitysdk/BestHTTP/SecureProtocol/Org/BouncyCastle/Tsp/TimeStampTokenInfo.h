#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp { class TstInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralName; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp { class Accuracy; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { class GenTimeAccuracy; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GETMESSAGEIMPRINTDIGEST_OFFSET UNITYSDK_OFFSET(0x940380)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_TSA_OFFSET UNITYSDK_OFFSET(0x9436E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_MESSAGEIMPRINTALGOID_OFFSET UNITYSDK_OFFSET(0x9403B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_NONCE_OFFSET UNITYSDK_OFFSET(0x9402F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_ISORDERED_OFFSET UNITYSDK_OFFSET(0x943700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_HASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x943730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x942180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_TSTINFO_OFFSET UNITYSDK_OFFSET(0x9437C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_POLICY_OFFSET UNITYSDK_OFFSET(0x940420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_ACCURACY_OFFSET UNITYSDK_OFFSET(0x9437D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_GENTIME_OFFSET UNITYSDK_OFFSET(0x9437F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GETENCODED_OFFSET UNITYSDK_OFFSET(0x943800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x943820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_GENTIMEACCURACY_OFFSET UNITYSDK_OFFSET(0x943850)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	inline static constexpr unsigned int TimeStampTokenInfo_TypeDefinitionIndex = 21646;

	class TimeStampTokenInfo : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TstInfo* tstInfo; // 0x10
		::System::DateTime* genTime; // 0x18

		::Il2CppArray<::System::Object*>* GetMessageImprintDigest()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GETMESSAGEIMPRINTDIGEST_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* get_Tsa()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_TSA_OFFSET))(nullptr);
		}

		::System::String* get_MessageImprintAlgOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_MESSAGEIMPRINTALGOID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Nonce()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_NONCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOrdered()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_ISORDERED_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_HASHALGORITHM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TstInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TstInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TstInfo* get_TstInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TstInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_TSTINFO_OFFSET))(nullptr);
		}

		::System::String* get_Policy()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_POLICY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::Accuracy* get_Accuracy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::Accuracy*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_ACCURACY_OFFSET))(nullptr);
		}

		::System::DateTime* get_GenTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_GENTIME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GETENCODED_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_SerialNumber()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_SERIALNUMBER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::GenTimeAccuracy* get_GenTimeAccuracy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::GenTimeAccuracy*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKENINFO_GET_GENTIMEACCURACY_OFFSET))(nullptr);
		}

	};
}

