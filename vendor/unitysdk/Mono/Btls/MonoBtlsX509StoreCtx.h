#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509Error; }
namespace Mono::Btls { class MonoBtlsX509Chain; }
namespace Mono::Btls { class MonoBtlsX509Store; }
namespace Mono::Btls { class MonoBtlsX509VerifyParam; }
namespace Mono::Btls { class MonoBtlsX509StoreCtx; }

#define MONO_BTLS_MONOBTLSX509STORECTX_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9AC3190)
#define MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_NEW_OFFSET UNITYSDK_OFFSET(0x9AC3210)
#define MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_FROM_PTR_OFFSET UNITYSDK_OFFSET(0x9AC3290)
#define MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x9AC3310)
#define MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_GET_CHAIN_OFFSET UNITYSDK_OFFSET(0x9AC33A0)
#define MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_INIT_OFFSET UNITYSDK_OFFSET(0x9AC3420)
#define MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x9AC34B0)
#define MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_VERIFY_CERT_OFFSET UNITYSDK_OFFSET(0x9AC3540)
#define MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_GET_UNTRUSTED_OFFSET UNITYSDK_OFFSET(0x9AC35C0)
#define MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_UP_REF_OFFSET UNITYSDK_OFFSET(0x9AC3640)
#define MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_FREE_OFFSET UNITYSDK_OFFSET(0x9AC36C0)
#define MONO_BTLS_MONOBTLSX509STORECTX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC3740)
#define MONO_BTLS_MONOBTLSX509STORECTX_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9AC3850)
#define MONO_BTLS_MONOBTLSX509STORECTX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABBA60)
#define MONO_BTLS_MONOBTLSX509STORECTX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC3990)
#define MONO_BTLS_MONOBTLSX509STORECTX_GETERROR_OFFSET UNITYSDK_OFFSET(0x9AC39B0)
#define MONO_BTLS_MONOBTLSX509STORECTX_GETCHAIN_OFFSET UNITYSDK_OFFSET(0x9AC3AB0)
#define MONO_BTLS_MONOBTLSX509STORECTX_GETUNTRUSTED_OFFSET UNITYSDK_OFFSET(0x9AC3C70)
#define MONO_BTLS_MONOBTLSX509STORECTX_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9AC3E30)
#define MONO_BTLS_MONOBTLSX509STORECTX_SETVERIFYPARAM_OFFSET UNITYSDK_OFFSET(0x9AC4050)
#define MONO_BTLS_MONOBTLSX509STORECTX_GET_VERIFYRESULT_OFFSET UNITYSDK_OFFSET(0x9AC41F0)
#define MONO_BTLS_MONOBTLSX509STORECTX_VERIFY_OFFSET UNITYSDK_OFFSET(0x9AC4290)
#define MONO_BTLS_MONOBTLSX509STORECTX_COPY_OFFSET UNITYSDK_OFFSET(0x9AC43F0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509StoreCtx_TypeDefinitionIndex = 29144;

	class MonoBtlsX509StoreCtx : public Il2CppObject
	{
	public:
		Il2CppObject* verifyResult; // 0x20

		BoringX509StoreCtxHandle* get_Handle()
		{
			return (return (BoringX509StoreCtxHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_x509_store_ctx_new()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_NEW_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_x509_store_ctx_from_ptr(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_FROM_PTR_OFFSET))(arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509Error* mono_btls_x509_store_ctx_get_error(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509Error*(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_GET_ERROR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_store_ctx_get_chain(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_GET_CHAIN_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_store_ctx_init(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_store_ctx_set_param(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_SET_PARAM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_store_ctx_verify_cert(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_VERIFY_CERT_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_store_ctx_get_untrusted(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_GET_UNTRUSTED_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_store_ctx_up_ref(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_UP_REF_OFFSET))(arg, nullptr);
		}

		::System::Void mono_btls_x509_store_ctx_free(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_MONO_BTLS_X509_STORE_CTX_FREE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_.CTOR_OFFSET))(nullptr);
		}

		BoringX509StoreCtxHandle* Create_internal(::System::Int32 arg)
		{
			return (return (BoringX509StoreCtxHandle*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_CREATE_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(BoringX509StoreCtxHandle* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(BoringX509StoreCtxHandle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509Error* GetError()
		{
			return (return (::Mono::Btls::MonoBtlsX509Error*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_GETERROR_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509Chain* GetChain()
		{
			return (return (::Mono::Btls::MonoBtlsX509Chain*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_GETCHAIN_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509Chain* GetUntrusted()
		{
			return (return (::Mono::Btls::MonoBtlsX509Chain*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_GETUNTRUSTED_OFFSET))(nullptr);
		}

		::System::Void Initialize(::Mono::Btls::MonoBtlsX509Store* arg, ::Mono::Btls::MonoBtlsX509Chain* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509Store*, ::Mono::Btls::MonoBtlsX509Chain*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetVerifyParam(::Mono::Btls::MonoBtlsX509VerifyParam* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509VerifyParam*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_SETVERIFYPARAM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VerifyResult()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_GET_VERIFYRESULT_OFFSET))(nullptr);
		}

		::System::Int32 Verify()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_VERIFY_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509StoreCtx* Copy()
		{
			return (return (::Mono::Btls::MonoBtlsX509StoreCtx*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORECTX_COPY_OFFSET))(nullptr);
		}

	};
}

