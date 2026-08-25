#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCloseable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCompression; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_NOTIFYALERTRECEIVED_OFFSET UNITYSDK_OFFSET(0x5F2A90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_REQUIRESEXTENDEDMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x5F2AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_CANCEL_OFFSET UNITYSDK_OFFSET(0x5F2AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_SHOULDUSEGMTUNIXTIME_OFFSET UNITYSDK_OFFSET(0x5F2B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_NOTIFYHANDSHAKECOMPLETE_OFFSET UNITYSDK_OFFSET(0x5F2B70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_GETCIPHER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_NOTIFYCLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x5F2B80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_GETCOMPRESSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_NOTIFYALERTRAISED_OFFSET UNITYSDK_OFFSET(0x5F2BB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F0EC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_NOTIFYSECURERENEGOTIATION_OFFSET UNITYSDK_OFFSET(0x5F2BC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int AbstractTlsPeer_TypeDefinitionIndex = 22070;

	class AbstractTlsPeer : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCloseable* mCloseHandle; // 0x10

		::System::Void NotifyAlertReceived(::System::Byte arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_NOTIFYALERTRECEIVED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RequiresExtendedMasterSecret()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_REQUIRESEXTENDEDMASTERSECRET_OFFSET))(nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_CANCEL_OFFSET))(nullptr);
		}

		::System::Boolean ShouldUseGmtUnixTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_SHOULDUSEGMTUNIXTIME_OFFSET))(nullptr);
		}

		::System::Void NotifyHandshakeComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_NOTIFYHANDSHAKECOMPLETE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* GetCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_GETCIPHER_OFFSET))(nullptr);
		}

		::System::Void NotifyCloseHandle(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCloseable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCloseable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_NOTIFYCLOSEHANDLE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression* GetCompression()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_GETCOMPRESSION_OFFSET))(nullptr);
		}

		::System::Void NotifyAlertRaised(::System::Byte arg, ::System::Byte arg, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_NOTIFYALERTRAISED_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void NotifySecureRenegotiation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSPEER_NOTIFYSECURERENEGOTIATION_OFFSET))(arg, nullptr);
		}

	};
}

