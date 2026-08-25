#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class IAsn1String; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class DisplayText; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISPLAYTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F1E80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISPLAYTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F1FD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISPLAYTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F2070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISPLAYTEXT_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7F20A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISPLAYTEXT_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7F2230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISPLAYTEXT_GETSTRING_OFFSET UNITYSDK_OFFSET(0x7F22B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int DisplayText_TypeDefinitionIndex = 22886;

	class DisplayText : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::System::Int32 ContentTypeIA5String; // 0x0
		::System::Int32 ContentTypeBmpString; // 0x0
		::System::Int32 ContentTypeUtf8String; // 0x0
		::System::Int32 ContentTypeVisibleString; // 0x0
		::System::Int32 DisplayTextMaximumSize; // 0x0
		::System::Int32 contentType; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1String* contents; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISPLAYTEXT_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISPLAYTEXT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1String* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IAsn1String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISPLAYTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DisplayText* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DisplayText*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISPLAYTEXT_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISPLAYTEXT_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::String* GetString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_DISPLAYTEXT_GETSTRING_OFFSET))(nullptr);
		}

	};
}

