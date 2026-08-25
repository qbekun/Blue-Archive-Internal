#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsKey; }
namespace Microsoft::Win32::SafeHandles { class SafePasswordHandle; }
namespace Mono::Btls { class MonoBtlsX509; }

#define MONO_BTLS_MONOBTLSPKCS12_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x96E1670)
#define MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_FREE_OFFSET UNITYSDK_OFFSET(0x96E16F0)
#define MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_NEW_OFFSET UNITYSDK_OFFSET(0x96E1770)
#define MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x96E17F0)
#define MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_GET_CERT_OFFSET UNITYSDK_OFFSET(0x96E1870)
#define MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_IMPORT_OFFSET UNITYSDK_OFFSET(0x96E18F0)
#define MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_HAS_PRIVATE_KEY_OFFSET UNITYSDK_OFFSET(0x96E19D0)
#define MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_GET_PRIVATE_KEY_OFFSET UNITYSDK_OFFSET(0x96E1A50)
#define MONO_BTLS_MONOBTLSPKCS12_.CTOR_OFFSET UNITYSDK_OFFSET(0x96E1AD0)
#define MONO_BTLS_MONOBTLSPKCS12_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x96E1BC0)
#define MONO_BTLS_MONOBTLSPKCS12_GETCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96E1CB0)
#define MONO_BTLS_MONOBTLSPKCS12_IMPORT_OFFSET UNITYSDK_OFFSET(0x96E1EB0)
#define MONO_BTLS_MONOBTLSPKCS12_GET_HASPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x96E1FB0)
#define MONO_BTLS_MONOBTLSPKCS12_GETPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x96E20B0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsPkcs12_TypeDefinitionIndex = 29107;

	class MonoBtlsPkcs12 : public Il2CppObject
	{
	public:
		::Mono::Btls::MonoBtlsKey* privateKey; // 0x20

		BoringPkcs12Handle* get_Handle()
		{
			return (return (BoringPkcs12Handle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Void mono_btls_pkcs12_free(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_FREE_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_pkcs12_new()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_NEW_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_pkcs12_get_count(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_GET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_pkcs12_get_cert(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_GET_CERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 mono_btls_pkcs12_import(::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object**, ::System::Int32, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_IMPORT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_pkcs12_has_private_key(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_HAS_PRIVATE_KEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_pkcs12_get_private_key(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_MONO_BTLS_PKCS12_GET_PRIVATE_KEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_GET_COUNT_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509* GetCertificate(::System::Int32 arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_GETCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void Import(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_IMPORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_HasPrivateKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_GET_HASPRIVATEKEY_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsKey* GetPrivateKey()
		{
			return (return (::Mono::Btls::MonoBtlsKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSPKCS12_GETPRIVATEKEY_OFFSET))(nullptr);
		}

	};
}

