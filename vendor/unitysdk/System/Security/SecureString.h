#pragma once
#include "../../unitysdk.h"

#define SYSTEM_SECURITY_SECURESTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x917E0C0)
#define SYSTEM_SECURITY_SECURESTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x917E2D0)
#define SYSTEM_SECURITY_SECURESTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x917E430)
#define SYSTEM_SECURITY_SECURESTRING_DISPOSE_OFFSET UNITYSDK_OFFSET(0x917E4A0)
#define SYSTEM_SECURITY_SECURESTRING_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x917E420)
#define SYSTEM_SECURITY_SECURESTRING_DECRYPT_OFFSET UNITYSDK_OFFSET(0x917E4F0)
#define SYSTEM_SECURITY_SECURESTRING_ALLOC_OFFSET UNITYSDK_OFFSET(0x917E120)
#define SYSTEM_SECURITY_SECURESTRING_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x917E500)

namespace System::Security
{
	inline static constexpr unsigned int SecureString_TypeDefinitionIndex = 24278;

	class SecureString : public Il2CppObject
	{
	public:
		::System::Int32 length; // 0x10
		::System::Boolean disposed; // 0x14
		::Il2CppArray<::System::Object*>* data; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Encrypt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_ENCRYPT_OFFSET))(nullptr);
		}

		::System::Void Decrypt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_DECRYPT_OFFSET))(nullptr);
		}

		::System::Void Alloc(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_ALLOC_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBuffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURESTRING_GETBUFFER_OFFSET))(nullptr);
		}

	};
}

