#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_GET_HASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x9183250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9183260)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x91832A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x91837C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9183830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x91838A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9183910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9183950)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9183990)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_GET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9183BC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9183BD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_GET_SALT_OFFSET UNITYSDK_OFFSET(0x9183CB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_SET_SALT_OFFSET UNITYSDK_OFFSET(0x9183CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9183DF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9183E80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_CRYPTDERIVEKEY_OFFSET UNITYSDK_OFFSET(0x9184630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_RESET_OFFSET UNITYSDK_OFFSET(0x9184680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_OPENHMAC_OFFSET UNITYSDK_OFFSET(0x9183500)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9183740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_FUNC_OFFSET UNITYSDK_OFFSET(0x9184030)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Rfc2898DeriveBytes_TypeDefinitionIndex = 24297;

	class Rfc2898DeriveBytes : public Il2CppObject
	{
	public:
		::System::Int32 MinimumSaltSize; // 0x0
		::Il2CppArray<::System::Object*>* _password; // 0x10
		::Il2CppArray<::System::Object*>* _salt; // 0x18
		::System::UInt32 _iterations; // 0x20
		::System::Security::Cryptography::HMAC* _hmac; // 0x28
		::System::Int32 _blockSize; // 0x30
		::Il2CppArray<::System::Object*>* _buffer; // 0x38
		::System::UInt32 _block; // 0x40
		::System::Int32 _startIndex; // 0x44
		::System::Int32 _endIndex; // 0x48
		::System::Security::Cryptography::HashAlgorithmName* _HashAlgorithm_k__BackingField; // 0x50

		::System::Security::Cryptography::HashAlgorithmName* get_HashAlgorithm()
		{
			return (return (::System::Security::Cryptography::HashAlgorithmName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_GET_HASHALGORITHM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Int32 get_IterationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_GET_ITERATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_IterationCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Salt()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_GET_SALT_OFFSET))(nullptr);
		}

		::System::Void set_Salt(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_SET_SALT_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_DISPOSE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_GETBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CryptDeriveKey(::System::String* str, ::System::String* str, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_CRYPTDERIVEKEY_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_RESET_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::HMAC* OpenHmac()
		{
			return (return (::System::Security::Cryptography::HMAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_OPENHMAC_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_INITIALIZE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Func()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_FUNC_OFFSET))(nullptr);
		}

	};
}

