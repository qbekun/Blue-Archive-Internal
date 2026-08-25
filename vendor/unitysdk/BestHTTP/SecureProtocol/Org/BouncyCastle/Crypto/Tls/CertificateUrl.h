#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateUrl; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEURL_ENCODE_OFFSET UNITYSDK_OFFSET(0x5F7B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEURL_GET_URLANDHASHLIST_OFFSET UNITYSDK_OFFSET(0x5F80A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEURL_PARSE_OFFSET UNITYSDK_OFFSET(0x5F80B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEURL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x5F84C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEURL_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F8350)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int CertificateUrl_TypeDefinitionIndex = 22089;

	class CertificateUrl : public Il2CppObject
	{
	public:
		::System::Byte mType; // 0x10
		::System::Collections::IList* mUrlAndHashList; // 0x18

		::System::Void Encode(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEURL_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* get_UrlAndHashList()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEURL_GET_URLANDHASHLIST_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateUrl* parse(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateUrl*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEURL_PARSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Byte get_Type()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEURL_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Byte arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEURL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

