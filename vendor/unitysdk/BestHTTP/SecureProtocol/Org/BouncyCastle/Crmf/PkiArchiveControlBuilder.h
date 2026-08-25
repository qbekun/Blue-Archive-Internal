#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsEnvelopedDataGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsProcessableByteArray; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf { class PkiArchiveControl; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherBuilderWithKey; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf { class PkiArchiveControlBuilder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class RecipientInfoGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class PrivateKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralName; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROLBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x78B470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROLBUILDER_ADDRECIPIENTGENERATOR_OFFSET UNITYSDK_OFFSET(0x78C2A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROLBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x78C410)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf
{
	inline static constexpr unsigned int PkiArchiveControlBuilder_TypeDefinitionIndex = 22657;

	class PkiArchiveControlBuilder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* envGen; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessableByteArray* keyContent; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PkiArchiveControl* Build(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PkiArchiveControl*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROLBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder* AddRecipientGenerator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInfoGenerator* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PkiArchiveControlBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInfoGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROLBUILDER_ADDRECIPIENTGENERATOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROLBUILDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

