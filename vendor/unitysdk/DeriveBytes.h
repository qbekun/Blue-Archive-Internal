#pragma once
#include "unitysdk.h"

#define DERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x90F4CA0)
#define DERIVEBYTES_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x90FC100)
#define DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x90FC110)
#define DERIVEBYTES_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x90F4CB0)
#define DERIVEBYTES_SET_SALT_OFFSET UNITYSDK_OFFSET(0x90F4D80)
#define DERIVEBYTES_ADJUST_OFFSET UNITYSDK_OFFSET(0x90FC120)
#define DERIVEBYTES_DERIVE_OFFSET UNITYSDK_OFFSET(0x90FC1F0)
#define DERIVEBYTES_DERIVEKEY_OFFSET UNITYSDK_OFFSET(0x90F4E40)
#define DERIVEBYTES_DERIVEIV_OFFSET UNITYSDK_OFFSET(0x90F4EA0)
#define DERIVEBYTES_DERIVEMAC_OFFSET UNITYSDK_OFFSET(0x90F7D20)
#define DERIVEBYTES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90FC850)

	inline static constexpr unsigned int DeriveBytes_TypeDefinitionIndex = 35744;

	class DeriveBytes : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* keyDiversifier; // 0x0
		::Il2CppArray<::System::Object*>* ivDiversifier; // 0x8
		::Il2CppArray<::System::Object*>* macDiversifier; // 0x10
		::System::String* _hashName; // 0x10
		::System::Int32 _iterations; // 0x18
		::Il2CppArray<::System::Object*>* _password; // 0x20
		::Il2CppArray<::System::Object*>* _salt; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DERIVEBYTES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_HashName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DERIVEBYTES_SET_HASHNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_IterationCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DERIVEBYTES_SET_ITERATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Password(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DERIVEBYTES_SET_PASSWORD_OFFSET))(arg, nullptr);
		}

		::System::Void set_Salt(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DERIVEBYTES_SET_SALT_OFFSET))(arg, nullptr);
		}

		::System::Void Adjust(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DERIVEBYTES_ADJUST_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Derive(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DERIVEBYTES_DERIVE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DeriveKey(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DERIVEBYTES_DERIVEKEY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DeriveIV(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DERIVEBYTES_DERIVEIV_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DeriveMAC(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DERIVEBYTES_DERIVEMAC_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DERIVEBYTES_.CCTOR_OFFSET))(nullptr);
		}

	};

