#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DatagramTransport; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsPeer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class ByteQueue; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class ProtocolVersion; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DtlsEpoch; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DtlsHandshakeRetransmit; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCipher; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_SET_READVERSION_OFFSET UNITYSDK_OFFSET(0x609390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_CLOSETRANSPORT_OFFSET UNITYSDK_OFFSET(0x6093C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_CLOSE_OFFSET UNITYSDK_OFFSET(0x609550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x608360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_RECEIVERECORD_OFFSET UNITYSDK_OFFSET(0x6095D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_GETMACSEQUENCENUMBER_OFFSET UNITYSDK_OFFSET(0x609810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_GET_READEPOCH_OFFSET UNITYSDK_OFFSET(0x609820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_RECEIVE_OFFSET UNITYSDK_OFFSET(0x609840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_RAISEALERT_OFFSET UNITYSDK_OFFSET(0x60A190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_RESETWRITEEPOCH_OFFSET UNITYSDK_OFFSET(0x60A600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_WARN_OFFSET UNITYSDK_OFFSET(0x60A630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_SENDRECORD_OFFSET UNITYSDK_OFFSET(0x60A2C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_FAIL_OFFSET UNITYSDK_OFFSET(0x60A650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_FAILED_OFFSET UNITYSDK_OFFSET(0x60A740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_SETWRITEVERSION_OFFSET UNITYSDK_OFFSET(0x60A780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x60A7B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_GET_READVERSION_OFFSET UNITYSDK_OFFSET(0x60A7D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_SETPLAINTEXTLIMIT_OFFSET UNITYSDK_OFFSET(0x60A7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_HANDSHAKESUCCESSFUL_OFFSET UNITYSDK_OFFSET(0x60A810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_SEND_OFFSET UNITYSDK_OFFSET(0x60A920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_GETRECEIVELIMIT_OFFSET UNITYSDK_OFFSET(0x60AA90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_GETSENDLIMIT_OFFSET UNITYSDK_OFFSET(0x60AC00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_INITPENDINGEPOCH_OFFSET UNITYSDK_OFFSET(0x60AD70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DtlsRecordLayer_TypeDefinitionIndex = 22120;

	class DtlsRecordLayer : public Il2CppObject
	{
	public:
		::System::Int32 RECORD_HEADER_LENGTH; // 0x0
		::System::Int32 MAX_FRAGMENT_LENGTH; // 0x0
		::System::Int64 TCP_MSL; // 0x0
		::System::Int64 RETRANSMIT_TIMEOUT; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DatagramTransport* mTransport; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPeer* mPeer; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ByteQueue* mRecordQueue; // 0x28
		::System::Boolean mClosed; // 0x30
		::System::Boolean mFailed; // 0x31
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mReadVersion; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mWriteVersion; // 0x40
		::System::Boolean mInHandshake; // 0x48
		::System::Int32 mPlaintextLimit; // 0x4C
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mCurrentEpoch; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mPendingEpoch; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mReadEpoch; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mWriteEpoch; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* mRetransmit; // 0x70
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mRetransmitEpoch; // 0x78
		::System::Int64 mRetransmitExpiry; // 0x80

		::System::Void set_ReadVersion(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_SET_READVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void CloseTransport()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_CLOSETRANSPORT_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DatagramTransport* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPeer* arg, ::System::Byte arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DatagramTransport*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPeer*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ReceiveRecord(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_RECEIVERECORD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 GetMacSequenceNumber(::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_GETMACSEQUENCENUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_ReadEpoch()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_GET_READEPOCH_OFFSET))(nullptr);
		}

		::System::Int32 Receive(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_RECEIVE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RaiseAlert(::System::Byte arg, ::System::Byte arg, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_RAISEALERT_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void ResetWriteEpoch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_RESETWRITEEPOCH_OFFSET))(nullptr);
		}

		::System::Void Warn(::System::Byte arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Byte, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_WARN_OFFSET))(arg, str, nullptr);
		}

		::System::Void SendRecord(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_SENDRECORD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Fail(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_FAIL_OFFSET))(arg, nullptr);
		}

		::System::Void Failed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_FAILED_OFFSET))(nullptr);
		}

		::System::Void SetWriteVersion(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_SETWRITEVERSION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsClosed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_GET_ISCLOSED_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ReadVersion()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_GET_READVERSION_OFFSET))(nullptr);
		}

		::System::Void SetPlaintextLimit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_SETPLAINTEXTLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void HandshakeSuccessful(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_HANDSHAKESUCCESSFUL_OFFSET))(arg, nullptr);
		}

		::System::Void Send(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_SEND_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetReceiveLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_GETRECEIVELIMIT_OFFSET))(nullptr);
		}

		::System::Int32 GetSendLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_GETSENDLIMIT_OFFSET))(nullptr);
		}

		::System::Void InitPendingEpoch(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSRECORDLAYER_INITPENDINGEPOCH_OFFSET))(arg, nullptr);
		}

	};
}

