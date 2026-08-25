#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSignedHelper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsProcessable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class SignedData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class ContentInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInformationStore; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Store; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSignedData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x7975E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x797650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x797880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x7979B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x797A90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x797AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x797900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x7979E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x7976C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x797AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GETSIGNERINFOS_OFFSET UNITYSDK_OFFSET(0x797B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GETATTRIBUTECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x7981D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GETCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x798270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GETCRLS_OFFSET UNITYSDK_OFFSET(0x798310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GET_SIGNEDCONTENTTYPEOID_OFFSET UNITYSDK_OFFSET(0x7983B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GET_SIGNEDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x7983E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GET_SIGNEDCONTENT_OFFSET UNITYSDK_OFFSET(0x798410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GET_CONTENTINFO_OFFSET UNITYSDK_OFFSET(0x798420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GETENCODED_OFFSET UNITYSDK_OFFSET(0x798430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GETENCODED_OFFSET UNITYSDK_OFFSET(0x798450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_REPLACESIGNERS_OFFSET UNITYSDK_OFFSET(0x798470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_REPLACECERTIFICATESANDCRLS_OFFSET UNITYSDK_OFFSET(0x798C90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7990C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsSignedData_TypeDefinitionIndex = 22697;

	class CmsSignedData : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedHelper* Helper; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* signedContent; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignedData* signedData; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* signerInfoStore; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* attrCertStore; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* certificateStore; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* crlStore; // 0x40
		::System::Collections::IDictionary* hashes; // 0x48

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IDictionary* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IDictionary* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GET_VERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* GetSignerInfos()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GETSIGNERINFOS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetAttributeCertificates(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GETATTRIBUTECERTIFICATES_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GETCERTIFICATES_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetCrls(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GETCRLS_OFFSET))(str, nullptr);
		}

		::System::String* get_SignedContentTypeOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GET_SIGNEDCONTENTTYPEOID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SignedContentType()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GET_SIGNEDCONTENTTYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* get_SignedContent()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GET_SIGNEDCONTENT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_ContentInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GET_CONTENTINFO_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GETENCODED_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_GETENCODED_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* ReplaceSigners(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_REPLACESIGNERS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* ReplaceCertificatesAndCrls(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_REPLACECERTIFICATESANDCRLS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

