#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class RsaKeyParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAUTILITIES_SAFEDECRYPTPREMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x636950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x636DB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAUTILITIES_GENERATEENCRYPTEDPREMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x634D30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsRsaUtilities_TypeDefinitionIndex = 22225;

	class TlsRsaUtilities : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SafeDecryptPreMasterSecret(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAUTILITIES_SAFEDECRYPTPREMASTERSECRET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateEncryptedPreMasterSecret(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* arg, ::System::IO::Stream* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAUTILITIES_GENERATEENCRYPTEDPREMASTERSECRET_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

