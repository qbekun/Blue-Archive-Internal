#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_IX509SELECTOR_MATCH_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store
{
	inline static constexpr unsigned int IX509Selector_TypeDefinitionIndex = 21552;

	class IX509Selector : public Il2CppObject
	{
	public:
		::System::Boolean Match(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_IX509SELECTOR_MATCH_OFFSET))(arg, nullptr);
		}

	};
}

