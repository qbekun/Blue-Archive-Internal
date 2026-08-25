#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPathValidatorResult; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPath; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x94EAC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOR_CHECKCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x94F6B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x94F7D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixCertPathValidator_TypeDefinitionIndex = 21661;

	class PkixCertPathValidator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOR_CHECKCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* Validate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATOR_VALIDATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

