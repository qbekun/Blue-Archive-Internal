#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BB540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BB590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_GET_NONCEBYTESIZES_OFFSET UNITYSDK_OFFSET(0x91BB5E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_GET_TAGBYTESIZES_OFFSET UNITYSDK_OFFSET(0x91BB630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_DECRYPT_OFFSET UNITYSDK_OFFSET(0x91BB680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_DECRYPT_OFFSET UNITYSDK_OFFSET(0x91BB6D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91BB720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x91BB730)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x91BB780)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AesGcm_TypeDefinitionIndex = 24403;

	class AesGcm : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::KeySizes* get_NonceByteSizes()
		{
			return (return (::System::Security::Cryptography::KeySizes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_GET_NONCEBYTESIZES_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::KeySizes* get_TagByteSizes()
		{
			return (return (::System::Security::Cryptography::KeySizes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_GET_TAGBYTESIZES_OFFSET))(nullptr);
		}

		::System::Void Decrypt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_DECRYPT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Decrypt(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_DECRYPT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Encrypt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_ENCRYPT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Encrypt(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESGCM_ENCRYPT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

