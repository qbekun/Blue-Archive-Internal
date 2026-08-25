#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509NameEntryType; }
namespace Mono::Btls { class MonoBtlsX509Name; }

#define MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_HASH_OFFSET UNITYSDK_OFFSET(0x9AC2200)
#define MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_GET_ENTRY_COUNT_OFFSET UNITYSDK_OFFSET(0x9AC2280)
#define MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_GET_ENTRY_TYPE_OFFSET UNITYSDK_OFFSET(0x9AC2300)
#define MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_GET_ENTRY_OID_OFFSET UNITYSDK_OFFSET(0x9AC2380)
#define MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_GET_ENTRY_OID_DATA_OFFSET UNITYSDK_OFFSET(0x9AC2420)
#define MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_GET_ENTRY_VALUE_OFFSET UNITYSDK_OFFSET(0x9AC24B0)
#define MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_FROM_DATA_OFFSET UNITYSDK_OFFSET(0x9AC2550)
#define MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_FREE_OFFSET UNITYSDK_OFFSET(0x9AC25E0)
#define MONO_BTLS_MONOBTLSX509NAME_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9AC2660)
#define MONO_BTLS_MONOBTLSX509NAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABEC90)
#define MONO_BTLS_MONOBTLSX509NAME_GETHASH_OFFSET UNITYSDK_OFFSET(0x9ABEE00)
#define MONO_BTLS_MONOBTLSX509NAME_GETENTRYCOUNT_OFFSET UNITYSDK_OFFSET(0x9ABE060)
#define MONO_BTLS_MONOBTLSX509NAME_GETENTRYTYPE_OFFSET UNITYSDK_OFFSET(0x9ABD7D0)
#define MONO_BTLS_MONOBTLSX509NAME_GETENTRYOID_OFFSET UNITYSDK_OFFSET(0x9ABDD90)
#define MONO_BTLS_MONOBTLSX509NAME_GETENTRYOIDDATA_OFFSET UNITYSDK_OFFSET(0x9ABD920)
#define MONO_BTLS_MONOBTLSX509NAME_GETENTRYVALUE_OFFSET UNITYSDK_OFFSET(0x9ABDAD0)
#define MONO_BTLS_MONOBTLSX509NAME_CREATEFROMDATA_OFFSET UNITYSDK_OFFSET(0x9ABBF30)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509Name_TypeDefinitionIndex = 29139;

	class MonoBtlsX509Name : public Il2CppObject
	{
	public:
		::System::Int64 mono_btls_x509_name_hash(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_HASH_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_x509_name_get_entry_count(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_GET_ENTRY_COUNT_OFFSET))(arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509NameEntryType* mono_btls_x509_name_get_entry_type(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509NameEntryType*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_GET_ENTRY_TYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_name_get_entry_oid(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_GET_ENTRY_OID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_name_get_entry_oid_data(::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_GET_ENTRY_OID_DATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_name_get_entry_value(::System::Int32 arg, ::System::Int32 arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_GET_ENTRY_VALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_name_from_data(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_FROM_DATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void mono_btls_x509_name_free(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_MONO_BTLS_X509_NAME_FREE_OFFSET))(arg, nullptr);
		}

		BoringX509NameHandle* get_Handle()
		{
			return (return (BoringX509NameHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(BoringX509NameHandle* arg)
		{
			((::System::Void(*)(BoringX509NameHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetHash()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_GETHASH_OFFSET))(nullptr);
		}

		::System::Int32 GetEntryCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_GETENTRYCOUNT_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509NameEntryType* GetEntryType(::System::Int32 arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509NameEntryType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_GETENTRYTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* GetEntryOid(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_GETENTRYOID_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEntryOidData(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_GETENTRYOIDDATA_OFFSET))(arg, nullptr);
		}

		::System::String* GetEntryValue(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::String*(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_GETENTRYVALUE_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509Name* CreateFromData(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509Name*(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509NAME_CREATEFROMDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

