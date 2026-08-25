#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerGeneralizedTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerOutputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7D4F50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7D5050)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D51C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D56E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D5180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_GET_TIMESTRING_OFFSET UNITYSDK_OFFSET(0x7D5770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_GETTIME_OFFSET UNITYSDK_OFFSET(0x7D5780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_CALCULATEGMTOFFSET_OFFSET UNITYSDK_OFFSET(0x7D5B00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_CONVERT_OFFSET UNITYSDK_OFFSET(0x7D5E80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_TODATETIME_OFFSET UNITYSDK_OFFSET(0x7D5310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_FSTRING_OFFSET UNITYSDK_OFFSET(0x7D5F10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_PARSEDATESTRING_OFFSET UNITYSDK_OFFSET(0x7D5FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_GET_HASFRACTIONALSECONDS_OFFSET UNITYSDK_OFFSET(0x7D5EE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_GETOCTETS_OFFSET UNITYSDK_OFFSET(0x7D6220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_ENCODE_OFFSET UNITYSDK_OFFSET(0x7D6230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_ASN1EQUALS_OFFSET UNITYSDK_OFFSET(0x7D6270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_ASN1GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D6300)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerGeneralizedTime_TypeDefinitionIndex = 22791;

	class DerGeneralizedTime : public ::Unity::Jobs::IJobParallelForBurstSchedulable
	{
	public:
		::System::String* time; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_TimeString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_GET_TIMESTRING_OFFSET))(nullptr);
		}

		::System::String* GetTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_GETTIME_OFFSET))(nullptr);
		}

		::System::String* CalculateGmtOffset()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_CALCULATEGMTOFFSET_OFFSET))(nullptr);
		}

		::System::String* Convert(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_CONVERT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ToDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_TODATETIME_OFFSET))(nullptr);
		}

		::System::String* FString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_FSTRING_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ParseDateString(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::DateTime*(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_PARSEDATESTRING_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean get_HasFractionalSeconds()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_GET_HASFRACTIONALSECONDS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetOctets()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_GETOCTETS_OFFSET))(nullptr);
		}

		::System::Void Encode(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Asn1Equals(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_ASN1EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 Asn1GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERGENERALIZEDTIME_ASN1GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

