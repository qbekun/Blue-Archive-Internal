#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9196910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x9196920)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x9196970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9196A10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9196A70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9196A80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETNONZEROBYTES_OFFSET UNITYSDK_OFFSET(0x9196C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_FILL_OFFSET UNITYSDK_OFFSET(0x9196CD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_FILLSPAN_OFFSET UNITYSDK_OFFSET(0x9196D40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9196DA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETNONZEROBYTES_OFFSET UNITYSDK_OFFSET(0x9197080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETINT32_OFFSET UNITYSDK_OFFSET(0x9197340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETINT32_OFFSET UNITYSDK_OFFSET(0x9197590)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RandomNumberGenerator_TypeDefinitionIndex = 24352;

	class RandomNumberGenerator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RandomNumberGenerator* Create()
		{
			return (return (::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RandomNumberGenerator* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::RandomNumberGenerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_CREATE_OFFSET))(str, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void GetBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void GetBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetNonZeroBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETNONZEROBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void Fill(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_FILL_OFFSET))(arg, nullptr);
		}

		::System::Void FillSpan(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_FILLSPAN_OFFSET))(arg, nullptr);
		}

		::System::Void GetBytes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void GetNonZeroBytes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETNONZEROBYTES_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetInt32(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETINT32_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetInt32(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETINT32_OFFSET))(arg, nullptr);
		}

	};
}

