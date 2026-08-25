#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9194FD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9195110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9195290)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9195420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x91950B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9195210)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9195350)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9195510)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_GET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x91959D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x9195820)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_GET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x91959E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9195570)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_GET_SALT_OFFSET UNITYSDK_OFFSET(0x91959F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_SET_SALT_OFFSET UNITYSDK_OFFSET(0x91956A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9195A70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_RESET_OFFSET UNITYSDK_OFFSET(0x91963B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91963F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_CRYPTDERIVEKEY_OFFSET UNITYSDK_OFFSET(0x91964D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_COMPUTEBASEVALUE_OFFSET UNITYSDK_OFFSET(0x9195C20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_COMPUTEBYTES_OFFSET UNITYSDK_OFFSET(0x9195E10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_HASHPREFIX_OFFSET UNITYSDK_OFFSET(0x9196590)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int PasswordDeriveBytes_TypeDefinitionIndex = 24350;

	class PasswordDeriveBytes : public Il2CppObject
	{
	public:
		::System::Int32 _extraCount; // 0x10
		::System::Int32 _prefix; // 0x14
		::System::Int32 _iterations; // 0x18
		::Il2CppArray<::System::Object*>* _baseValue; // 0x20
		::Il2CppArray<::System::Object*>* _extra; // 0x28
		::Il2CppArray<::System::Object*>* _salt; // 0x30
		::System::String* _hashName; // 0x38
		::Il2CppArray<::System::Object*>* _password; // 0x40
		::System::Security::Cryptography::HashAlgorithm* _hash; // 0x48

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET))(str, arg, str, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::CspParameters* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::CspParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::CspParameters* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::CspParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Int32 arg, ::System::Security::Cryptography::CspParameters* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Int32, ::System::Security::Cryptography::CspParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET))(str, arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Int32 arg, ::System::Security::Cryptography::CspParameters* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Int32, ::System::Security::Cryptography::CspParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_.CTOR_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::String* get_HashName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_GET_HASHNAME_OFFSET))(nullptr);
		}

		::System::Void set_HashName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_SET_HASHNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 get_IterationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_GET_ITERATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_IterationCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_SET_ITERATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Salt()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_GET_SALT_OFFSET))(nullptr);
		}

		::System::Void set_Salt(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_SET_SALT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_GETBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_RESET_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_DISPOSE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CryptDeriveKey(::System::String* str, ::System::String* str, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_CRYPTDERIVEKEY_OFFSET))(str, str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ComputeBaseValue()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_COMPUTEBASEVALUE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ComputeBytes(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_COMPUTEBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void HashPrefix(::System::Security::Cryptography::CryptoStream* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::CryptoStream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PASSWORDDERIVEBYTES_HASHPREFIX_OFFSET))(arg, nullptr);
		}

	};
}

