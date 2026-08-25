#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateStatusRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class OcspStatusRequest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_PARSE_OFFSET UNITYSDK_OFFSET(0x5F7360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_ENCODE_OFFSET UNITYSDK_OFFSET(0x5F77F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_ISCORRECTTYPE_OFFSET UNITYSDK_OFFSET(0x5F7900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_GETOCSPSTATUSREQUEST_OFFSET UNITYSDK_OFFSET(0x5F79E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x5F7B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F7740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_GET_STATUSTYPE_OFFSET UNITYSDK_OFFSET(0x5F7B20)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int CertificateStatusRequest_TypeDefinitionIndex = 22085;

	class CertificateStatusRequest : public Il2CppObject
	{
	public:
		::System::Byte mStatusType; // 0x10
		::System::Object* mRequest; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* Parse(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void Encode(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCorrectType(::System::Byte arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_ISCORRECTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest* GetOcspStatusRequest()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_GETOCSPSTATUSREQUEST_OFFSET))(nullptr);
		}

		::System::Object* get_Request()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Byte arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Byte get_StatusType()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSREQUEST_GET_STATUSTYPE_OFFSET))(nullptr);
		}

	};
}

