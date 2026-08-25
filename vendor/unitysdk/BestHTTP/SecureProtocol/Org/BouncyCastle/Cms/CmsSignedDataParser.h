#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSignedHelper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class SignedDataParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsTypedStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInformationStore; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Store; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1SetParser; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x79CC00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x79CC80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x79CC70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x79CCF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x79D5E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GET_DIGESTOIDS_OFFSET UNITYSDK_OFFSET(0x79D610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GETSIGNERINFOS_OFFSET UNITYSDK_OFFSET(0x79D670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GETATTRIBUTECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x79ECE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GETCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x79F420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GETCRLS_OFFSET UNITYSDK_OFFSET(0x79F680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_POPULATECERTCRLSETS_OFFSET UNITYSDK_OFFSET(0x79E0E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GET_SIGNEDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x79F980)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GETSIGNEDCONTENT_OFFSET UNITYSDK_OFFSET(0x79F990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_REPLACESIGNERS_OFFSET UNITYSDK_OFFSET(0x79FE10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_REPLACECERTIFICATESANDCRLS_OFFSET UNITYSDK_OFFSET(0x7A0BC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GETASN1SET_OFFSET UNITYSDK_OFFSET(0x79F8E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7A10E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsSignedDataParser_TypeDefinitionIndex = 22700;

	class CmsSignedDataParser : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedHelper* Helper; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignedDataParser* _signedData; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* _signedContentType; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* _signedContent; // 0x30
		::System::Collections::IDictionary* _digests; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* _digestOids; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* _signerInfoStore; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* _certSet; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* _crlSet; // 0x58
		::System::Boolean _isCertCrlParsed; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* _attributeStore; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* _certificateStore; // 0x70
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* _crlStore; // 0x78

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GET_VERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* get_DigestOids()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GET_DIGESTOIDS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* GetSignerInfos()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GETSIGNERINFOS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetAttributeCertificates(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GETATTRIBUTECERTIFICATES_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GETCERTIFICATES_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetCrls(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GETCRLS_OFFSET))(str, nullptr);
		}

		::System::Void PopulateCertCrlSets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_POPULATECERTCRLSETS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SignedContentType()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GET_SIGNEDCONTENTTYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* GetSignedContent()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GETSIGNEDCONTENT_OFFSET))(nullptr);
		}

		::System::IO::Stream* ReplaceSigners(::System::IO::Stream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* arg, ::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_REPLACESIGNERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IO::Stream* ReplaceCertificatesAndCrls(::System::IO::Stream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg, ::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_REPLACECERTIFICATESANDCRLS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* GetAsn1Set(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SetParser*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_GETASN1SET_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAPARSER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

