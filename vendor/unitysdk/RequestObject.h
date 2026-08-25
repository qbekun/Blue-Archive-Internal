#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class CertificateID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class Request; }

#define REQUESTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D5980)
#define REQUESTOBJECT_TOREQUEST_OFFSET UNITYSDK_OFFSET(0x9D6A40)

	inline static constexpr unsigned int RequestObject_TypeDefinitionIndex = 21740;

	class RequestObject : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* certId; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + REQUESTOBJECT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::Request* ToRequest()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::Request*(*)(::PVOID))((::PBYTE)hIl2Cpp + REQUESTOBJECT_TOREQUEST_OFFSET))(nullptr);
		}

	};

