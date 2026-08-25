#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AttributeX509; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x75DCF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x75DD30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x75DE10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRIBUTE_GET_OID_OFFSET UNITYSDK_OFFSET(0x75DEF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRIBUTE_GETVALUES_OFFSET UNITYSDK_OFFSET(0x75DF20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRIBUTE_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x75E070)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int X509Attribute_TypeDefinitionIndex = 21535;

	class X509Attribute : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttributeX509* attr; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Oid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRIBUTE_GET_OID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetValues()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRIBUTE_GETVALUES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRIBUTE_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

