#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSENCRYPTIONCREDENTIALS_.CTOR_OFFSET UNITYSDK_OFFSET(0x5FEEE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSENCRYPTIONCREDENTIALS_DECRYPTPREMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x5FF150)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSENCRYPTIONCREDENTIALS_GET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x5FF1D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DefaultTlsEncryptionCredentials_TypeDefinitionIndex = 22105;

	class DefaultTlsEncryptionCredentials : public Kernel
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* mCertificate; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mPrivateKey; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSENCRYPTIONCREDENTIALS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecryptPreMasterSecret(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSENCRYPTIONCREDENTIALS_DECRYPTPREMASTERSECRET_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* get_Certificate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSENCRYPTIONCREDENTIALS_GET_CERTIFICATE_OFFSET))(nullptr);
		}

	};
}

