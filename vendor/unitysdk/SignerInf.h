#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSignedGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISignatureFactory; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class SignerIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsAttributeTableGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class SignerInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsProcessable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define SIGNERINF_.CTOR_OFFSET UNITYSDK_OFFSET(0x79B1E0)
#define SIGNERINF_.CTOR_OFFSET UNITYSDK_OFFSET(0x79B620)
#define SIGNERINF_GET_DIGESTALGORITHMID_OFFSET UNITYSDK_OFFSET(0x79BB60)
#define SIGNERINF_GET_SIGNEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x79BC20)
#define SIGNERINF_GET_UNSIGNEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x79BC30)
#define SIGNERINF_TOSIGNERINFO_OFFSET UNITYSDK_OFFSET(0x79BC40)

	inline static constexpr unsigned int SignerInf_TypeDefinitionIndex = 22698;

	class SignerInf : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedGenerator* outer; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* sigCalc; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier; // 0x20
		::System::String* digestOID; // 0x28
		::System::String* encOID; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable; // 0x48

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* arg, ::System::String* str, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::System::String*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + SIGNERINF_.CTOR_OFFSET))(arg, arg, arg, str, str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + SIGNERINF_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithmID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNERINF_GET_DIGESTALGORITHMID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* get_SignedAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNERINF_GET_SIGNEDATTRIBUTES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* get_UnsignedAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNERINF_GET_UNSIGNEDATTRIBUTES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerInfo* ToSignerInfo(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + SIGNERINF_TOSIGNERINFO_OFFSET))(arg, arg, arg, nullptr);
		}

	};

