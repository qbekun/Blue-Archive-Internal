#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91931D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9192FC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9193B30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_SET_KEY_OFFSET UNITYSDK_OFFSET(0x9193BB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x9193CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x9193D50)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int KeyedHashAlgorithm_TypeDefinitionIndex = 24345;

	class KeyedHashAlgorithm : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* KeyValue; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Key()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::KeyedHashAlgorithm* Create()
		{
			return (return (::System::Security::Cryptography::KeyedHashAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::KeyedHashAlgorithm* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::KeyedHashAlgorithm*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_CREATE_OFFSET))(str, nullptr);
		}

	};
}

