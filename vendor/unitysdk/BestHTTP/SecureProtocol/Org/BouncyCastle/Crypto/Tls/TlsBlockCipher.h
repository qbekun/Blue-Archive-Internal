#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsMac; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_GET_READMAC_OFFSET UNITYSDK_OFFSET(0x618C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_ENCODEPLAINTEXT_OFFSET UNITYSDK_OFFSET(0x618C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_CHECKPADDINGCONSTANTTIME_OFFSET UNITYSDK_OFFSET(0x6197A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_CHOOSEEXTRAPADBLOCKS_OFFSET UNITYSDK_OFFSET(0x619BD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_DECODECIPHERTEXT_OFFSET UNITYSDK_OFFSET(0x619C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x61A5D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_GETPLAINTEXTLIMIT_OFFSET UNITYSDK_OFFSET(0x61B6B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_GET_WRITEMAC_OFFSET UNITYSDK_OFFSET(0x61B7A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_LOWESTBITSET_OFFSET UNITYSDK_OFFSET(0x61B7B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsBlockCipher_TypeDefinitionIndex = 22182;

	class TlsBlockCipher : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context; // 0x10
		::Il2CppArray<::System::Object*>* randomData; // 0x18
		::System::Boolean useExplicitIV; // 0x20
		::System::Boolean encryptThenMac; // 0x21
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* encryptCipher; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* decryptCipher; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsMac* mWriteMac; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsMac* mReadMac; // 0x40
		::Il2CppArray<::System::Object*>* explicitIV; // 0x48

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsMac* get_ReadMac()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsMac*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_GET_READMAC_OFFSET))(nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* EncodePlaintext(::System::Int64 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::Int64, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_ENCODEPLAINTEXT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CheckPaddingConstantTime(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_CHECKPADDINGCONSTANTTIME_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ChooseExtraPadBlocks(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_CHOOSEEXTRAPADBLOCKS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* DecodeCiphertext(::System::Int64 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::Int64, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_DECODECIPHERTEXT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetPlaintextLimit(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_GETPLAINTEXTLIMIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsMac* get_WriteMac()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsMac*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_GET_WRITEMAC_OFFSET))(nullptr);
		}

		::System::Int32 LowestBitSet(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSBLOCKCIPHER_LOWESTBITSET_OFFSET))(arg, nullptr);
		}

	};
}

