#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPathValidatorResult; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPath; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTPATHVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x948FF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTPATHVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x9490B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixAttrCertPathValidator_TypeDefinitionIndex = 21654;

	class PkixAttrCertPathValidator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTPATHVALIDATOR_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* Validate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTPATHVALIDATOR_VALIDATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

