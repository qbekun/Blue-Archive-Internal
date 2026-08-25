#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsVerifyCallback; }
namespace Mono::Btls { class MonoBtlsSelectCallback; }
namespace Mono::Btls { class MonoBtlsServerNameCallback; }
namespace Mono::Btls { class MonoBtlsX509Store; }
namespace Mono::Btls { class MonoBtlsX509StoreCtx; }
namespace Mono::Btls { class MonoBtlsX509VerifyParam; }

#define MONO_BTLS_MONOBTLSSSLCTX_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9AB8310)
#define MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_NEW_OFFSET UNITYSDK_OFFSET(0x9ABAD80)
#define MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_FREE_OFFSET UNITYSDK_OFFSET(0x9ABAE00)
#define MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9ABAE80)
#define MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_CERT_VERIFY_CALLBACK_OFFSET UNITYSDK_OFFSET(0x9ABAF10)
#define MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_CERT_SELECT_CALLBACK_OFFSET UNITYSDK_OFFSET(0x9ABAFA0)
#define MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_MIN_VERSION_OFFSET UNITYSDK_OFFSET(0x9ABB030)
#define MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_MAX_VERSION_OFFSET UNITYSDK_OFFSET(0x9ABB0B0)
#define MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_CIPHERS_OFFSET UNITYSDK_OFFSET(0x9ABB130)
#define MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_VERIFY_PARAM_OFFSET UNITYSDK_OFFSET(0x9ABB1D0)
#define MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_CLIENT_CA_LIST_OFFSET UNITYSDK_OFFSET(0x9ABB260)
#define MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_SERVER_NAME_CALLBACK_OFFSET UNITYSDK_OFFSET(0x9ABB300)
#define MONO_BTLS_MONOBTLSSSLCTX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABB390)
#define MONO_BTLS_MONOBTLSSSLCTX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABB470)
#define MONO_BTLS_MONOBTLSSSLCTX_GET_CERTIFICATESTORE_OFFSET UNITYSDK_OFFSET(0x9ABBA20)
#define MONO_BTLS_MONOBTLSSSLCTX_VERIFYCALLBACK_OFFSET UNITYSDK_OFFSET(0x9ABBA30)
#define MONO_BTLS_MONOBTLSSSLCTX_NATIVEVERIFYCALLBACK_OFFSET UNITYSDK_OFFSET(0x9ABA710)
#define MONO_BTLS_MONOBTLSSSLCTX_NATIVESELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9ABAA70)
#define MONO_BTLS_MONOBTLSSSLCTX_COPYISSUERS_OFFSET UNITYSDK_OFFSET(0x9ABBAD0)
#define MONO_BTLS_MONOBTLSSSLCTX_SETVERIFYCALLBACK_OFFSET UNITYSDK_OFFSET(0x9ABC280)
#define MONO_BTLS_MONOBTLSSSLCTX_SETSELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9ABC420)
#define MONO_BTLS_MONOBTLSSSLCTX_SETMINVERSION_OFFSET UNITYSDK_OFFSET(0x9ABC540)
#define MONO_BTLS_MONOBTLSSSLCTX_SETMAXVERSION_OFFSET UNITYSDK_OFFSET(0x9ABC640)
#define MONO_BTLS_MONOBTLSSSLCTX_SETCIPHERS_OFFSET UNITYSDK_OFFSET(0x9ABC740)
#define MONO_BTLS_MONOBTLSSSLCTX_SETVERIFYPARAM_OFFSET UNITYSDK_OFFSET(0x9ABCA00)
#define MONO_BTLS_MONOBTLSSSLCTX_SETCLIENTCERTIFICATEISSUERS_OFFSET UNITYSDK_OFFSET(0x9ABCC30)
#define MONO_BTLS_MONOBTLSSSLCTX_SETSERVERNAMECALLBACK_OFFSET UNITYSDK_OFFSET(0x9ABD0C0)
#define MONO_BTLS_MONOBTLSSSLCTX_NATIVESERVERNAMECALLBACK_OFFSET UNITYSDK_OFFSET(0x9ABAC10)
#define MONO_BTLS_MONOBTLSSSLCTX_CLOSE_OFFSET UNITYSDK_OFFSET(0x9ABD1E0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsSslCtx_TypeDefinitionIndex = 29119;

	class MonoBtlsSslCtx : public Il2CppObject
	{
	public:
		NativeVerifyFunc* verifyFunc; // 0x20
		NativeSelectFunc* selectFunc; // 0x28
		NativeServerNameFunc* serverNameFunc; // 0x30
		::System::Int32 verifyFuncPtr; // 0x38
		::System::Int32 selectFuncPtr; // 0x40
		::System::Int32 serverNameFuncPtr; // 0x48
		::Mono::Btls::MonoBtlsVerifyCallback* verifyCallback; // 0x50
		::Mono::Btls::MonoBtlsSelectCallback* selectCallback; // 0x58
		::Mono::Btls::MonoBtlsServerNameCallback* serverNameCallback; // 0x60
		::Mono::Btls::MonoBtlsX509Store* store; // 0x68
		::System::Runtime::InteropServices::GCHandle* instance; // 0x70
		::System::Int32 instancePtr; // 0x78

		BoringSslCtxHandle* get_Handle()
		{
			return (return (BoringSslCtxHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_ssl_ctx_new()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_NEW_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_ssl_ctx_free(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_FREE_OFFSET))(arg, nullptr);
		}

		::System::Void mono_btls_ssl_ctx_initialize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void mono_btls_ssl_ctx_set_cert_verify_callback(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_CERT_VERIFY_CALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void mono_btls_ssl_ctx_set_cert_select_callback(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_CERT_SELECT_CALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void mono_btls_ssl_ctx_set_min_version(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_MIN_VERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void mono_btls_ssl_ctx_set_max_version(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_MAX_VERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_ctx_set_ciphers(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_CIPHERS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_ctx_set_verify_param(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_VERIFY_PARAM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_ssl_ctx_set_client_ca_list(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_CLIENT_CA_LIST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void mono_btls_ssl_ctx_set_server_name_callback(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_MONO_BTLS_SSL_CTX_SET_SERVER_NAME_CALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(BoringSslCtxHandle* arg)
		{
			((::System::Void(*)(BoringSslCtxHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_.CTOR_OFFSET))(arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509Store* get_CertificateStore()
		{
			return (return (::Mono::Btls::MonoBtlsX509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_GET_CERTIFICATESTORE_OFFSET))(nullptr);
		}

		::System::Int32 VerifyCallback(::System::Boolean arg, ::Mono::Btls::MonoBtlsX509StoreCtx* arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::Mono::Btls::MonoBtlsX509StoreCtx*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_VERIFYCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 NativeVerifyCallback(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_NATIVEVERIFYCALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 NativeSelectCallback(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_NATIVESELECTCALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CopyIssuers(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_COPYISSUERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetVerifyCallback(::Mono::Btls::MonoBtlsVerifyCallback* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsVerifyCallback*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_SETVERIFYCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSelectCallback(::Mono::Btls::MonoBtlsSelectCallback* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsSelectCallback*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_SETSELECTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetMinVersion(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_SETMINVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaxVersion(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_SETMAXVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void SetCiphers(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_SETCIPHERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetVerifyParam(::Mono::Btls::MonoBtlsX509VerifyParam* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509VerifyParam*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_SETVERIFYPARAM_OFFSET))(arg, nullptr);
		}

		::System::Void SetClientCertificateIssuers(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_SETCLIENTCERTIFICATEISSUERS_OFFSET))(arg, nullptr);
		}

		::System::Void SetServerNameCallback(::Mono::Btls::MonoBtlsServerNameCallback* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsServerNameCallback*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_SETSERVERNAMECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Int32 NativeServerNameCallback(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_NATIVESERVERNAMECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSSSLCTX_CLOSE_OFFSET))(nullptr);
		}

	};
}

