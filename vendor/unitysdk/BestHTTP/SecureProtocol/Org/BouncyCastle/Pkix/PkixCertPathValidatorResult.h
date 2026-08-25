#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class TrustAnchor; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixPolicyNode; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORRESULT_GET_TRUSTANCHOR_OFFSET UNITYSDK_OFFSET(0x95CF40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORRESULT_CLONE_OFFSET UNITYSDK_OFFSET(0x95CF50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95CFC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORRESULT_GET_SUBJECTPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x95D140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F5B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORRESULT_GET_POLICYTREE_OFFSET UNITYSDK_OFFSET(0x95D150)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixCertPathValidatorResult_TypeDefinitionIndex = 21663;

	class PkixCertPathValidatorResult : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor* get_TrustAnchor()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORRESULT_GET_TRUSTANCHOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORRESULT_CLONE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORRESULT_TOSTRING_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_SubjectPublicKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORRESULT_GET_SUBJECTPUBLICKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORRESULT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* get_PolicyTree()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORRESULT_GET_POLICYTREE_OFFSET))(nullptr);
		}

	};
}

