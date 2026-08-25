#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BB2B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BB300)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_GET_NONCEBYTESIZES_OFFSET UNITYSDK_OFFSET(0x91BB350)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_GET_TAGBYTESIZES_OFFSET UNITYSDK_OFFSET(0x91BB3A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_DECRYPT_OFFSET UNITYSDK_OFFSET(0x91BB3F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_DECRYPT_OFFSET UNITYSDK_OFFSET(0x91BB440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91BB490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x91BB4A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x91BB4F0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AesCcm_TypeDefinitionIndex = 24402;

	class AesCcm : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::KeySizes* get_NonceByteSizes()
		{
			return (return (::System::Security::Cryptography::KeySizes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_GET_NONCEBYTESIZES_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::KeySizes* get_TagByteSizes()
		{
			return (return (::System::Security::Cryptography::KeySizes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_GET_TAGBYTESIZES_OFFSET))(nullptr);
		}

		::System::Void Decrypt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_DECRYPT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Decrypt(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_DECRYPT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Encrypt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_ENCRYPT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Encrypt(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCCM_ENCRYPT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

