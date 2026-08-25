#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DigestInputBuffer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsHandshakeHash; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x600980)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x600A40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_INIT_OFFSET UNITYSDK_OFFSET(0x600B70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_NOTIFYPRFDETERMINED_OFFSET UNITYSDK_OFFSET(0x600B80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_TRACKHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x600DD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_SEALHASHALGORITHMS_OFFSET UNITYSDK_OFFSET(0x600E50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_STOPTRACKING_OFFSET UNITYSDK_OFFSET(0x600E70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_FORKPRFHASH_OFFSET UNITYSDK_OFFSET(0x601060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_GETFINALHASH_OFFSET UNITYSDK_OFFSET(0x601250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x601520)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_GETBYTELENGTH_OFFSET UNITYSDK_OFFSET(0x601580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_GETDIGESTSIZE_OFFSET UNITYSDK_OFFSET(0x6015E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_UPDATE_OFFSET UNITYSDK_OFFSET(0x601640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x601AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_DOFINAL_OFFSET UNITYSDK_OFFSET(0x601F60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_RESET_OFFSET UNITYSDK_OFFSET(0x601FC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_CHECKSTOPBUFFERING_OFFSET UNITYSDK_OFFSET(0x602430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_CHECKTRACKINGHASH_OFFSET UNITYSDK_OFFSET(0x602970)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DeferredHash_TypeDefinitionIndex = 22109;

	class DeferredHash : public Il2CppObject
	{
	public:
		::System::Int32 BUFFERING_HASH_LIMIT; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* mBuf; // 0x18
		::System::Collections::IDictionary* mHashes; // 0x20
		::System::Int32 mPrfHashAlgorithm; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Byte arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			((::System::Void(*)(::System::Byte, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_INIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* NotifyPrfDetermined()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_NOTIFYPRFDETERMINED_OFFSET))(nullptr);
		}

		::System::Void TrackHashAlgorithm(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_TRACKHASHALGORITHM_OFFSET))(arg, nullptr);
		}

		::System::Void SealHashAlgorithms()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_SEALHASHALGORITHMS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* StopTracking()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_STOPTRACKING_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* ForkPrfHash()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_FORKPRFHASH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFinalHash(::System::Byte arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_GETFINALHASH_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetByteLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_GETBYTELENGTH_OFFSET))(nullptr);
		}

		::System::Int32 GetDigestSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_GETDIGESTSIZE_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_RESET_OFFSET))(nullptr);
		}

		::System::Void CheckStopBuffering()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_CHECKSTOPBUFFERING_OFFSET))(nullptr);
		}

		::System::Void CheckTrackingHash(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFERREDHASH_CHECKTRACKINGHASH_OFFSET))(arg, nullptr);
		}

	};
}

