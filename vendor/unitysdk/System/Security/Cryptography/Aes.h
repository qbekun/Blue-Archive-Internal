#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES_.CTOR_OFFSET UNITYSDK_OFFSET(0x918BD60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES_CREATE_OFFSET UNITYSDK_OFFSET(0x918BE10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES_CREATE_OFFSET UNITYSDK_OFFSET(0x918BE90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x918BF80)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Aes_TypeDefinitionIndex = 24314;

	class Aes : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_legalBlockSizes; // 0x0
		::Il2CppArray<::System::Object*>* s_legalKeySizes; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::Aes* Create()
		{
			return (return (::System::Security::Cryptography::Aes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::Aes* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::Aes*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES_CREATE_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

