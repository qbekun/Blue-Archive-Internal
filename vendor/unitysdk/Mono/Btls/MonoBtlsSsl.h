#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsBio; }
namespace Mono::Btls { class MonoBtlsSslCtx; }
namespace Mono::Btls { class MonoBtlsSslError; }
namespace Mono::Btls { class MonoBtlsX509; }
namespace Mono::Btls { class MonoBtlsKey; }
namespace Mono::Btls { class MonoBtlsSslRenegotiateMode; }

#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_DESTROY_OFFSET UNITYSDK_OFFSET(0x9AB7550)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_NEW_OFFSET UNITYSDK_OFFSET(0x9AB75D0)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_USE_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AB7650)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_USE_PRIVATE_KEY_OFFSET UNITYSDK_OFFSET(0x9AB76E0)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_ADD_CHAIN_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AB7770)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9AB7800)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_CONNECT_OFFSET UNITYSDK_OFFSET(0x9AB7880)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_HANDSHAKE_OFFSET UNITYSDK_OFFSET(0x9AB7900)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_CLOSE_OFFSET UNITYSDK_OFFSET(0x9AB7980)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9AB7A00)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_SET_QUIET_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9AB7A80)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_SET_BIO_OFFSET UNITYSDK_OFFSET(0x9AB7B00)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_READ_OFFSET UNITYSDK_OFFSET(0x9AB7B90)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_WRITE_OFFSET UNITYSDK_OFFSET(0x9AB7C20)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x9AB7CB0)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9AB7D30)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_GET_CIPHER_OFFSET UNITYSDK_OFFSET(0x9AB7DB0)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_GET_PEER_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AB7E30)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_PRINT_ERRORS_CB_OFFSET UNITYSDK_OFFSET(0x9AB7EB0)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_SET_SERVER_NAME_OFFSET UNITYSDK_OFFSET(0x9AB7F40)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_GET_SERVER_NAME_OFFSET UNITYSDK_OFFSET(0x9AB7FD0)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_SET_RENEGOTIATE_MODE_OFFSET UNITYSDK_OFFSET(0x9AB8050)
#define MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_RENEGOTIATE_PENDING_OFFSET UNITYSDK_OFFSET(0x9AB80D0)
#define MONO_BTLS_MONOBTLSSSL_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9AB8150)
#define MONO_BTLS_MONOBTLSSSL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB83A0)
#define MONO_BTLS_MONOBTLSSSL_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9AB8540)
#define MONO_BTLS_MONOBTLSSSL_SETBIO_OFFSET UNITYSDK_OFFSET(0x9AB85C0)
#define MONO_BTLS_MONOBTLSSSL_THROWERROR_OFFSET UNITYSDK_OFFSET(0x9AB86F0)
#define MONO_BTLS_MONOBTLSSSL_GETERROR_OFFSET UNITYSDK_OFFSET(0x9AB8B00)
#define MONO_BTLS_MONOBTLSSSL_SETCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AB8C40)
#define MONO_BTLS_MONOBTLSSSL_SETPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x9AB8E50)
#define MONO_BTLS_MONOBTLSSSL_ADDINTERMEDIATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AB8F90)
#define MONO_BTLS_MONOBTLSSSL_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9AB9120)
#define MONO_BTLS_MONOBTLSSSL_CONNECT_OFFSET UNITYSDK_OFFSET(0x9AB9230)
#define MONO_BTLS_MONOBTLSSSL_HANDSHAKE_OFFSET UNITYSDK_OFFSET(0x9AB9340)
#define MONO_BTLS_MONOBTLSSSL_PRINTERRORSCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AB73E0)
#define MONO_BTLS_MONOBTLSSSL_GETERRORS_OFFSET UNITYSDK_OFFSET(0x9AB8920)
#define MONO_BTLS_MONOBTLSSSL_PRINTERRORS_OFFSET UNITYSDK_OFFSET(0x9AB9450)
#define MONO_BTLS_MONOBTLSSSL_READ_OFFSET UNITYSDK_OFFSET(0x9AB9550)
#define MONO_BTLS_MONOBTLSSSL_WRITE_OFFSET UNITYSDK_OFFSET(0x9AB96A0)
#define MONO_BTLS_MONOBTLSSSL_GETVERSION_OFFSET UNITYSDK_OFFSET(0x9AB98A0)
#define MONO_BTLS_MONOBTLSSSL_GETCIPHER_OFFSET UNITYSDK_OFFSET(0x9AB99A0)
#define MONO_BTLS_MONOBTLSSSL_GETPEERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AB9AE0)
#define MONO_BTLS_MONOBTLSSSL_SETSERVERNAME_OFFSET UNITYSDK_OFFSET(0x9AB9CB0)
#define MONO_BTLS_MONOBTLSSSL_GETSERVERNAME_OFFSET UNITYSDK_OFFSET(0x9AB9F30)
#define MONO_BTLS_MONOBTLSSSL_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9ABA0B0)
#define MONO_BTLS_MONOBTLSSSL_SETQUIETSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9ABA1D0)
#define MONO_BTLS_MONOBTLSSSL_CLOSE_OFFSET UNITYSDK_OFFSET(0x9ABA2D0)
#define MONO_BTLS_MONOBTLSSSL_SETRENEGOTIATEMODE_OFFSET UNITYSDK_OFFSET(0x9ABA440)
#define MONO_BTLS_MONOBTLSSSL_RENEGOTIATEPENDING_OFFSET UNITYSDK_OFFSET(0x9ABA540)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsSsl_TypeDefinitionIndex = 29114;

	class MonoBtlsSsl : public Il2CppObject
	{
	public:
		::Mono::Btls::MonoBtlsBio* bio; // 0x20
		PrintErrorsCallbackFunc* printErrorsFunc; // 0x28
		::System::Int32 printErrorsFuncPtr; // 0x30

		::System::Void mono_btls_ssl_destroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_new(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_NEW_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_use_certificate(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_USE_CERTIFICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_use_private_key(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_USE_PRIVATE_KEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_add_chain_certificate(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_ADD_CHAIN_CERTIFICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_accept(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_connect(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_CONNECT_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_handshake(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_HANDSHAKE_OFFSET))(arg, nullptr);
		}

		::System::Void mono_btls_ssl_close(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_shutdown(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_SHUTDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void mono_btls_ssl_set_quiet_shutdown(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_SET_QUIET_SHUTDOWN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void mono_btls_ssl_set_bio(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_SET_BIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_read(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_write(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_get_error(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_GET_ERROR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_get_version(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_GET_VERSION_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_get_cipher(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_GET_CIPHER_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_get_peer_certificate(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_GET_PEER_CERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void mono_btls_ssl_print_errors_cb(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_PRINT_ERRORS_CB_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_set_server_name(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_SET_SERVER_NAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_get_server_name(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_GET_SERVER_NAME_OFFSET))(arg, nullptr);
		}

		::System::Void mono_btls_ssl_set_renegotiate_mode(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_SET_RENEGOTIATE_MODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_renegotiate_pending(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_MONO_BTLS_SSL_RENEGOTIATE_PENDING_OFFSET))(arg, nullptr);
		}

		BoringSslHandle* Create_internal(::Mono::Btls::MonoBtlsSslCtx* arg)
		{
			return (return (BoringSslHandle*(*)(::Mono::Btls::MonoBtlsSslCtx*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_CREATE_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Mono::Btls::MonoBtlsSslCtx* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsSslCtx*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_.CTOR_OFFSET))(arg, nullptr);
		}

		BoringSslHandle* get_Handle()
		{
			return (return (BoringSslHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Void SetBio(::Mono::Btls::MonoBtlsBio* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsBio*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_SETBIO_OFFSET))(arg, nullptr);
		}

		::System::Exception* ThrowError(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_THROWERROR_OFFSET))(str, nullptr);
		}

		::Mono::Btls::MonoBtlsSslError* GetError(::System::Int32 arg)
		{
			return (return (::Mono::Btls::MonoBtlsSslError*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_GETERROR_OFFSET))(arg, nullptr);
		}

		::System::Void SetCertificate(::Mono::Btls::MonoBtlsX509* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_SETCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetPrivateKey(::Mono::Btls::MonoBtlsKey* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsKey*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_SETPRIVATEKEY_OFFSET))(arg, nullptr);
		}

		::System::Void AddIntermediateCertificate(::Mono::Btls::MonoBtlsX509* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_ADDINTERMEDIATECERTIFICATE_OFFSET))(arg, nullptr);
		}

		::Mono::Btls::MonoBtlsSslError* Accept()
		{
			return (return (::Mono::Btls::MonoBtlsSslError*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_ACCEPT_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsSslError* Connect()
		{
			return (return (::Mono::Btls::MonoBtlsSslError*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_CONNECT_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsSslError* Handshake()
		{
			return (return (::Mono::Btls::MonoBtlsSslError*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_HANDSHAKE_OFFSET))(nullptr);
		}

		::System::Int32 PrintErrorsCallback(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_PRINTERRORSCALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetErrors()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_GETERRORS_OFFSET))(nullptr);
		}

		::System::Void PrintErrors()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_PRINTERRORS_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsSslError* Read(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::Mono::Btls::MonoBtlsSslError*(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_READ_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Btls::MonoBtlsSslError* Write(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::Mono::Btls::MonoBtlsSslError*(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_WRITE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetVersion()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_GETVERSION_OFFSET))(nullptr);
		}

		::System::Int32 GetCipher()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_GETCIPHER_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509* GetPeerCertificate()
		{
			return (return (::Mono::Btls::MonoBtlsX509*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_GETPEERCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Void SetServerName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_SETSERVERNAME_OFFSET))(str, nullptr);
		}

		::System::String* GetServerName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_GETSERVERNAME_OFFSET))(nullptr);
		}

		::System::Void Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void SetQuietShutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_SETQUIETSHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_CLOSE_OFFSET))(nullptr);
		}

		::System::Void SetRenegotiateMode(::Mono::Btls::MonoBtlsSslRenegotiateMode* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsSslRenegotiateMode*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_SETRENEGOTIATEMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean RenegotiatePending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSL_RENEGOTIATEPENDING_OFFSET))(nullptr);
		}

	};
}

