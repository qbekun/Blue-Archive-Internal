#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerIA5String; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerOutputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7D6F60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7D7050)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D7180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D72C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D71B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x7D7330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_GETOCTETS_OFFSET UNITYSDK_OFFSET(0x7D7340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_ENCODE_OFFSET UNITYSDK_OFFSET(0x7D7350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_ASN1GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D7390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_ASN1EQUALS_OFFSET UNITYSDK_OFFSET(0x7D73C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_ISIA5STRING_OFFSET UNITYSDK_OFFSET(0x7D72D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int DerIA5String_TypeDefinitionIndex = 22795;

	class DerIA5String : public Il2CppObject
	{
	public:
		::System::String* str; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_GETSTRING_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetOctets()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_GETOCTETS_OFFSET))(nullptr);
		}

		::System::Void Encode(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Asn1GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_ASN1GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Asn1Equals(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_ASN1EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsIA5String(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_DERIA5STRING_ISIA5STRING_OFFSET))(str, nullptr);
		}

	};
}

