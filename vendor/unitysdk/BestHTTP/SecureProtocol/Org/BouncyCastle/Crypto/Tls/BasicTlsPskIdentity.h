#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BASICTLSPSKIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F40D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BASICTLSPSKIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F4160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BASICTLSPSKIDENTITY_SKIPIDENTITYHINT_OFFSET UNITYSDK_OFFSET(0x5F41F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BASICTLSPSKIDENTITY_NOTIFYIDENTITYHINT_OFFSET UNITYSDK_OFFSET(0x5F4200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BASICTLSPSKIDENTITY_GETPSKIDENTITY_OFFSET UNITYSDK_OFFSET(0x5F4210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BASICTLSPSKIDENTITY_GETPSK_OFFSET UNITYSDK_OFFSET(0x5F4220)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int BasicTlsPskIdentity_TypeDefinitionIndex = 22077;

	class BasicTlsPskIdentity : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* mIdentity; // 0x10
		::Il2CppArray<::System::Object*>* mPsk; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BASICTLSPSKIDENTITY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BASICTLSPSKIDENTITY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void SkipIdentityHint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BASICTLSPSKIDENTITY_SKIPIDENTITYHINT_OFFSET))(nullptr);
		}

		::System::Void NotifyIdentityHint(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BASICTLSPSKIDENTITY_NOTIFYIDENTITYHINT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPskIdentity()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BASICTLSPSKIDENTITY_GETPSKIDENTITY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPsk()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BASICTLSPSKIDENTITY_GETPSK_OFFSET))(nullptr);
		}

	};
}

