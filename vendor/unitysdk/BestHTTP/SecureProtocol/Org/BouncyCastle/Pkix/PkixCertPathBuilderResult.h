#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPath; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class TrustAnchor; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixPolicyNode; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHBUILDERRESULT_GET_CERTPATH_OFFSET UNITYSDK_OFFSET(0x94F3E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHBUILDERRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94F3F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHBUILDERRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94EBD0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixCertPathBuilderResult_TypeDefinitionIndex = 21659;

	class PkixCertPathBuilderResult : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath; // 0x28

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* get_CertPath()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHBUILDERRESULT_GET_CERTPATH_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHBUILDERRESULT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHBUILDERRESULT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

