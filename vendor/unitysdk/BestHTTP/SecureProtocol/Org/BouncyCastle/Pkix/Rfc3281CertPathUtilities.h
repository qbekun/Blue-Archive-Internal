#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class IX509AttributeCertificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPath; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPathValidatorResult; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class DistributionPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class CertStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class ReasonsMask; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_PROCESSATTRCERT5_OFFSET UNITYSDK_OFFSET(0x97BD80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_CHECKCRLS_OFFSET UNITYSDK_OFFSET(0x97BFC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_ADDITIONALCHECKS_OFFSET UNITYSDK_OFFSET(0x97D840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_PROCESSATTRCERT1_OFFSET UNITYSDK_OFFSET(0x97E0D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_PROCESSATTRCERT2_OFFSET UNITYSDK_OFFSET(0x97EDD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_PROCESSATTRCERT4_OFFSET UNITYSDK_OFFSET(0x97EF30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_PROCESSATTRCERT7_OFFSET UNITYSDK_OFFSET(0x97F410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_CHECKCRL_OFFSET UNITYSDK_OFFSET(0x97CEB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x97FBC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_PROCESSATTRCERT3_OFFSET UNITYSDK_OFFSET(0x97FBD0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int Rfc3281CertPathUtilities_TypeDefinitionIndex = 21672;

	class Rfc3281CertPathUtilities : public Il2CppObject
	{
	public:
		::System::Void ProcessAttrCert5(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_PROCESSATTRCERT5_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckCrls(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::DateTime* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::DateTime*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_CHECKCRLS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AdditionalChecks(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_ADDITIONALCHECKS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* ProcessAttrCert1(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_PROCESSATTRCERT1_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* ProcessAttrCert2(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_PROCESSATTRCERT2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessAttrCert4(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_PROCESSATTRCERT4_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessAttrCert7(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_PROCESSATTRCERT7_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckCrl(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg, ::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_CHECKCRL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ProcessAttrCert3(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3281CERTPATHUTILITIES_PROCESSATTRCERT3_OFFSET))(arg, arg, nullptr);
		}

	};
}

