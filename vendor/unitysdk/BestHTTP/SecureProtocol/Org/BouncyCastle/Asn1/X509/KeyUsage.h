#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class KeyUsage; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBitString; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYUSAGE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7F90D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYUSAGE_FROMEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x7F92F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYUSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F9390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYUSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F9260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYUSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7F93E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int KeyUsage_TypeDefinitionIndex = 22899;

	class KeyUsage : public Il2CppObject
	{
	public:
		::System::Int32 DigitalSignature; // 0x0
		::System::Int32 NonRepudiation; // 0x0
		::System::Int32 KeyEncipherment; // 0x0
		::System::Int32 DataEncipherment; // 0x0
		::System::Int32 KeyAgreement; // 0x0
		::System::Int32 KeyCertSign; // 0x0
		::System::Int32 CrlSign; // 0x0
		::System::Int32 EncipherOnly; // 0x0
		::System::Int32 DecipherOnly; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyUsage* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyUsage*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYUSAGE_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyUsage* FromExtensions(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyUsage*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYUSAGE_FROMEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYUSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYUSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYUSAGE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

