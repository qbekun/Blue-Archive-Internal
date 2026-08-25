#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS1MASKGENERATIONMETHOD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9196770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS1MASKGENERATIONMETHOD_GET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x91967C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS1MASKGENERATIONMETHOD_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x91967D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS1MASKGENERATIONMETHOD_GENERATEMASK_OFFSET UNITYSDK_OFFSET(0x9196840)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int PKCS1MaskGenerationMethod_TypeDefinitionIndex = 24351;

	class PKCS1MaskGenerationMethod : public Il2CppObject
	{
	public:
		::System::String* HashNameValue; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS1MASKGENERATIONMETHOD_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_HashName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS1MASKGENERATIONMETHOD_GET_HASHNAME_OFFSET))(nullptr);
		}

		::System::Void set_HashName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS1MASKGENERATIONMETHOD_SET_HASHNAME_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateMask(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PKCS1MASKGENERATIONMETHOD_GENERATEMASK_OFFSET))(arg, arg, nullptr);
		}

	};
}

