#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPathBuilderResult; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixBuilderParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class IX509AttributeCertificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTPATHBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x946DF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTPATHBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x948030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTPATHBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9490A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixAttrCertPathBuilder_TypeDefinitionIndex = 21653;

	class PkixAttrCertPathBuilder : public Il2CppObject
	{
	public:
		::System::Exception* certPathException; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Build(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTPATHBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Build(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters* arg, ::System::Collections::IList* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTPATHBUILDER_BUILD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXATTRCERTPATHBUILDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

