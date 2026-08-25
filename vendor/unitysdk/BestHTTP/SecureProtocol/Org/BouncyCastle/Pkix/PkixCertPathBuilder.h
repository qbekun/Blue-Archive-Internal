#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPathBuilderResult; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixBuilderParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x94C9A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x94DB90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F3C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixCertPathBuilder_TypeDefinitionIndex = 21657;

	class PkixCertPathBuilder : public Il2CppObject
	{
	public:
		::System::Exception* certPathException; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Build(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Build(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters* arg, ::System::Collections::IList* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHBUILDER_BUILD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHBUILDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

