#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class RespID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class CertificateID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class CertificateStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class BasicOcspResp; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISignatureFactory; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1FD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2050)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_ADDRESPONSE_OFFSET UNITYSDK_OFFSET(0x9D2100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_ADDRESPONSE_OFFSET UNITYSDK_OFFSET(0x9D2310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_ADDRESPONSE_OFFSET UNITYSDK_OFFSET(0x9D2480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_ADDRESPONSE_OFFSET UNITYSDK_OFFSET(0x9D2680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_SETRESPONSEEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9D2790)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_GENERATERESPONSE_OFFSET UNITYSDK_OFFSET(0x9D27A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x9D3680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x9D36B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x9D37A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_GET_SIGNATUREALGNAMES_OFFSET UNITYSDK_OFFSET(0x9D3810)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp
{
	inline static constexpr unsigned int BasicOcspRespGenerator_TypeDefinitionIndex = 21735;

	class BasicOcspRespGenerator : public Il2CppObject
	{
	public:
		::System::Collections::IList* list; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::RespID* responderID; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::RespID* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::RespID*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddResponse(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_ADDRESPONSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResponse(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_ADDRESPONSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddResponse(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* arg, ::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus*, ::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_ADDRESPONSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddResponse(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* arg, ::System::DateTime* arg, ::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus*, ::System::DateTime*, ::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_ADDRESPONSE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetResponseExtensions(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_SETRESPONSEEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp* GenerateResponse(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg, ::Il2CppArray<::System::Object*>* arg, ::System::DateTime* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::Il2CppArray<::System::Object*>*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_GENERATERESPONSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp* Generate(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::DateTime* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_GENERATE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp* Generate(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_GENERATE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg, ::Il2CppArray<::System::Object*>* arg, ::System::DateTime* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::Il2CppArray<::System::Object*>*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerable* get_SignatureAlgNames()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_BASICOCSPRESPGENERATOR_GET_SIGNATUREALGNAMES_OFFSET))(nullptr);
		}

	};
}

