#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A7620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_CREATE_OFFSET UNITYSDK_OFFSET(0x91A3AA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_CREATE_OFFSET UNITYSDK_OFFSET(0x91A7720)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA256_TypeDefinitionIndex = 24370;

	class SHA256 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::SHA256* Create()
		{
			return (return (::System::Security::Cryptography::SHA256*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::SHA256* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::SHA256*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_CREATE_OFFSET))(str, nullptr);
		}

	};
}

