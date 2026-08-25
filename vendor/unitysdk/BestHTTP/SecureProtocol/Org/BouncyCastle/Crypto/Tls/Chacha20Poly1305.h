#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines { class ChaCha7539Engine; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs { class Poly1305; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IStreamCipher; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_GETADDITIONALDATA_OFFSET UNITYSDK_OFFSET(0x5F84D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_DECODECIPHERTEXT_OFFSET UNITYSDK_OFFSET(0x5F8650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F8B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_.CCTOR_OFFSET UNITYSDK_OFFSET(0x5F8F20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_UPDATERECORDMACTEXT_OFFSET UNITYSDK_OFFSET(0x5F8F90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_CALCULATERECORDMAC_OFFSET UNITYSDK_OFFSET(0x5F8A20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_CALCULATENONCE_OFFSET UNITYSDK_OFFSET(0x5F9090)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_ENCODEPLAINTEXT_OFFSET UNITYSDK_OFFSET(0x5F9270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_GETPLAINTEXTLIMIT_OFFSET UNITYSDK_OFFSET(0x5F8910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_UPDATERECORDMACLENGTH_OFFSET UNITYSDK_OFFSET(0x5F9040)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_GENERATERECORDMACKEY_OFFSET UNITYSDK_OFFSET(0x5F9430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_INITRECORD_OFFSET UNITYSDK_OFFSET(0x5F8920)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int Chacha20Poly1305_TypeDefinitionIndex = 22090;

	class Chacha20Poly1305 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Zeroes; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* encryptCipher; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* decryptCipher; // 0x20
		::Il2CppArray<::System::Object*>* encryptIV; // 0x28
		::Il2CppArray<::System::Object*>* decryptIV; // 0x30

		::BestHTTP::PlatformSupport::Memory::BufferSegment* GetAdditionalData(::System::Int64 arg, ::System::Byte arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::Int64, ::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_GETADDITIONALDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* DecodeCiphertext(::System::Int64 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::Int64, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_DECODECIPHERTEXT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateRecordMacText(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs::Poly1305* arg, ::BestHTTP::PlatformSupport::Memory::BufferSegment* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs::Poly1305*, ::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_UPDATERECORDMACTEXT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* CalculateRecordMac(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg, ::BestHTTP::PlatformSupport::Memory::BufferSegment* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_CALCULATERECORDMAC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CalculateNonce(::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_CALCULATENONCE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* EncodePlaintext(::System::Int64 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::Int64, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_ENCODEPLAINTEXT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetPlaintextLimit(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_GETPLAINTEXTLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateRecordMacLength(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs::Poly1305* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs::Poly1305*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_UPDATERECORDMACLENGTH_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GenerateRecordMacKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_GENERATERECORDMACKEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* InitRecord(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* arg, ::System::Boolean arg, ::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher*, ::System::Boolean, ::System::Int64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CHACHA20POLY1305_INITRECORD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

