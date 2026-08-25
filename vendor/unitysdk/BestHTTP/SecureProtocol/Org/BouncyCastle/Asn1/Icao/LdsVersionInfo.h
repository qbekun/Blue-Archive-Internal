#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerPrintableString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao { class LdsVersionInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSVERSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x84FF60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSVERSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x850010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSVERSIONINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x84F9C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSVERSIONINFO_GETLDSVERSION_OFFSET UNITYSDK_OFFSET(0x850120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSVERSIONINFO_GETUNICODEVERSION_OFFSET UNITYSDK_OFFSET(0x850150)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSVERSIONINFO_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x850180)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao
{
	inline static constexpr unsigned int LdsVersionInfo_TypeDefinitionIndex = 23099;

	class LdsVersionInfo : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerPrintableString* ldsVersion; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerPrintableString* unicodeVersion; // 0x18

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSVERSIONINFO_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSVERSIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSVERSIONINFO_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::String* GetLdsVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSVERSIONINFO_GETLDSVERSION_OFFSET))(nullptr);
		}

		::System::String* GetUnicodeVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSVERSIONINFO_GETUNICODEVERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSVERSIONINFO_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

