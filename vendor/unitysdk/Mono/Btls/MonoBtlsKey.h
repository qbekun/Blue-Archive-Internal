#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsKey; }

#define MONO_BTLS_MONOBTLSKEY_MONO_BTLS_KEY_NEW_OFFSET UNITYSDK_OFFSET(0x96E0640)
#define MONO_BTLS_MONOBTLSKEY_MONO_BTLS_KEY_FREE_OFFSET UNITYSDK_OFFSET(0x96E06C0)
#define MONO_BTLS_MONOBTLSKEY_MONO_BTLS_KEY_UP_REF_OFFSET UNITYSDK_OFFSET(0x96E0740)
#define MONO_BTLS_MONOBTLSKEY_MONO_BTLS_KEY_GET_BYTES_OFFSET UNITYSDK_OFFSET(0x96E07C0)
#define MONO_BTLS_MONOBTLSKEY_MONO_BTLS_KEY_ASSIGN_RSA_PRIVATE_KEY_OFFSET UNITYSDK_OFFSET(0x96E0860)
#define MONO_BTLS_MONOBTLSKEY_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x96E0900)
#define MONO_BTLS_MONOBTLSKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x96E0980)
#define MONO_BTLS_MONOBTLSKEY_GETBYTES_OFFSET UNITYSDK_OFFSET(0x96E09B0)
#define MONO_BTLS_MONOBTLSKEY_COPY_OFFSET UNITYSDK_OFFSET(0x96E0D10)
#define MONO_BTLS_MONOBTLSKEY_CREATEFROMRSAPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x96E0F80)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsKey_TypeDefinitionIndex = 29103;

	class MonoBtlsKey : public Il2CppObject
	{
	public:
		::System::Int32 mono_btls_key_new()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSKEY_MONO_BTLS_KEY_NEW_OFFSET))(nullptr);
		}

		::System::Void mono_btls_key_free(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSKEY_MONO_BTLS_KEY_FREE_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_key_up_ref(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSKEY_MONO_BTLS_KEY_UP_REF_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_key_get_bytes(::System::Int32 arg, int32_t&* arg, int32_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, int32_t&*, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSKEY_MONO_BTLS_KEY_GET_BYTES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_key_assign_rsa_private_key(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSKEY_MONO_BTLS_KEY_ASSIGN_RSA_PRIVATE_KEY_OFFSET))(arg, arg, arg, nullptr);
		}

		BoringKeyHandle* get_Handle()
		{
			return (return (BoringKeyHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSKEY_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(BoringKeyHandle* arg)
		{
			((::System::Void(*)(BoringKeyHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSKEY_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSKEY_GETBYTES_OFFSET))(arg, nullptr);
		}

		::Mono::Btls::MonoBtlsKey* Copy()
		{
			return (return (::Mono::Btls::MonoBtlsKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSKEY_COPY_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsKey* CreateFromRSAPrivateKey(::System::Security::Cryptography::RSA* arg)
		{
			return (return (::Mono::Btls::MonoBtlsKey*(*)(::System::Security::Cryptography::RSA*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSKEY_CREATEFROMRSAPRIVATEKEY_OFFSET))(arg, nullptr);
		}

	};
}

