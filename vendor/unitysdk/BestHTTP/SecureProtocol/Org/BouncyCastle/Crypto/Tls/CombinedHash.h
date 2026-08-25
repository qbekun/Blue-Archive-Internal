#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CombinedHash; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsHandshakeHash; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F9600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F9680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_INIT_OFFSET UNITYSDK_OFFSET(0x5F9730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_NOTIFYPRFDETERMINED_OFFSET UNITYSDK_OFFSET(0x5F9740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_TRACKHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x5F9750)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_SEALHASHALGORITHMS_OFFSET UNITYSDK_OFFSET(0x5F97B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_STOPTRACKING_OFFSET UNITYSDK_OFFSET(0x5F97C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_FORKPRFHASH_OFFSET UNITYSDK_OFFSET(0x5F9820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_GETFINALHASH_OFFSET UNITYSDK_OFFSET(0x5F9880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x5F98E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_GETBYTELENGTH_OFFSET UNITYSDK_OFFSET(0x5F9A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_GETDIGESTSIZE_OFFSET UNITYSDK_OFFSET(0x5F9B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_UPDATE_OFFSET UNITYSDK_OFFSET(0x5F9C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x5F9D90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_DOFINAL_OFFSET UNITYSDK_OFFSET(0x5F9EC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_RESET_OFFSET UNITYSDK_OFFSET(0x5FA0D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_SSL3COMPLETE_OFFSET UNITYSDK_OFFSET(0x5FA1E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int CombinedHash_TypeDefinitionIndex = 22096;

	class CombinedHash : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* mMd5; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* mSha1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CombinedHash* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CombinedHash*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_INIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* NotifyPrfDetermined()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_NOTIFYPRFDETERMINED_OFFSET))(nullptr);
		}

		::System::Void TrackHashAlgorithm(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_TRACKHASHALGORITHM_OFFSET))(arg, nullptr);
		}

		::System::Void SealHashAlgorithms()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_SEALHASHALGORITHMS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* StopTracking()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_STOPTRACKING_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* ForkPrfHash()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_FORKPRFHASH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFinalHash(::System::Byte arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_GETFINALHASH_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetByteLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_GETBYTELENGTH_OFFSET))(nullptr);
		}

		::System::Int32 GetDigestSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_GETDIGESTSIZE_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_RESET_OFFSET))(nullptr);
		}

		::System::Void Ssl3Complete(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_COMBINEDHASH_SSL3COMPLETE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

