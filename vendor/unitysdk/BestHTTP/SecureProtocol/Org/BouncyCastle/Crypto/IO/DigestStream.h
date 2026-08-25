#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x6C1E20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_WRITEDIGEST_OFFSET UNITYSDK_OFFSET(0x6C1F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x6C1F10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x6C1F40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x6C1F70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x6C1FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x6C1FD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x6C2030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_READDIGEST_OFFSET UNITYSDK_OFFSET(0x6C2060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x6C2070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x6C2170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x6C21A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x6C21D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x6C2260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x6C2290)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x6C2360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x6C2450)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO
{
	inline static constexpr unsigned int DigestStream_TypeDefinitionIndex = 22445;

	class DigestStream : public Il2CppObject
	{
	public:
		::System::IO::Stream* stream; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* inDigest; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* outDigest; // 0x38

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* WriteDigest()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_WRITEDIGEST_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_CLOSE_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* ReadDigest()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_READDIGEST_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_DIGESTSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

	};
}

