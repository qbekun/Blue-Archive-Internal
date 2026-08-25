#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class EnvelopedDataHelper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherBuilderWithKey; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSCONTENTENCRYPTORBUILDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x5E76A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSCONTENTENCRYPTORBUILDER_GETKEYSIZE_OFFSET UNITYSDK_OFFSET(0x5E7BA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSCONTENTENCRYPTORBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x5E7D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSCONTENTENCRYPTORBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x5E7DC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSCONTENTENCRYPTORBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x5E7E50)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Operators
{
	inline static constexpr unsigned int CmsContentEncryptorBuilder_TypeDefinitionIndex = 22002;

	class CmsContentEncryptorBuilder : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* KeySizes; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID; // 0x10
		::System::Int32 keySize; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::EnvelopedDataHelper* helper; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSCONTENTENCRYPTORBUILDER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetKeySize(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSCONTENTENCRYPTORBUILDER_GETKEYSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSCONTENTENCRYPTORBUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSCONTENTENCRYPTORBUILDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* Build()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSCONTENTENCRYPTORBUILDER_BUILD_OFFSET))(nullptr);
		}

	};
}

