#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class OcspResponse; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F6E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_ENCODE_OFFSET UNITYSDK_OFFSET(0x5F6FD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x5F7110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_PARSE_OFFSET UNITYSDK_OFFSET(0x5F7120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_GET_STATUSTYPE_OFFSET UNITYSDK_OFFSET(0x5F7220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_GETOCSPRESPONSE_OFFSET UNITYSDK_OFFSET(0x5F7230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_ISCORRECTTYPE_OFFSET UNITYSDK_OFFSET(0x5F6EF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int CertificateStatus_TypeDefinitionIndex = 22084;

	class CertificateStatus : public Il2CppObject
	{
	public:
		::System::Byte mStatusType; // 0x10
		::System::Object* mResponse; // 0x18

		::System::Void .ctor(::System::Byte arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Encode(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Response()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_GET_RESPONSE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus* Parse(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Byte get_StatusType()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_GET_STATUSTYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::OcspResponse* GetOcspResponse()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::OcspResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_GETOCSPRESPONSE_OFFSET))(nullptr);
		}

		::System::Boolean IsCorrectType(::System::Byte arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUS_ISCORRECTTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

