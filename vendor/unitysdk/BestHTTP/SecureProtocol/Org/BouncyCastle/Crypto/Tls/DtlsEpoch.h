#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DtlsReplayWindow; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCipher; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSEPOCH_GET_REPLAYWINDOW_OFFSET UNITYSDK_OFFSET(0x6085D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSEPOCH_GET_SEQUENCENUMBER_OFFSET UNITYSDK_OFFSET(0x6085E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSEPOCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x6086C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSEPOCH_GET_CIPHER_OFFSET UNITYSDK_OFFSET(0x608810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSEPOCH_GET_EPOCH_OFFSET UNITYSDK_OFFSET(0x608820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSEPOCH_ALLOCATESEQUENCENUMBER_OFFSET UNITYSDK_OFFSET(0x608830)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DtlsEpoch_TypeDefinitionIndex = 22115;

	class DtlsEpoch : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* mReplayWindow; // 0x10
		::System::Int32 mEpoch; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* mCipher; // 0x20
		::System::Int64 mSequenceNumber; // 0x28

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* get_ReplayWindow()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSEPOCH_GET_REPLAYWINDOW_OFFSET))(nullptr);
		}

		::System::Int64 get_SequenceNumber()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSEPOCH_GET_SEQUENCENUMBER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSEPOCH_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* get_Cipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSEPOCH_GET_CIPHER_OFFSET))(nullptr);
		}

		::System::Int32 get_Epoch()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSEPOCH_GET_EPOCH_OFFSET))(nullptr);
		}

		::System::Int64 AllocateSequenceNumber()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSEPOCH_ALLOCATESEQUENCENUMBER_OFFSET))(nullptr);
		}

	};
}

