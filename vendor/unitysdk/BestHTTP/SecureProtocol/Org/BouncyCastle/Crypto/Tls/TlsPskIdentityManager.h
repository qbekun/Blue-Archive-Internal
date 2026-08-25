#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKIDENTITYMANAGER_GETPSK_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKIDENTITYMANAGER_GETHINT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsPskIdentityManager_TypeDefinitionIndex = 22221;

	class TlsPskIdentityManager : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetPsk(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKIDENTITYMANAGER_GETPSK_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetHint()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKIDENTITYMANAGER_GETHINT_OFFSET))(nullptr);
		}

	};
}

