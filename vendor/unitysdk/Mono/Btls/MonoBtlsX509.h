#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509Format; }
namespace Mono::Btls { class MonoBtlsX509TrustKind; }
namespace Mono::Btls { class MonoBtlsX509; }
namespace Mono::Btls { class MonoBtlsX509Name; }

#define MONO_BTLS_MONOBTLSX509_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9AB8DD0)
#define MONO_BTLS_MONOBTLSX509_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB9CA0)
#define MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_UP_REF_OFFSET UNITYSDK_OFFSET(0x9ABE1F0)
#define MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_FROM_DATA_OFFSET UNITYSDK_OFFSET(0x9ABE270)
#define MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_GET_SUBJECT_NAME_OFFSET UNITYSDK_OFFSET(0x9ABE300)
#define MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_GET_RAW_DATA_OFFSET UNITYSDK_OFFSET(0x9ABE380)
#define MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_CMP_OFFSET UNITYSDK_OFFSET(0x9ABE410)
#define MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_FREE_OFFSET UNITYSDK_OFFSET(0x9ABE4A0)
#define MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_ADD_EXPLICIT_TRUST_OFFSET UNITYSDK_OFFSET(0x9ABE520)
#define MONO_BTLS_MONOBTLSX509_COPY_OFFSET UNITYSDK_OFFSET(0x9ABE5A0)
#define MONO_BTLS_MONOBTLSX509_LOADFROMDATA_OFFSET UNITYSDK_OFFSET(0x9ABE760)
#define MONO_BTLS_MONOBTLSX509_GETSUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x9ABEAA0)
#define MONO_BTLS_MONOBTLSX509_GETSUBJECTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x9ABECA0)
#define MONO_BTLS_MONOBTLSX509_GETRAWDATA_OFFSET UNITYSDK_OFFSET(0x9ABEF00)
#define MONO_BTLS_MONOBTLSX509_COMPARE_OFFSET UNITYSDK_OFFSET(0x9ABF1E0)
#define MONO_BTLS_MONOBTLSX509_ADDEXPLICITTRUST_OFFSET UNITYSDK_OFFSET(0x9ABF360)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509_TypeDefinitionIndex = 29125;

	class MonoBtlsX509 : public Il2CppObject
	{
	public:
		BoringX509Handle* get_Handle()
		{
			return (return (BoringX509Handle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(BoringX509Handle* arg)
		{
			((::System::Void(*)(BoringX509Handle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_up_ref(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_UP_REF_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_from_data(::System::Int32 arg, ::System::Int32 arg, ::Mono::Btls::MonoBtlsX509Format* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Mono::Btls::MonoBtlsX509Format*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_FROM_DATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_get_subject_name(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_GET_SUBJECT_NAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_get_raw_data(::System::Int32 arg, ::System::Int32 arg, ::Mono::Btls::MonoBtlsX509Format* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Mono::Btls::MonoBtlsX509Format*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_GET_RAW_DATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_cmp(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_CMP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void mono_btls_x509_free(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_FREE_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_add_explicit_trust(::System::Int32 arg, ::Mono::Btls::MonoBtlsX509TrustKind* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Mono::Btls::MonoBtlsX509TrustKind*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_MONO_BTLS_X509_ADD_EXPLICIT_TRUST_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509* Copy()
		{
			return (return (::Mono::Btls::MonoBtlsX509*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_COPY_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509* LoadFromData(::Il2CppArray<::System::Object*>* arg, ::Mono::Btls::MonoBtlsX509Format* arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509*(*)(::Il2CppArray<::System::Object*>*, ::Mono::Btls::MonoBtlsX509Format*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_LOADFROMDATA_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509Name* GetSubjectName()
		{
			return (return (::Mono::Btls::MonoBtlsX509Name*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_GETSUBJECTNAME_OFFSET))(nullptr);
		}

		::System::Int64 GetSubjectNameHash()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_GETSUBJECTNAMEHASH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRawData(::Mono::Btls::MonoBtlsX509Format* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Mono::Btls::MonoBtlsX509Format*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_GETRAWDATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(::Mono::Btls::MonoBtlsX509* arg, ::Mono::Btls::MonoBtlsX509* arg)
		{
			return (return (::System::Int32(*)(::Mono::Btls::MonoBtlsX509*, ::Mono::Btls::MonoBtlsX509*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExplicitTrust(::Mono::Btls::MonoBtlsX509TrustKind* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509TrustKind*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509_ADDEXPLICITTRUST_OFFSET))(arg, nullptr);
		}

	};
}

