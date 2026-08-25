#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCipherFactory; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsClientContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateStatus; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSession; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class ProtocolVersion; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsKeyExchange; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsAuthentication; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCompression; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class NewSessionTicket; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_HOSTNAMES_OFFSET UNITYSDK_OFFSET(0x5F0D70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_SET_HOSTNAMES_OFFSET UNITYSDK_OFFSET(0x5F0D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_CLIENTSUPPORTEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x5F0D90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_SET_CLIENTSUPPORTEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x5F0DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_SERVERSUPPORTEDPROTOCOL_OFFSET UNITYSDK_OFFSET(0x5F0DB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_SET_SERVERSUPPORTEDPROTOCOL_OFFSET UNITYSDK_OFFSET(0x5F0DC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_EXPECTEMPTYCERTIFICATESTATUSEXTENSION_OFFSET UNITYSDK_OFFSET(0x5F0DD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_CERTIFICATESTATUS_OFFSET UNITYSDK_OFFSET(0x5F0DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_SET_CERTIFICATESTATUS_OFFSET UNITYSDK_OFFSET(0x5F0DF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_LOGGINGCONTEXT_OFFSET UNITYSDK_OFFSET(0x5F0E00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_SET_LOGGINGCONTEXT_OFFSET UNITYSDK_OFFSET(0x5F0E10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F0E20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F0E90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_ALLOWUNEXPECTEDSERVEREXTENSION_OFFSET UNITYSDK_OFFSET(0x5F0ED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_CHECKFORUNEXPECTEDSERVEREXTENSION_OFFSET UNITYSDK_OFFSET(0x5F0F50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_INIT_OFFSET UNITYSDK_OFFSET(0x5F1010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETSESSIONTORESUME_OFFSET UNITYSDK_OFFSET(0x5F1020)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_CLIENTHELLORECORDLAYERVERSION_OFFSET UNITYSDK_OFFSET(0x5F1030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_CLIENTVERSION_OFFSET UNITYSDK_OFFSET(0x5F1050)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_ISFALLBACK_OFFSET UNITYSDK_OFFSET(0x5F10A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETCLIENTEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x5F10B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_MINIMUMVERSION_OFFSET UNITYSDK_OFFSET(0x5F1520)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_NOTIFYSERVERVERSION_OFFSET UNITYSDK_OFFSET(0x5F1570)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETCIPHERSUITES_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETCOMPRESSIONMETHODS_OFFSET UNITYSDK_OFFSET(0x5F15F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_NOTIFYSESSIONID_OFFSET UNITYSDK_OFFSET(0x5F1630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_NOTIFYSELECTEDCIPHERSUITE_OFFSET UNITYSDK_OFFSET(0x5F1640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_NOTIFYSELECTEDCOMPRESSIONMETHOD_OFFSET UNITYSDK_OFFSET(0x5F1650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_PROCESSSERVEREXTENSIONS_OFFSET UNITYSDK_OFFSET(0x5F1660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_PROCESSSERVERSUPPLEMENTALDATA_OFFSET UNITYSDK_OFFSET(0x5F1A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETCLIENTSUPPLEMENTALDATA_OFFSET UNITYSDK_OFFSET(0x5F1AE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETCOMPRESSION_OFFSET UNITYSDK_OFFSET(0x5F1AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETCIPHER_OFFSET UNITYSDK_OFFSET(0x5F1BC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_NOTIFYNEWSESSIONTICKET_OFFSET UNITYSDK_OFFSET(0x5F1CC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int AbstractTlsClient_TypeDefinitionIndex = 22065;

	class AbstractTlsClient : public ::Mono::Math::Prime::ConfidenceFactor
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* mCipherFactory; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClientContext* mContext; // 0x20
		::System::Collections::IList* mSupportedSignatureAlgorithms; // 0x28
		::Il2CppArray<::System::Object*>* mNamedCurves; // 0x30
		::Il2CppArray<::System::Object*>* mClientECPointFormats; // 0x38
		::Il2CppArray<::System::Object*>* mServerECPointFormats; // 0x40
		::System::Int32 mSelectedCipherSuite; // 0x48
		::System::Int16 mSelectedCompressionMethod; // 0x4C
		Il2CppObject* _HostNames_k__BackingField; // 0x50
		Il2CppObject* _ClientSupportedProtocols_k__BackingField; // 0x58
		::System::String* _ServerSupportedProtocol_k__BackingField; // 0x60
		::System::Boolean mExpectEmptyCertificateStatus; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus* _CertificateStatus_k__BackingField; // 0x70
		::BestHTTP::Logger::LoggingContext* _LoggingContext_k__BackingField; // 0x78

		Il2CppObject* get_HostNames()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_HOSTNAMES_OFFSET))(nullptr);
		}

		::System::Void set_HostNames(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_SET_HOSTNAMES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClientSupportedProtocols()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_CLIENTSUPPORTEDPROTOCOLS_OFFSET))(nullptr);
		}

		::System::Void set_ClientSupportedProtocols(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_SET_CLIENTSUPPORTEDPROTOCOLS_OFFSET))(arg, nullptr);
		}

		::System::String* get_ServerSupportedProtocol()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_SERVERSUPPORTEDPROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ServerSupportedProtocol(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_SET_SERVERSUPPORTEDPROTOCOL_OFFSET))(str, nullptr);
		}

		::System::Boolean get_ExpectEmptyCertificateStatusExtension()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_EXPECTEMPTYCERTIFICATESTATUSEXTENSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus* get_CertificateStatus()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_CERTIFICATESTATUS_OFFSET))(nullptr);
		}

		::System::Void set_CertificateStatus(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatus*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_SET_CERTIFICATESTATUS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_LoggingContext()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_LOGGINGCONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_LoggingContext(::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_SET_LOGGINGCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean AllowUnexpectedServerExtension(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_ALLOWUNEXPECTEDSERVEREXTENSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckForUnexpectedServerExtension(::System::Collections::IDictionary* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_CHECKFORUNEXPECTEDSERVEREXTENSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClientContext* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClientContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_INIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSession* GetSessionToResume()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSession*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETSESSIONTORESUME_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientHelloRecordLayerVersion()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_CLIENTHELLORECORDLAYERVERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientVersion()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_CLIENTVERSION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFallback()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_ISFALLBACK_OFFSET))(nullptr);
		}

		::System::Collections::IDictionary* GetClientExtensions()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETCLIENTEXTENSIONS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_MinimumVersion()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GET_MINIMUMVERSION_OFFSET))(nullptr);
		}

		::System::Void NotifyServerVersion(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_NOTIFYSERVERVERSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCipherSuites()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETCIPHERSUITES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCompressionMethods()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETCOMPRESSIONMETHODS_OFFSET))(nullptr);
		}

		::System::Void NotifySessionID(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_NOTIFYSESSIONID_OFFSET))(arg, nullptr);
		}

		::System::Void NotifySelectedCipherSuite(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_NOTIFYSELECTEDCIPHERSUITE_OFFSET))(arg, nullptr);
		}

		::System::Void NotifySelectedCompressionMethod(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_NOTIFYSELECTEDCOMPRESSIONMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessServerExtensions(::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_PROCESSSERVEREXTENSIONS_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessServerSupplementalData(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_PROCESSSERVERSUPPLEMENTALDATA_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETKEYEXCHANGE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* GetAuthentication()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETAUTHENTICATION_OFFSET))(nullptr);
		}

		::System::Collections::IList* GetClientSupplementalData()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETCLIENTSUPPLEMENTALDATA_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression* GetCompression()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETCOMPRESSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* GetCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_GETCIPHER_OFFSET))(nullptr);
		}

		::System::Void NotifyNewSessionTicket(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSCLIENT_NOTIFYNEWSESSIONTICKET_OFFSET))(arg, nullptr);
		}

	};
}

