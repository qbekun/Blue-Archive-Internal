#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTDIGESTALGORITHMIDENTIFIERFINDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7AF920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTDIGESTALGORITHMIDENTIFIERFINDER_FIND_OFFSET UNITYSDK_OFFSET(0x79B900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTDIGESTALGORITHMIDENTIFIERFINDER_FIND_OFFSET UNITYSDK_OFFSET(0x7B1AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTDIGESTALGORITHMIDENTIFIERFINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x79B8F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int DefaultDigestAlgorithmIdentifierFinder_TypeDefinitionIndex = 22706;

	class DefaultDigestAlgorithmIdentifierFinder : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* digestOids; // 0x0
		::System::Collections::IDictionary* digestNameToOids; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTDIGESTALGORITHMIDENTIFIERFINDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* find(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTDIGESTALGORITHMIDENTIFIERFINDER_FIND_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* find(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTDIGESTALGORITHMIDENTIFIERFINDER_FIND_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTDIGESTALGORITHMIDENTIFIERFINDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

