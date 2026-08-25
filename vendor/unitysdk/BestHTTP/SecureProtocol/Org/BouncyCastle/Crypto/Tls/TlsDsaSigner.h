#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SignatureAndHashAlgorithm; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDsa; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_CREATESIGNER_OFFSET UNITYSDK_OFFSET(0x6250C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6250F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_VERIFYRAWSIGNATURE_OFFSET UNITYSDK_OFFSET(0x625100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_GENERATERAWSIGNATURE_OFFSET UNITYSDK_OFFSET(0x625310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_CREATEVERIFYER_OFFSET UNITYSDK_OFFSET(0x6255C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_CREATEDSAIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_MAKEINITPARAMETERS_OFFSET UNITYSDK_OFFSET(0x6255F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_MAKESIGNER_OFFSET UNITYSDK_OFFSET(0x625600)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsDsaSigner_TypeDefinitionIndex = 22199;

	class TlsDsaSigner : public ::Mono::Math::Prime::PrimalityTests
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* CreateSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_CREATESIGNER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean VerifyRawSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_VERIFYRAWSIGNATURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateRawSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_GENERATERAWSIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* CreateVerifyer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_CREATEVERIFYER_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDsa* CreateDsaImpl(::System::Byte arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDsa*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_CREATEDSAIMPL_OFFSET))(arg, nullptr);
		}

		::System::Byte get_SignatureAlgorithm()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_GET_SIGNATUREALGORITHM_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* MakeInitParameters(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_MAKEINITPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* MakeSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::System::Boolean arg, ::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::System::Boolean, ::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDSASIGNER_MAKESIGNER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

