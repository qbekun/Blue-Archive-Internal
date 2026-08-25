#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSrpIdentityManager; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSrpLoginParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCipherFactory; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSignerCredentials; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCredentials; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsKeyExchange; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6168B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x616930)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_GETDSASIGNERCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x616970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_GETRSASIGNERCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x6169C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_GETCIPHERSUITES_OFFSET UNITYSDK_OFFSET(0x616A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_PROCESSCLIENTEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x616A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_GETSELECTEDCIPHERSUITE_OFFSET UNITYSDK_OFFSET(0x616AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_GETCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x616C10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_GETKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x616CE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_CREATESRPKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x616DA0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int SrpTlsServer_TypeDefinitionIndex = 22174;

	class SrpTlsServer : public ::Mono::Math::Prime::PrimalityTest
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* mSrpIdentityManager; // 0x90
		::Il2CppArray<::System::Object*>* mSrpIdentity; // 0x98
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* mLoginParameters; // 0xA0

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* GetDsaSignerCredentials()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_GETDSASIGNERCREDENTIALS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* GetRsaSignerCredentials()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_GETRSASIGNERCREDENTIALS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCipherSuites()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_GETCIPHERSUITES_OFFSET))(nullptr);
		}

		::System::Void ProcessClientExtensions(::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_PROCESSCLIENTEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSelectedCipherSuite()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_GETSELECTEDCIPHERSUITE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetCredentials()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_GETCREDENTIALS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_GETKEYEXCHANGE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateSrpKeyExchange(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRPTLSSERVER_CREATESRPKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

	};
}

