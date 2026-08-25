#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixAttrCertChecker; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class IX509AttributeCertificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPath; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTCHECKER_GETSUPPORTEDEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x946DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTCHECKER_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTCHECKER_CHECK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixAttrCertChecker_TypeDefinitionIndex = 21652;

	class PkixAttrCertChecker : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetSupportedExtensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTCHECKER_GETSUPPORTEDEXTENSIONS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTCHECKER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixAttrCertChecker* Clone()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixAttrCertChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTCHECKER_CLONE_OFFSET))(nullptr);
		}

		::System::Void Check(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTCHECKER_CHECK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

