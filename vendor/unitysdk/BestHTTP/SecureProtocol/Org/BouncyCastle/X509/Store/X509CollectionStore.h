#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Selector; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509COLLECTIONSTORE_GETMATCHES_OFFSET UNITYSDK_OFFSET(0x8C4920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509COLLECTIONSTORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C4E80)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store
{
	inline static constexpr unsigned int X509CollectionStore_TypeDefinitionIndex = 21559;

	class X509CollectionStore : public Il2CppObject
	{
	public:
		::System::Collections::ICollection* _local; // 0x10

		::System::Collections::ICollection* GetMatches(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509COLLECTIONSTORE_GETMATCHES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509COLLECTIONSTORE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

