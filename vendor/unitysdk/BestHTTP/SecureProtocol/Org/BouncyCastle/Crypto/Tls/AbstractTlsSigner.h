#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SignatureAndHashAlgorithm; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_INIT_OFFSET UNITYSDK_OFFSET(0x5F3B00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_GENERATERAWSIGNATURE_OFFSET UNITYSDK_OFFSET(0x5F3B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_GENERATERAWSIGNATURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_VERIFYRAWSIGNATURE_OFFSET UNITYSDK_OFFSET(0x5F3B40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_VERIFYRAWSIGNATURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_CREATESIGNER_OFFSET UNITYSDK_OFFSET(0x5F3B70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_CREATESIGNER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_CREATEVERIFYER_OFFSET UNITYSDK_OFFSET(0x5F3B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_CREATEVERIFYER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_ISVALIDPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F3BB0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int AbstractTlsSigner_TypeDefinitionIndex = 22072;

	class AbstractTlsSigner : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext; // 0x10

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_INIT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateRawSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_GENERATERAWSIGNATURE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateRawSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_GENERATERAWSIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyRawSignature(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_VERIFYRAWSIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyRawSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_VERIFYRAWSIGNATURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* CreateSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_CREATESIGNER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* CreateSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_CREATESIGNER_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* CreateVerifyer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_CREATEVERIFYER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* CreateVerifyer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_CREATEVERIFYER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValidPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_ISVALIDPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSSIGNER_.CTOR_OFFSET))(nullptr);
		}

	};
}

