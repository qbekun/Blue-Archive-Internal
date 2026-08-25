#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class OcspStatusRequest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_OCSPSTATUSREQUEST_PARSE_OFFSET UNITYSDK_OFFSET(0x5F7440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_OCSPSTATUSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x611210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_OCSPSTATUSREQUEST_GET_RESPONDERIDLIST_OFFSET UNITYSDK_OFFSET(0x611260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_OCSPSTATUSREQUEST_GET_REQUESTEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x611270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_OCSPSTATUSREQUEST_ENCODE_OFFSET UNITYSDK_OFFSET(0x611280)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int OcspStatusRequest_TypeDefinitionIndex = 22153;

	class OcspStatusRequest : public Il2CppObject
	{
	public:
		::System::Collections::IList* mResponderIDList; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* mRequestExtensions; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest* Parse(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_OCSPSTATUSREQUEST_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_OCSPSTATUSREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IList* get_ResponderIDList()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_OCSPSTATUSREQUEST_GET_RESPONDERIDLIST_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* get_RequestExtensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_OCSPSTATUSREQUEST_GET_REQUESTEXTENSIONS_OFFSET))(nullptr);
		}

		::System::Void Encode(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_OCSPSTATUSREQUEST_ENCODE_OFFSET))(arg, nullptr);
		}

	};
}

