#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerOutputStream; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CB810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D1660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D16A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D16C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CBF40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_GETLENGTHOFHEADER_OFFSET UNITYSDK_OFFSET(0x7D17C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_ISCONSTRUCTED_OFFSET UNITYSDK_OFFSET(0x7D18A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_GETCONTENTS_OFFSET UNITYSDK_OFFSET(0x7D18B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_GET_APPLICATIONTAG_OFFSET UNITYSDK_OFFSET(0x7D18C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x7D18D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x7D18E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_ENCODE_OFFSET UNITYSDK_OFFSET(0x7D1AE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_ASN1EQUALS_OFFSET UNITYSDK_OFFSET(0x7D1BF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_ASN1GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D1CB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_REPLACETAGNUMBER_OFFSET UNITYSDK_OFFSET(0x7D1990)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerApplicationSpecific_TypeDefinitionIndex = 22784;

	class DerApplicationSpecific : public ::Unity::Jobs::IJobParallelForBurstSchedulable
	{
	public:
		::System::Boolean isConstructed; // 0x10
		::System::Int32 tag; // 0x14
		::Il2CppArray<::System::Object*>* octets; // 0x18

		::System::Void .ctor(::System::Boolean arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetLengthOfHeader(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_GETLENGTHOFHEADER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConstructed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_ISCONSTRUCTED_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetContents()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_GETCONTENTS_OFFSET))(nullptr);
		}

		::System::Int32 get_ApplicationTag()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_GET_APPLICATIONTAG_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* GetObject()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_GETOBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* GetObject(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_GETOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void Encode(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Asn1Equals(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_ASN1EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 Asn1GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_ASN1GETHASHCODE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ReplaceTagNumber(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERAPPLICATIONSPECIFIC_REPLACETAGNUMBER_OFFSET))(arg, arg, nullptr);
		}

	};
}

