#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp { class TimeStampResp; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { class TimeStampToken; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1InputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiFailureInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { class TimeStampRequest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F8D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93FAD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_READTIMESTAMPRESP_OFFSET UNITYSDK_OFFSET(0x93F940)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x93FBA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_GETSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x93FBE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_GETFAILINFO_OFFSET UNITYSDK_OFFSET(0x93FD10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_GET_TIMESTAMPTOKEN_OFFSET UNITYSDK_OFFSET(0x93FD90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x93FDA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_GETENCODED_OFFSET UNITYSDK_OFFSET(0x940450)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	inline static constexpr unsigned int TimeStampResponse_TypeDefinitionIndex = 21640;

	class TimeStampResponse : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* resp; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampToken* timeStampToken; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* readTimeStampResp(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1InputStream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1InputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_READTIMESTAMPRESP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Status()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_GET_STATUS_OFFSET))(nullptr);
		}

		::System::String* GetStatusString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_GETSTATUSSTRING_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* GetFailInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_GETFAILINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampToken* get_TimeStampToken()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_GET_TIMESTAMPTOKEN_OFFSET))(nullptr);
		}

		::System::Void Validate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_VALIDATE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPRESPONSE_GETENCODED_OFFSET))(nullptr);
		}

	};
}

