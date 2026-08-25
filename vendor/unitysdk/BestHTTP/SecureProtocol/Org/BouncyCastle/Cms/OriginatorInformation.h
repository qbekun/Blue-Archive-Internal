#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class OriginatorInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Store; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORINFORMATION_TOASN1STRUCTURE_OFFSET UNITYSDK_OFFSET(0x7BD250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORINFORMATION_GETCRLS_OFFSET UNITYSDK_OFFSET(0x7BD260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BD7A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORINFORMATION_GETCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x7BD7D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int OriginatorInformation_TypeDefinitionIndex = 22726;

	class OriginatorInformation : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* ToAsn1Structure()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORINFORMATION_TOASN1STRUCTURE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetCrls()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORINFORMATION_GETCRLS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORINFORMATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORINFORMATION_GETCERTIFICATES_OFFSET))(nullptr);
		}

	};
}

