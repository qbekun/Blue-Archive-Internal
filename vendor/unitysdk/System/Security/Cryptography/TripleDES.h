#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_.CTOR_OFFSET UNITYSDK_OFFSET(0x91AD650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_GET_KEY_OFFSET UNITYSDK_OFFSET(0x91AD700)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_SET_KEY_OFFSET UNITYSDK_OFFSET(0x91AD970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_CREATE_OFFSET UNITYSDK_OFFSET(0x91ADC20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_CREATE_OFFSET UNITYSDK_OFFSET(0x91ADD40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_ISWEAKKEY_OFFSET UNITYSDK_OFFSET(0x91AD7D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_EQUALBYTES_OFFSET UNITYSDK_OFFSET(0x91ADF40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_ISLEGALKEYSIZE_OFFSET UNITYSDK_OFFSET(0x91ADE60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91AE0C0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int TripleDES_TypeDefinitionIndex = 24384;

	class TripleDES : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_legalBlockSizes; // 0x0
		::Il2CppArray<::System::Object*>* s_legalKeySizes; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Key()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::TripleDES* Create()
		{
			return (return (::System::Security::Cryptography::TripleDES*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::TripleDES* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::TripleDES*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_CREATE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsWeakKey(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_ISWEAKKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean EqualBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_EQUALBYTES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsLegalKeySize(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_ISLEGALKEYSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

