#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Store; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509StoreParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509STOREFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x8C6100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509STOREFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C6A00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509STOREFACTORY_CHECKCORRECTTYPE_OFFSET UNITYSDK_OFFSET(0x8C6660)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store
{
	inline static constexpr unsigned int X509StoreFactory_TypeDefinitionIndex = 21563;

	class X509StoreFactory : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* Create(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509StoreParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509StoreParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509STOREFACTORY_CREATE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509STOREFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void checkCorrectType(::System::Collections::ICollection* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509STOREFACTORY_CHECKCORRECTTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

