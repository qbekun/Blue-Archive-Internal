#pragma once
#include "unitysdk.h"

#define ENCRYPTEDPRIVATEKEYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9111240)
#define ENCRYPTEDPRIVATEKEYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9111250)
#define ENCRYPTEDPRIVATEKEYINFO_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x91115B0)
#define ENCRYPTEDPRIVATEKEYINFO_SET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x91115C0)
#define ENCRYPTEDPRIVATEKEYINFO_GET_ENCRYPTEDDATA_OFFSET UNITYSDK_OFFSET(0x91115D0)
#define ENCRYPTEDPRIVATEKEYINFO_SET_ENCRYPTEDDATA_OFFSET UNITYSDK_OFFSET(0x9111650)
#define ENCRYPTEDPRIVATEKEYINFO_GET_SALT_OFFSET UNITYSDK_OFFSET(0x9111700)
#define ENCRYPTEDPRIVATEKEYINFO_GET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x91117D0)
#define ENCRYPTEDPRIVATEKEYINFO_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x91117E0)
#define ENCRYPTEDPRIVATEKEYINFO_DECODE_OFFSET UNITYSDK_OFFSET(0x9111280)
#define ENCRYPTEDPRIVATEKEYINFO_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9111860)

	inline static constexpr unsigned int EncryptedPrivateKeyInfo_TypeDefinitionIndex = 35811;

	class EncryptedPrivateKeyInfo : public Il2CppObject
	{
	public:
		::System::String* _algorithm; // 0x10
		::Il2CppArray<::System::Object*>* _salt; // 0x18
		::System::Int32 _iterations; // 0x20
		::Il2CppArray<::System::Object*>* _data; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDPRIVATEKEYINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDPRIVATEKEYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Algorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDPRIVATEKEYINFO_GET_ALGORITHM_OFFSET))(nullptr);
		}

		::System::Void set_Algorithm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDPRIVATEKEYINFO_SET_ALGORITHM_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_EncryptedData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDPRIVATEKEYINFO_GET_ENCRYPTEDDATA_OFFSET))(nullptr);
		}

		::System::Void set_EncryptedData(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDPRIVATEKEYINFO_SET_ENCRYPTEDDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Salt()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDPRIVATEKEYINFO_GET_SALT_OFFSET))(nullptr);
		}

		::System::Int32 get_IterationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDPRIVATEKEYINFO_GET_ITERATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_IterationCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDPRIVATEKEYINFO_SET_ITERATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Decode(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDPRIVATEKEYINFO_DECODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDPRIVATEKEYINFO_GETBYTES_OFFSET))(nullptr);
		}

	};

