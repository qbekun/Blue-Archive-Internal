#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Selector; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_IX509STORE_GETMATCHES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store
{
	inline static constexpr unsigned int IX509Store_TypeDefinitionIndex = 21553;

	class IX509Store : public Il2CppObject
	{
	public:
		::System::Collections::ICollection* GetMatches(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_IX509STORE_GETMATCHES_OFFSET))(arg, nullptr);
		}

	};
}

