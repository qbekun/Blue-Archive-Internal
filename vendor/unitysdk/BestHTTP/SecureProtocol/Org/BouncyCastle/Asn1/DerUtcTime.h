#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerUtcTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerOutputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7DBA40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7DBB30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x7DBCA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x7DBEC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x7DBC60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_TODATETIME_OFFSET UNITYSDK_OFFSET(0x7DBE70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_TOADJUSTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x7DC500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_PARSEDATESTRING_OFFSET UNITYSDK_OFFSET(0x7DC460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_GET_TIMESTRING_OFFSET UNITYSDK_OFFSET(0x7DBF90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_GET_ADJUSTEDTIME_OFFSET UNITYSDK_OFFSET(0x7DC660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_GET_ADJUSTEDTIMESTRING_OFFSET UNITYSDK_OFFSET(0x7DC5D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_GETOCTETS_OFFSET UNITYSDK_OFFSET(0x7DC6F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_ENCODE_OFFSET UNITYSDK_OFFSET(0x7DC700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_ASN1EQUALS_OFFSET UNITYSDK_OFFSET(0x7DC740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_ASN1GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7DC7D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7DC800)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerUtcTime_TypeDefinitionIndex = 22814;

	class DerUtcTime : public ::Unity::Jobs::IJobParallelForBurstSchedulable
	{
	public:
		::System::String* time; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtcTime*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ToDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_TODATETIME_OFFSET))(nullptr);
		}

		::System::DateTime* ToAdjustedDateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_TOADJUSTEDDATETIME_OFFSET))(nullptr);
		}

		::System::DateTime* ParseDateString(::System::String* str, ::System::String* str)
		{
			return (return (::System::DateTime*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_PARSEDATESTRING_OFFSET))(str, str, nullptr);
		}

		::System::String* get_TimeString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_GET_TIMESTRING_OFFSET))(nullptr);
		}

		::System::String* get_AdjustedTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_GET_ADJUSTEDTIME_OFFSET))(nullptr);
		}

		::System::String* get_AdjustedTimeString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_GET_ADJUSTEDTIMESTRING_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetOctets()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_GETOCTETS_OFFSET))(nullptr);
		}

		::System::Void Encode(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Asn1Equals(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_ASN1EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 Asn1GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_ASN1GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERUTCTIME_TOSTRING_OFFSET))(nullptr);
		}

	};
}

