#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SessionParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSESSIONIMPL_.CTOR_OFFSET UNITYSDK_OFFSET(0x65BF90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSESSIONIMPL_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x65C100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSESSIONIMPL_GET_ISRESUMABLE_OFFSET UNITYSDK_OFFSET(0x65C1E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSESSIONIMPL_EXPORTSESSIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x65C2C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSESSIONIMPL_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x65C3E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsSessionImpl_TypeDefinitionIndex = 22231;

	class TlsSessionImpl : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* mSessionID; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters* mSessionParameters; // 0x18
		::System::Boolean mResumable; // 0x20

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSESSIONIMPL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SessionID()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSESSIONIMPL_GET_SESSIONID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsResumable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSESSIONIMPL_GET_ISRESUMABLE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters* ExportSessionParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSESSIONIMPL_EXPORTSESSIONPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void Invalidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSESSIONIMPL_INVALIDATE_OFFSET))(nullptr);
		}

	};
}

