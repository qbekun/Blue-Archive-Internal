#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509; }
namespace Mono::Btls { class MonoBtlsX509Lookup; }
namespace Mono::Btls { class MonoBtlsX509LookupType; }
namespace Mono::Btls { class MonoBtlsX509FileType; }
namespace Mono::Btls { class MonoBtlsX509TrustKind; }

#define MONO_BTLS_MONOBTLSX509STORE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9AC05D0)
#define MONO_BTLS_MONOBTLSX509STORE_MONO_BTLS_X509_STORE_NEW_OFFSET UNITYSDK_OFFSET(0x9AC2760)
#define MONO_BTLS_MONOBTLSX509STORE_MONO_BTLS_X509_STORE_FROM_SSL_CTX_OFFSET UNITYSDK_OFFSET(0x9AC27E0)
#define MONO_BTLS_MONOBTLSX509STORE_MONO_BTLS_X509_STORE_ADD_CERT_OFFSET UNITYSDK_OFFSET(0x9AC2860)
#define MONO_BTLS_MONOBTLSX509STORE_MONO_BTLS_X509_STORE_FREE_OFFSET UNITYSDK_OFFSET(0x9AC28F0)
#define MONO_BTLS_MONOBTLSX509STORE_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9AC2970)
#define MONO_BTLS_MONOBTLSX509STORE_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9AC2AC0)
#define MONO_BTLS_MONOBTLSX509STORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC2C10)
#define MONO_BTLS_MONOBTLSX509STORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABB9F0)
#define MONO_BTLS_MONOBTLSX509STORE_ADDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AC0E40)
#define MONO_BTLS_MONOBTLSX509STORE_ADDLOOKUP_OFFSET UNITYSDK_OFFSET(0x9AC2C30)
#define MONO_BTLS_MONOBTLSX509STORE_ADDDIRECTORYLOOKUP_OFFSET UNITYSDK_OFFSET(0x9AC2DA0)
#define MONO_BTLS_MONOBTLSX509STORE_ADDCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9AC2DE0)
#define MONO_BTLS_MONOBTLSX509STORE_CLOSE_OFFSET UNITYSDK_OFFSET(0x9AC2EB0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509Store_TypeDefinitionIndex = 29142;

	class MonoBtlsX509Store : public Il2CppObject
	{
	public:
		Il2CppObject* lookupHash; // 0x20

		BoringX509StoreHandle* get_Handle()
		{
			return (return (BoringX509StoreHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_x509_store_new()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_MONO_BTLS_X509_STORE_NEW_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_x509_store_from_ssl_ctx(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_MONO_BTLS_X509_STORE_FROM_SSL_CTX_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_store_add_cert(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_MONO_BTLS_X509_STORE_ADD_CERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void mono_btls_x509_store_free(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_MONO_BTLS_X509_STORE_FREE_OFFSET))(arg, nullptr);
		}

		BoringX509StoreHandle* Create_internal()
		{
			return (return (BoringX509StoreHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_CREATE_INTERNAL_OFFSET))(nullptr);
		}

		BoringX509StoreHandle* Create_internal(BoringSslCtxHandle* arg)
		{
			return (return (BoringX509StoreHandle*(*)(BoringSslCtxHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_CREATE_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(BoringSslCtxHandle* arg)
		{
			((::System::Void(*)(BoringSslCtxHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddCertificate(::Mono::Btls::MonoBtlsX509* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_ADDCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509Lookup* AddLookup(::Mono::Btls::MonoBtlsX509LookupType* arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509Lookup*(*)(::Mono::Btls::MonoBtlsX509LookupType*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_ADDLOOKUP_OFFSET))(arg, nullptr);
		}

		::System::Void AddDirectoryLookup(::System::String* str, ::Mono::Btls::MonoBtlsX509FileType* arg)
		{
			((::System::Void(*)(::System::String*, ::Mono::Btls::MonoBtlsX509FileType*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_ADDDIRECTORYLOOKUP_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddCollection(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::Mono::Btls::MonoBtlsX509TrustKind* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::Mono::Btls::MonoBtlsX509TrustKind*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_ADDCOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STORE_CLOSE_OFFSET))(nullptr);
		}

	};
}

