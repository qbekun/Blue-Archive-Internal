#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class IAsn1Convertible; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_ISCONSTRUCTED_OFFSET UNITYSDK_OFFSET(0x7CB860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7CB9A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7CBA40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CBB40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CBB80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_ASN1EQUALS_OFFSET UNITYSDK_OFFSET(0x7CBC20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_ASN1GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CBCF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_GET_TAGNO_OFFSET UNITYSDK_OFFSET(0x7CBD30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_ISEXPLICIT_OFFSET UNITYSDK_OFFSET(0x7CBD40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x7CBD50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x7C74A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_GETOBJECTPARSER_OFFSET UNITYSDK_OFFSET(0x7CBD60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7CBE70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int Asn1TaggedObject_TypeDefinitionIndex = 22761;

	class Asn1TaggedObject : public ::Unity::Jobs::IJobParallelForBurstSchedulable
	{
	public:
		::System::Int32 tagNo; // 0x10
		::System::Boolean explicitly; // 0x14
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* obj; // 0x18

		::System::Boolean IsConstructed(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_ISCONSTRUCTED_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Asn1Equals(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_ASN1EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 Asn1GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_ASN1GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 get_TagNo()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_GET_TAGNO_OFFSET))(nullptr);
		}

		::System::Boolean IsExplicit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_ISEXPLICIT_OFFSET))(nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_ISEMPTY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* GetObject()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_GETOBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible* GetObjectParser(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1Convertible*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_GETOBJECTPARSER_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ASN1TAGGEDOBJECT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

