#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class OcspRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1InputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralName; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Store; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D4410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D4440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D4640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D44B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETTBSREQUEST_OFFSET UNITYSDK_OFFSET(0x9D46B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9D47D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GET_REQUESTORNAME_OFFSET UNITYSDK_OFFSET(0x9D4810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETREQUESTLIST_OFFSET UNITYSDK_OFFSET(0x9D4840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GET_REQUESTEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9D4990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETX509EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9D4A00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GET_SIGNATUREALGOID_OFFSET UNITYSDK_OFFSET(0x9D4A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9D4AE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETCERTLIST_OFFSET UNITYSDK_OFFSET(0x9D4B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETCERTS_OFFSET UNITYSDK_OFFSET(0x9D5030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9D52E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GET_ISSIGNED_OFFSET UNITYSDK_OFFSET(0x9D4AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_VERIFY_OFFSET UNITYSDK_OFFSET(0x9D5480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETENCODED_OFFSET UNITYSDK_OFFSET(0x9D5860)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp
{
	inline static constexpr unsigned int OcspReq_TypeDefinitionIndex = 21739;

	class OcspReq : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* req; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1InputStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1InputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetTbsRequest()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETTBSREQUEST_OFFSET))(nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GET_VERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* get_RequestorName()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GET_REQUESTORNAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRequestList()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETREQUESTLIST_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* get_RequestExtensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GET_REQUESTEXTENSIONS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETX509EXTENSIONS_OFFSET))(nullptr);
		}

		::System::String* get_SignatureAlgOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GET_SIGNATUREALGOID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSignature()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETSIGNATURE_OFFSET))(nullptr);
		}

		::System::Collections::IList* GetCertList()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETCERTLIST_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCerts()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETCERTS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETCERTIFICATES_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsSigned()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GET_ISSIGNED_OFFSET))(nullptr);
		}

		::System::Boolean Verify(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_VERIFY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_OCSPREQ_GETENCODED_OFFSET))(nullptr);
		}

	};
}

