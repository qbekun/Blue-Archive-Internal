#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSignedDataStreamGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class SignerIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsAttributeTableGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class SignerInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }

#define SIGNERINFOGENERATORIMPL_.CTOR_OFFSET UNITYSDK_OFFSET(0x7A2B50)
#define SIGNERINFOGENERATORIMPL_GENERATE_OFFSET UNITYSDK_OFFSET(0x7A5350)

	inline static constexpr unsigned int SignerInfoGeneratorImpl_TypeDefinitionIndex = 22702;

	class SignerInfoGeneratorImpl : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* _signerIdentifier; // 0x18
		::System::String* _digestOID; // 0x20
		::System::String* _encOID; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* _sAttr; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* _unsAttr; // 0x38
		::System::String* _encName; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* _sig; // 0x48

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* arg, ::System::String* str, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::System::String*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + SIGNERINFOGENERATORIMPL_.CTOR_OFFSET))(arg, arg, arg, str, str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerInfo* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SIGNERINFOGENERATORIMPL_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

