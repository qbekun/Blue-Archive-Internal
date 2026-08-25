#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng { class IRandomGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SecurityParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class ProtocolVersion; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSession; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_RESUMABLESESSION_OFFSET UNITYSDK_OFFSET(0x5F1CD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_CLIENTVERSION_OFFSET UNITYSDK_OFFSET(0x5F1CE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_NEXTCOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x5F1CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_SETCLIENTVERSION_OFFSET UNITYSDK_OFFSET(0x5F1D40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_SETSERVERVERSION_OFFSET UNITYSDK_OFFSET(0x5F1D50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F1D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_SET_USEROBJECT_OFFSET UNITYSDK_OFFSET(0x5F20F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_USEROBJECT_OFFSET UNITYSDK_OFFSET(0x5F2100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_SECURITYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x5F2110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_SERVERVERSION_OFFSET UNITYSDK_OFFSET(0x5F2120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_SECURERANDOM_OFFSET UNITYSDK_OFFSET(0x5F2130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_NONCERANDOMGENERATOR_OFFSET UNITYSDK_OFFSET(0x5F2140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_EXPORTKEYINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x5F2150)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_SETRESUMABLESESSION_OFFSET UNITYSDK_OFFSET(0x5F2440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x5F2450)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int AbstractTlsContext_TypeDefinitionIndex = 22066;

	class AbstractTlsContext : public Il2CppObject
	{
	public:
		::System::Int64 counter; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* mNonceRandom; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* mSecureRandom; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SecurityParameters* mSecurityParameters; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mClientVersion; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mServerVersion; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSession* mSession; // 0x38
		::System::Object* mUserObject; // 0x40

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSession* get_ResumableSession()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSession*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_RESUMABLESESSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientVersion()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_CLIENTVERSION_OFFSET))(nullptr);
		}

		::System::Int64 NextCounterValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_NEXTCOUNTERVALUE_OFFSET))(nullptr);
		}

		::System::Void SetClientVersion(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_SETCLIENTVERSION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsServer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_ISSERVER_OFFSET))(nullptr);
		}

		::System::Void SetServerVersion(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_SETSERVERVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SecurityParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SecurityParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_UserObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_SET_USEROBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* get_UserObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_USEROBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SecurityParameters* get_SecurityParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SecurityParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_SECURITYPARAMETERS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ServerVersion()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_SERVERVERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* get_SecureRandom()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_SECURERANDOM_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* get_NonceRandomGenerator()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_GET_NONCERANDOMGENERATOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ExportKeyingMaterial(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_EXPORTKEYINGMATERIAL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SetResumableSession(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSession* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSession*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_SETRESUMABLESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCONTEXT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

