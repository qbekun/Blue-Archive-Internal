#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEREQUEST_GET_SUPPORTEDSIGNATUREALGORITHMS_OFFSET UNITYSDK_OFFSET(0x5F6070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEREQUEST_GET_CERTIFICATEAUTHORITIES_OFFSET UNITYSDK_OFFSET(0x5F6080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEREQUEST_GET_CERTIFICATETYPES_OFFSET UNITYSDK_OFFSET(0x5F6090)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F60A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEREQUEST_ENCODE_OFFSET UNITYSDK_OFFSET(0x5F6100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEREQUEST_PARSE_OFFSET UNITYSDK_OFFSET(0x5F6A70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int CertificateRequest_TypeDefinitionIndex = 22083;

	class CertificateRequest : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* mCertificateTypes; // 0x10
		::System::Collections::IList* mSupportedSignatureAlgorithms; // 0x18
		::System::Collections::IList* mCertificateAuthorities; // 0x20

		::System::Collections::IList* get_SupportedSignatureAlgorithms()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEREQUEST_GET_SUPPORTEDSIGNATUREALGORITHMS_OFFSET))(nullptr);
		}

		::System::Collections::IList* get_CertificateAuthorities()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEREQUEST_GET_CERTIFICATEAUTHORITIES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CertificateTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEREQUEST_GET_CERTIFICATETYPES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Collections::IList* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Collections::IList*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEREQUEST_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Encode(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEREQUEST_ENCODE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* Parse(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATEREQUEST_PARSE_OFFSET))(arg, arg, nullptr);
		}

	};
}

