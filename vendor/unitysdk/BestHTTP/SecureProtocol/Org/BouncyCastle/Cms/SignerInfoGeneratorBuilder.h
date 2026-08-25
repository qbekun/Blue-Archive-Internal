#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsAttributeTableGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInfoGeneratorBuilder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInfoGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISignatureFactory; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class SignerIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BFFF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_SETDIRECTSIGNATURE_OFFSET UNITYSDK_OFFSET(0x7C0000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_WITHSIGNEDATTRIBUTEGENERATOR_OFFSET UNITYSDK_OFFSET(0x7C0010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_WITHUNSIGNEDATTRIBUTEGENERATOR_OFFSET UNITYSDK_OFFSET(0x7C0030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x7C0050)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x7C03A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_CREATEGENERATOR_OFFSET UNITYSDK_OFFSET(0x7C0180)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int SignerInfoGeneratorBuilder_TypeDefinitionIndex = 22738;

	class SignerInfoGeneratorBuilder : public Il2CppObject
	{
	public:
		::System::Boolean directSignature; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedGen; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedGen; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* SetDirectSignature(::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_SETDIRECTSIGNATURE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* WithSignedAttributeGenerator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_WITHSIGNEDATTRIBUTEGENERATOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder* WithUnsignedAttributeGenerator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGeneratorBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_WITHUNSIGNEDATTRIBUTEGENERATOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGenerator* Build(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGenerator*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_BUILD_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGenerator* Build(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGenerator*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_BUILD_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGenerator* CreateGenerator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGenerator*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFOGENERATORBUILDER_CREATEGENERATOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

