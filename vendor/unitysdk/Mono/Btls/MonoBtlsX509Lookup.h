#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509Store; }
namespace Mono::Btls { class MonoBtlsX509LookupType; }
namespace Mono::Btls { class MonoBtlsX509FileType; }
namespace Mono::Btls { class MonoBtlsX509LookupMono; }
namespace Mono::Btls { class MonoBtlsX509; }

#define MONO_BTLS_MONOBTLSX509LOOKUP_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9AC00F0)
#define MONO_BTLS_MONOBTLSX509LOOKUP_MONO_BTLS_X509_LOOKUP_NEW_OFFSET UNITYSDK_OFFSET(0x9AC0170)
#define MONO_BTLS_MONOBTLSX509LOOKUP_MONO_BTLS_X509_LOOKUP_ADD_DIR_OFFSET UNITYSDK_OFFSET(0x9AC01F0)
#define MONO_BTLS_MONOBTLSX509LOOKUP_MONO_BTLS_X509_LOOKUP_ADD_MONO_OFFSET UNITYSDK_OFFSET(0x9AC0280)
#define MONO_BTLS_MONOBTLSX509LOOKUP_MONO_BTLS_X509_LOOKUP_FREE_OFFSET UNITYSDK_OFFSET(0x9AC0310)
#define MONO_BTLS_MONOBTLSX509LOOKUP_MONO_BTLS_X509_LOOKUP_PEEK_LOOKUP_OFFSET UNITYSDK_OFFSET(0x9AC0390)
#define MONO_BTLS_MONOBTLSX509LOOKUP_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9AC0410)
#define MONO_BTLS_MONOBTLSX509LOOKUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC0660)
#define MONO_BTLS_MONOBTLSX509LOOKUP_GETNATIVELOOKUP_OFFSET UNITYSDK_OFFSET(0x9AC06B0)
#define MONO_BTLS_MONOBTLSX509LOOKUP_ADDDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9AC07B0)
#define MONO_BTLS_MONOBTLSX509LOOKUP_ADDMONO_OFFSET UNITYSDK_OFFSET(0x9AC0A30)
#define MONO_BTLS_MONOBTLSX509LOOKUP_ADDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AC0E20)
#define MONO_BTLS_MONOBTLSX509LOOKUP_CLOSE_OFFSET UNITYSDK_OFFSET(0x9AC0FE0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509Lookup_TypeDefinitionIndex = 29132;

	class MonoBtlsX509Lookup : public Il2CppObject
	{
	public:
		::Mono::Btls::MonoBtlsX509Store* store; // 0x20
		::Mono::Btls::MonoBtlsX509LookupType* type; // 0x28
		Il2CppObject* monoLookups; // 0x30

		BoringX509LookupHandle* get_Handle()
		{
			return (return (BoringX509LookupHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_x509_lookup_new(::System::Int32 arg, ::Mono::Btls::MonoBtlsX509LookupType* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Mono::Btls::MonoBtlsX509LookupType*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_MONO_BTLS_X509_LOOKUP_NEW_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_lookup_add_dir(::System::Int32 arg, ::System::Int32 arg, ::Mono::Btls::MonoBtlsX509FileType* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Mono::Btls::MonoBtlsX509FileType*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_MONO_BTLS_X509_LOOKUP_ADD_DIR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_lookup_add_mono(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_MONO_BTLS_X509_LOOKUP_ADD_MONO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void mono_btls_x509_lookup_free(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_MONO_BTLS_X509_LOOKUP_FREE_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_lookup_peek_lookup(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_MONO_BTLS_X509_LOOKUP_PEEK_LOOKUP_OFFSET))(arg, nullptr);
		}

		BoringX509LookupHandle* Create_internal(::Mono::Btls::MonoBtlsX509Store* arg, ::Mono::Btls::MonoBtlsX509LookupType* arg)
		{
			return (return (BoringX509LookupHandle*(*)(::Mono::Btls::MonoBtlsX509Store*, ::Mono::Btls::MonoBtlsX509LookupType*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_CREATE_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Mono::Btls::MonoBtlsX509Store* arg, ::Mono::Btls::MonoBtlsX509LookupType* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509Store*, ::Mono::Btls::MonoBtlsX509LookupType*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetNativeLookup()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_GETNATIVELOOKUP_OFFSET))(nullptr);
		}

		::System::Void AddDirectory(::System::String* str, ::Mono::Btls::MonoBtlsX509FileType* arg)
		{
			((::System::Void(*)(::System::String*, ::Mono::Btls::MonoBtlsX509FileType*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_ADDDIRECTORY_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddMono(::Mono::Btls::MonoBtlsX509LookupMono* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509LookupMono*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_ADDMONO_OFFSET))(arg, nullptr);
		}

		::System::Void AddCertificate(::Mono::Btls::MonoBtlsX509* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_ADDCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUP_CLOSE_OFFSET))(nullptr);
		}

	};
}

