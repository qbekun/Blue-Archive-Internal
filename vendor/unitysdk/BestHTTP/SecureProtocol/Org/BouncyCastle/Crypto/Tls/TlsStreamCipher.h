#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IStreamCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsMac; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSTREAMCIPHER_DECODECIPHERTEXT_OFFSET UNITYSDK_OFFSET(0x65FA90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSTREAMCIPHER_CHECKMAC_OFFSET UNITYSDK_OFFSET(0x65FCC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSTREAMCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x65FE70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSTREAMCIPHER_ENCODEPLAINTEXT_OFFSET UNITYSDK_OFFSET(0x660730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSTREAMCIPHER_GETPLAINTEXTLIMIT_OFFSET UNITYSDK_OFFSET(0x6609C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSTREAMCIPHER_UPDATEIV_OFFSET UNITYSDK_OFFSET(0x6609E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsStreamCipher_TypeDefinitionIndex = 22241;

	class TlsStreamCipher : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* encryptCipher; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* decryptCipher; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsMac* writeMac; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsMac* readMac; // 0x30
		::System::Boolean usesNonce; // 0x38

		::BestHTTP::PlatformSupport::Memory::BufferSegment* DecodeCiphertext(::System::Int64 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::Int64, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSTREAMCIPHER_DECODECIPHERTEXT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckMac(::System::Int64 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSTREAMCIPHER_CHECKMAC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSTREAMCIPHER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* EncodePlaintext(::System::Int64 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::Int64, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSTREAMCIPHER_ENCODEPLAINTEXT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetPlaintextLimit(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSTREAMCIPHER_GETPLAINTEXTLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateIV(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* arg, ::System::Boolean arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher*, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSTREAMCIPHER_UPDATEIV_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

