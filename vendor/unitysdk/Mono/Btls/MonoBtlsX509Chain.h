#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509; }
namespace Mono::Btls { class MonoBtlsX509Chain; }

#define MONO_BTLS_MONOBTLSX509CHAIN_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9ABF5B0)
#define MONO_BTLS_MONOBTLSX509CHAIN_MONO_BTLS_X509_CHAIN_NEW_OFFSET UNITYSDK_OFFSET(0x9ABF630)
#define MONO_BTLS_MONOBTLSX509CHAIN_MONO_BTLS_X509_CHAIN_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9ABF6B0)
#define MONO_BTLS_MONOBTLSX509CHAIN_MONO_BTLS_X509_CHAIN_GET_CERT_OFFSET UNITYSDK_OFFSET(0x9ABF730)
#define MONO_BTLS_MONOBTLSX509CHAIN_MONO_BTLS_X509_CHAIN_ADD_CERT_OFFSET UNITYSDK_OFFSET(0x9ABF7B0)
#define MONO_BTLS_MONOBTLSX509CHAIN_MONO_BTLS_X509_CHAIN_UP_REF_OFFSET UNITYSDK_OFFSET(0x9ABF840)
#define MONO_BTLS_MONOBTLSX509CHAIN_MONO_BTLS_X509_CHAIN_FREE_OFFSET UNITYSDK_OFFSET(0x9ABF8C0)
#define MONO_BTLS_MONOBTLSX509CHAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABF940)
#define MONO_BTLS_MONOBTLSX509CHAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABFA20)
#define MONO_BTLS_MONOBTLSX509CHAIN_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9ABFA30)
#define MONO_BTLS_MONOBTLSX509CHAIN_GETCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9ABFB30)
#define MONO_BTLS_MONOBTLSX509CHAIN_ADDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9ABFD40)
#define MONO_BTLS_MONOBTLSX509CHAIN_COPY_OFFSET UNITYSDK_OFFSET(0x9ABFEB0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509Chain_TypeDefinitionIndex = 29127;

	class MonoBtlsX509Chain : public Il2CppObject
	{
	public:
		BoringX509ChainHandle* get_Handle()
		{
			return (return (BoringX509ChainHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_x509_chain_new()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_MONO_BTLS_X509_CHAIN_NEW_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_x509_chain_get_count(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_MONO_BTLS_X509_CHAIN_GET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_chain_get_cert(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_MONO_BTLS_X509_CHAIN_GET_CERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_chain_add_cert(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_MONO_BTLS_X509_CHAIN_ADD_CERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_chain_up_ref(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_MONO_BTLS_X509_CHAIN_UP_REF_OFFSET))(arg, nullptr);
		}

		::System::Void mono_btls_x509_chain_free(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_MONO_BTLS_X509_CHAIN_FREE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(BoringX509ChainHandle* arg)
		{
			((::System::Void(*)(BoringX509ChainHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_GET_COUNT_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509* GetCertificate(::System::Int32 arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_GETCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void AddCertificate(::Mono::Btls::MonoBtlsX509* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_ADDCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509Chain* Copy()
		{
			return (return (::Mono::Btls::MonoBtlsX509Chain*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509CHAIN_COPY_OFFSET))(nullptr);
		}

	};
}

