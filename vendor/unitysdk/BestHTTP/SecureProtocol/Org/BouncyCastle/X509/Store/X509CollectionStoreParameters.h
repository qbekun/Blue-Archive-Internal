#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509COLLECTIONSTOREPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C4F40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509COLLECTIONSTOREPARAMETERS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8C5060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509COLLECTIONSTOREPARAMETERS_GETCOLLECTION_OFFSET UNITYSDK_OFFSET(0x8C5190)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store
{
	inline static constexpr unsigned int X509CollectionStoreParameters_TypeDefinitionIndex = 21560;

	class X509CollectionStoreParameters : public Il2CppObject
	{
	public:
		::System::Collections::IList* collection; // 0x10

		::System::Void .ctor(::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509COLLECTIONSTOREPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509COLLECTIONSTOREPARAMETERS_TOSTRING_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* GetCollection()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509COLLECTIONSTOREPARAMETERS_GETCOLLECTION_OFFSET))(nullptr);
		}

	};
}

