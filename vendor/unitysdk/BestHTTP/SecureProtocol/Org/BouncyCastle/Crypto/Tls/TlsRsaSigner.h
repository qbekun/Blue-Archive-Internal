#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SignatureAndHashAlgorithm; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IAsymmetricBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x622EE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_CREATESIGNER_OFFSET UNITYSDK_OFFSET(0x636100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_CREATEVERIFYER_OFFSET UNITYSDK_OFFSET(0x636210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_VERIFYRAWSIGNATURE_OFFSET UNITYSDK_OFFSET(0x636240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_CREATERSAIMPL_OFFSET UNITYSDK_OFFSET(0x6363A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_ISVALIDPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x636420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_GENERATERAWSIGNATURE_OFFSET UNITYSDK_OFFSET(0x636490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_MAKESIGNER_OFFSET UNITYSDK_OFFSET(0x6366A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsRsaSigner_TypeDefinitionIndex = 22224;

	class TlsRsaSigner : public ::Mono::Math::Prime::PrimalityTests
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* CreateSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_CREATESIGNER_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* CreateVerifyer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_CREATEVERIFYER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean VerifyRawSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_VERIFYRAWSIGNATURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* CreateRsaImpl()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_CREATERSAIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsValidPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_ISVALIDPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateRawSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_GENERATERAWSIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* MakeSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::System::Boolean arg, ::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::System::Boolean, ::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSASIGNER_MAKESIGNER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

