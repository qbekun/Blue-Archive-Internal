#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSignedData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInformation; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { class TimeStampTokenInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class ContentInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Store; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x941810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GET_TIMESTAMPINFO_OFFSET UNITYSDK_OFFSET(0x942360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GET_SIGNERID_OFFSET UNITYSDK_OFFSET(0x942370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GET_SIGNEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x940400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GET_UNSIGNEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x942390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GETCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9423B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GETCRLS_OFFSET UNITYSDK_OFFSET(0x9423D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GETATTRIBUTECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9423F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_VALIDATE_OFFSET UNITYSDK_OFFSET(0x942410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_TOCMSSIGNEDDATA_OFFSET UNITYSDK_OFFSET(0x943060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GETENCODED_OFFSET UNITYSDK_OFFSET(0x943070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GETENCODED_OFFSET UNITYSDK_OFFSET(0x9430C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	inline static constexpr unsigned int TimeStampToken_TypeDefinitionIndex = 21644;

	class TimeStampToken : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* tsToken; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* tsaSignerInfo; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenInfo* tstInfo; // 0x20
		CertID* certID; // 0x28

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenInfo* get_TimeStampInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GET_TIMESTAMPINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerID* get_SignerID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerID*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GET_SIGNERID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* get_SignedAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GET_SIGNEDATTRIBUTES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* get_UnsignedAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GET_UNSIGNEDATTRIBUTES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GETCERTIFICATES_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetCrls(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GETCRLS_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetAttributeCertificates(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GETATTRIBUTECERTIFICATES_OFFSET))(str, nullptr);
		}

		::System::Void Validate(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_VALIDATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* ToCmsSignedData()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_TOCMSSIGNEDDATA_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GETENCODED_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TIMESTAMPTOKEN_GETENCODED_OFFSET))(str, nullptr);
		}

	};
}

