#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class ContentInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1InputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Store; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class TbsCertificateStructure; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class IssuerAndSerialNumber; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_GET_MAXIMUMMEMORY_OFFSET UNITYSDK_OFFSET(0x7B63D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_READCONTENTINFO_OFFSET UNITYSDK_OFFSET(0x7B63E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_READCONTENTINFO_OFFSET UNITYSDK_OFFSET(0x7B6680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_READCONTENTINFO_OFFSET UNITYSDK_OFFSET(0x7B6500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_STREAMTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x7B6C50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_STREAMTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x7B6C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_GETCERTIFICATESFROMSTORE_OFFSET UNITYSDK_OFFSET(0x7B1F20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_GETCRLSFROMSTORE_OFFSET UNITYSDK_OFFSET(0x7B24D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_CREATEBERSETFROMLIST_OFFSET UNITYSDK_OFFSET(0x7A7070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_CREATEDERSETFROMLIST_OFFSET UNITYSDK_OFFSET(0x7A7480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_CREATEBEROCTETOUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x7A4640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_GETTBSCERTIFICATESTRUCTURE_OFFSET UNITYSDK_OFFSET(0x7B6C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_GETISSUERANDSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x7B2B70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B6CB0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsUtilities_TypeDefinitionIndex = 22712;

	class CmsUtilities : public Il2CppObject
	{
	public:
		::System::Int32 get_MaximumMemory()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_GET_MAXIMUMMEMORY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadContentInfo(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_READCONTENTINFO_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadContentInfo(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_READCONTENTINFO_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadContentInfo(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1InputStream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1InputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_READCONTENTINFO_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* StreamToByteArray(::System::IO::Stream* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_STREAMTOBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* StreamToByteArray(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_STREAMTOBYTEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IList* GetCertificatesFromStore(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg)
		{
			return (return (::System::Collections::IList*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_GETCERTIFICATESFROMSTORE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* GetCrlsFromStore(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg)
		{
			return (return (::System::Collections::IList*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_GETCRLSFROMSTORE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* CreateBerSetFromList(::System::Collections::IList* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_CREATEBERSETFROMLIST_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* CreateDerSetFromList(::System::Collections::IList* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_CREATEDERSETFROMLIST_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* CreateBerOctetOutputStream(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::System::Int32, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_CREATEBEROCTETOUTPUTSTREAM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* GetTbsCertificateStructure(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_GETTBSCERTIFICATESTRUCTURE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* GetIssuerAndSerialNumber(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_GETISSUERANDSERIALNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSUTILITIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

