#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SessionParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_ISEXTENDEDMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x615340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_SRPIDENTITY_OFFSET UNITYSDK_OFFSET(0x615350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_READSERVEREXTENSIONS_OFFSET UNITYSDK_OFFSET(0x607750)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_MASTERSECRET_OFFSET UNITYSDK_OFFSET(0x615360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_CLEAR_OFFSET UNITYSDK_OFFSET(0x6038D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x615370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_PSKIDENTITY_OFFSET UNITYSDK_OFFSET(0x615480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_PEERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x615490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_CIPHERSUITE_OFFSET UNITYSDK_OFFSET(0x6154A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_COPY_OFFSET UNITYSDK_OFFSET(0x6154B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_COMPRESSIONALGORITHM_OFFSET UNITYSDK_OFFSET(0x615560)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int SessionParameters_TypeDefinitionIndex = 22167;

	class SessionParameters : public Il2CppObject
	{
	public:
		::System::Int32 mCipherSuite; // 0x10
		::System::Byte mCompressionAlgorithm; // 0x14
		::Il2CppArray<::System::Object*>* mMasterSecret; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* mPeerCertificate; // 0x20
		::Il2CppArray<::System::Object*>* mPskIdentity; // 0x28
		::Il2CppArray<::System::Object*>* mSrpIdentity; // 0x30
		::Il2CppArray<::System::Object*>* mEncodedServerExtensions; // 0x38
		::System::Boolean mExtendedMasterSecret; // 0x40

		::System::Boolean get_IsExtendedMasterSecret()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_ISEXTENDEDMASTERSECRET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SrpIdentity()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_SRPIDENTITY_OFFSET))(nullptr);
		}

		::System::Collections::IDictionary* ReadServerExtensions()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_READSERVEREXTENSIONS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_MasterSecret()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_MASTERSECRET_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_PskIdentity()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_PSKIDENTITY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* get_PeerCertificate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_PEERCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Int32 get_CipherSuite()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_CIPHERSUITE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters* Copy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_COPY_OFFSET))(nullptr);
		}

		::System::Byte get_CompressionAlgorithm()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SESSIONPARAMETERS_GET_COMPRESSIONALGORITHM_OFFSET))(nullptr);
		}

	};
}

