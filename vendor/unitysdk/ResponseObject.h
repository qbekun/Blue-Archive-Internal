#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class CertificateID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class CertStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerGeneralizedTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class CertificateStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class SingleResponse; }

#define RESPONSEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2270)
#define RESPONSEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D25C0)
#define RESPONSEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D3870)
#define RESPONSEOBJECT_TORESPONSE_OFFSET UNITYSDK_OFFSET(0x9D35E0)

	inline static constexpr unsigned int ResponseObject_TypeDefinitionIndex = 21734;

	class ResponseObject : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* certId; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertStatus* certStatus; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* thisUpdate; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* nextUpdate; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions; // 0x30

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* arg, ::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus*, ::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + RESPONSEOBJECT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* arg, ::System::DateTime* arg, ::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus*, ::System::DateTime*, ::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + RESPONSEOBJECT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + RESPONSEOBJECT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* ToResponse()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESPONSEOBJECT_TORESPONSE_OFFSET))(nullptr);
		}

	};

