#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp { class Accuracy; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_GENTIMEACCURACY_GET_MICROS_OFFSET UNITYSDK_OFFSET(0x93DD30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_GENTIMEACCURACY_GET_MILLIS_OFFSET UNITYSDK_OFFSET(0x93DD80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_GENTIMEACCURACY_GETTIMECOMPONENT_OFFSET UNITYSDK_OFFSET(0x93DD60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_GENTIMEACCURACY_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DDB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_GENTIMEACCURACY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93DDE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_GENTIMEACCURACY_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x93DEF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	inline static constexpr unsigned int GenTimeAccuracy_TypeDefinitionIndex = 21637;

	class GenTimeAccuracy : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy; // 0x10

		::System::Int32 get_Micros()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_GENTIMEACCURACY_GET_MICROS_OFFSET))(nullptr);
		}

		::System::Int32 get_Millis()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_GENTIMEACCURACY_GET_MILLIS_OFFSET))(nullptr);
		}

		::System::Int32 GetTimeComponent(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_GENTIMEACCURACY_GETTIMECOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::Accuracy* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::Accuracy*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_GENTIMEACCURACY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_GENTIMEACCURACY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 get_Seconds()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_GENTIMEACCURACY_GET_SECONDS_OFFSET))(nullptr);
		}

	};
}

