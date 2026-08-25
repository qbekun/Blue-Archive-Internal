#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBufferedCipher; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x6C1130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x6C1180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x6C1280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x6C12D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x6C1320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_READANDPROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6C14F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x6C1720)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x6C1770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x6C1780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_FILLINBUF_OFFSET UNITYSDK_OFFSET(0x6C1490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x6C17D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x6C1800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_WRITECIPHER_OFFSET UNITYSDK_OFFSET(0x6C18C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_READCIPHER_OFFSET UNITYSDK_OFFSET(0x6C18D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x6C18E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x6C1930)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x6C1A50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x6C1AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x6C1BC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO
{
	inline static constexpr unsigned int CipherStream_TypeDefinitionIndex = 22443;

	class CipherStream : public Il2CppObject
	{
	public:
		::System::IO::Stream* stream; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* inCipher; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* outCipher; // 0x38
		::Il2CppArray<::System::Object*>* mInBuf; // 0x40
		::System::Int32 mInPos; // 0x48
		::System::Boolean inStreamEnded; // 0x4C

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadAndProcessBlock()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_READANDPROCESSBLOCK_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Boolean FillInBuf()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_FILLINBUF_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* get_WriteCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_WRITECIPHER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* get_ReadCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_READCIPHER_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_CLOSE_OFFSET))(nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_CIPHERSTREAM_READBYTE_OFFSET))(nullptr);
		}

	};
}

