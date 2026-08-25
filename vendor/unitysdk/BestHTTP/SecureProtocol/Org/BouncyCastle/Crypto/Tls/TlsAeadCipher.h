#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes { class IAeadBlockCipher; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAEADCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x617A20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAEADCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x617A50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAEADCIPHER_GETPLAINTEXTLIMIT_OFFSET UNITYSDK_OFFSET(0x617F60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAEADCIPHER_ENCODEPLAINTEXT_OFFSET UNITYSDK_OFFSET(0x617F70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAEADCIPHER_DECODECIPHERTEXT_OFFSET UNITYSDK_OFFSET(0x6186B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAEADCIPHER_GETADDITIONALDATA_OFFSET UNITYSDK_OFFSET(0x618520)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsAeadCipher_TypeDefinitionIndex = 22179;

	class TlsAeadCipher : public Il2CppObject
	{
	public:
		::System::Int32 NONCE_RFC5288; // 0x0
		::System::Int32 NONCE_DRAFT_CHACHA20_POLY1305; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context; // 0x10
		::System::Int32 macSize; // 0x18
		::System::Int32 record_iv_length; // 0x1C
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* encryptCipher; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* decryptCipher; // 0x28
		::Il2CppArray<::System::Object*>* encryptImplicitNonce; // 0x30
		::Il2CppArray<::System::Object*>* decryptImplicitNonce; // 0x38
		::System::Int32 nonceMode; // 0x40

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAEADCIPHER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAEADCIPHER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetPlaintextLimit(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAEADCIPHER_GETPLAINTEXTLIMIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* EncodePlaintext(::System::Int64 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::Int64, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAEADCIPHER_ENCODEPLAINTEXT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* DecodeCiphertext(::System::Int64 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::Int64, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAEADCIPHER_DECODECIPHERTEXT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAdditionalData(::System::Int64 arg, ::System::Byte arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int64, ::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAEADCIPHER_GETADDITIONALDATA_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

