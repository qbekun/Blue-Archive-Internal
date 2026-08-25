#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKIDENTITY_SKIPIDENTITYHINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKIDENTITY_NOTIFYIDENTITYHINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKIDENTITY_GETPSKIDENTITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKIDENTITY_GETPSK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsPskIdentity_TypeDefinitionIndex = 22220;

	class TlsPskIdentity : public Il2CppObject
	{
	public:
		::System::Void SkipIdentityHint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKIDENTITY_SKIPIDENTITYHINT_OFFSET))(nullptr);
		}

		::System::Void NotifyIdentityHint(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKIDENTITY_NOTIFYIDENTITYHINT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPskIdentity()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKIDENTITY_GETPSKIDENTITY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPsk()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKIDENTITY_GETPSK_OFFSET))(nullptr);
		}

	};
}

