#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsProtocol; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCompression; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsHandshakeHash; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO { class BaseOutputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class ProtocolVersion; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_GET_HANDSHAKEHASHUPDATER_OFFSET UNITYSDK_OFFSET(0x6126C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x6126D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SETRESTRICTREADVERSION_OFFSET UNITYSDK_OFFSET(0x612700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SENTWRITECIPHERSPEC_OFFSET UNITYSDK_OFFSET(0x612710)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_PREPARETOFINISH_OFFSET UNITYSDK_OFFSET(0x612800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_GETPLAINTEXTLIMIT_OFFSET UNITYSDK_OFFSET(0x6128C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_FINALISEHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x6128D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_CHECKTYPE_OFFSET UNITYSDK_OFFSET(0x612970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_INIT_OFFSET UNITYSDK_OFFSET(0x6129D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SET_READVERSION_OFFSET UNITYSDK_OFFSET(0x612B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SETPLAINTEXTLIMIT_OFFSET UNITYSDK_OFFSET(0x612B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SETWRITEVERSION_OFFSET UNITYSDK_OFFSET(0x612B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_GET_READVERSION_OFFSET UNITYSDK_OFFSET(0x612B80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_GETBUFFERCONTENTS_OFFSET UNITYSDK_OFFSET(0x612B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_WRITERECORD_OFFSET UNITYSDK_OFFSET(0x612BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_READRECORD_OFFSET UNITYSDK_OFFSET(0x613220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_DECODEANDVERIFY_OFFSET UNITYSDK_OFFSET(0x613580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_RECEIVEDREADCIPHERSPEC_OFFSET UNITYSDK_OFFSET(0x613830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SETPENDINGCONNECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x613910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_GET_HANDSHAKEHASH_OFFSET UNITYSDK_OFFSET(0x613950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_CHECKLENGTH_OFFSET UNITYSDK_OFFSET(0x613130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x613960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_CHECKRECORDHEADER_OFFSET UNITYSDK_OFFSET(0x613B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_NOTIFYHELLOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x613D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SAFECLOSE_OFFSET UNITYSDK_OFFSET(0x613DF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int RecordStream_TypeDefinitionIndex = 22160;

	class RecordStream : public Il2CppObject
	{
	public:
		::System::Int32 DEFAULT_PLAINTEXT_LIMIT; // 0x0
		::System::Int32 TLS_HEADER_SIZE; // 0x0
		::System::Int32 TLS_HEADER_TYPE_OFFSET; // 0x0
		::System::Int32 TLS_HEADER_VERSION_OFFSET; // 0x0
		::System::Int32 TLS_HEADER_LENGTH_OFFSET; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsProtocol* mHandler; // 0x10
		::System::IO::Stream* mInput; // 0x18
		::System::IO::Stream* mOutput; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression* mPendingCompression; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression* mReadCompression; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression* mWriteCompression; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* mPendingCipher; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* mReadCipher; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* mWriteCipher; // 0x50
		SequenceNumber* mReadSeqNo; // 0x58
		SequenceNumber* mWriteSeqNo; // 0x60
		::System::IO::MemoryStream* mBuffer; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* mHandshakeHash; // 0x70
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::BaseOutputStream* mHandshakeHashUpdater; // 0x78
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mReadVersion; // 0x80
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mWriteVersion; // 0x88
		::System::Boolean mRestrictReadVersion; // 0x90
		::System::Int32 mPlaintextLimit; // 0x94
		::System::Int32 mCompressedLimit; // 0x98
		::System::Int32 mCiphertextLimit; // 0x9C

		::System::IO::Stream* get_HandshakeHashUpdater()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_GET_HANDSHAKEHASHUPDATER_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Void SetRestrictReadVersion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SETRESTRICTREADVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void SentWriteCipherSpec()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SENTWRITECIPHERSPEC_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* PrepareToFinish()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_PREPARETOFINISH_OFFSET))(nullptr);
		}

		::System::Int32 GetPlaintextLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_GETPLAINTEXTLIMIT_OFFSET))(nullptr);
		}

		::System::Void FinaliseHandshake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_FINALISEHANDSHAKE_OFFSET))(nullptr);
		}

		::System::Void CheckType(::System::Byte arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_CHECKTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReadVersion(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SET_READVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void SetPlaintextLimit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SETPLAINTEXTLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetWriteVersion(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SETWRITEVERSION_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ReadVersion()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_GET_READVERSION_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBufferContents()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_GETBUFFERCONTENTS_OFFSET))(nullptr);
		}

		::System::Void WriteRecord(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_WRITERECORD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ReadRecord()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_READRECORD_OFFSET))(nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* DecodeAndVerify(::System::Byte arg, ::System::IO::Stream* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::Byte, ::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_DECODEANDVERIFY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReceivedReadCipherSpec()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_RECEIVEDREADCIPHERSPEC_OFFSET))(nullptr);
		}

		::System::Void SetPendingConnectionState(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SETPENDINGCONNECTIONSTATE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* get_HandshakeHash()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_GET_HANDSHAKEHASH_OFFSET))(nullptr);
		}

		::System::Void CheckLength(::System::Int32 arg, ::System::Int32 arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_CHECKLENGTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsProtocol* arg, ::System::IO::Stream* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsProtocol*, ::System::IO::Stream*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckRecordHeader(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_CHECKRECORDHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void NotifyHelloComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_NOTIFYHELLOCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void SafeClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_RECORDSTREAM_SAFECLOSE_OFFSET))(nullptr);
		}

	};
}

