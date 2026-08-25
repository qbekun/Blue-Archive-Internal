#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsAttributeTableParameter; }

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsAttributeTableParameter_TypeDefinitionIndex = 22666;

	class CmsAttributeTableParameter : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableParameter* ContentType; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableParameter* Digest; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableParameter* Signature; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableParameter* DigestAlgorithmIdentifier; // 0x0

	};
}

