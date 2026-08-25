#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class BasicOcspResponse; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class ResponseData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class RespID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Store; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class RespData; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_RESPONDERID_OFFSET UNITYSDK_OFFSET(0x9D0C20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D0C90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_VERIFY_OFFSET UNITYSDK_OFFSET(0x9D0CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETX509EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9D1140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9D1180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_SIGNATUREALGOID_OFFSET UNITYSDK_OFFSET(0x9D18B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_PRODUCEDAT_OFFSET UNITYSDK_OFFSET(0x9D18F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_SIGNATUREALGNAME_OFFSET UNITYSDK_OFFSET(0x9D1040)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D1920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETCERTLIST_OFFSET UNITYSDK_OFFSET(0x9D1310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D19C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETCERTS_OFFSET UNITYSDK_OFFSET(0x9D1A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETRESPONSEDATA_OFFSET UNITYSDK_OFFSET(0x9D1CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_RESPONSES_OFFSET UNITYSDK_OFFSET(0x9D1D20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETENCODED_OFFSET UNITYSDK_OFFSET(0x9D1E70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9D1E90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETTBSRESPONSEDATA_OFFSET UNITYSDK_OFFSET(0x9D1EC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9D10C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_RESPONSEEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9D1160)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp
{
	inline static constexpr unsigned int BasicOcspResp_TypeDefinitionIndex = 21733;

	class BasicOcspResp : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* resp; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponseData* data; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::RespID* get_ResponderId()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::RespID*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_RESPONDERID_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Verify(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_VERIFY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETX509EXTENSIONS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETCERTIFICATES_OFFSET))(str, nullptr);
		}

		::System::String* get_SignatureAlgOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_SIGNATUREALGOID_OFFSET))(nullptr);
		}

		::System::DateTime* get_ProducedAt()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_PRODUCEDAT_OFFSET))(nullptr);
		}

		::System::String* get_SignatureAlgName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_SIGNATUREALGNAME_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* GetCertList()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETCERTLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCerts()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETCERTS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::RespData* GetResponseData()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::RespData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETRESPONSEDATA_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Responses()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_RESPONSES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETENCODED_OFFSET))(nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_VERSION_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetTbsResponseData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETTBSRESPONSEDATA_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSignature()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GETSIGNATURE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* get_ResponseExtensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESP_GET_RESPONSEEXTENSIONS_OFFSET))(nullptr);
		}

	};
}

