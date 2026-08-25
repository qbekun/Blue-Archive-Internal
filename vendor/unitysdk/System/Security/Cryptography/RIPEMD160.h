#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160_.CTOR_OFFSET UNITYSDK_OFFSET(0x919C250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160_CREATE_OFFSET UNITYSDK_OFFSET(0x919C270)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160_CREATE_OFFSET UNITYSDK_OFFSET(0x919C2C0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RIPEMD160_TypeDefinitionIndex = 24359;

	class RIPEMD160 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RIPEMD160* Create()
		{
			return (return (::System::Security::Cryptography::RIPEMD160*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RIPEMD160* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::RIPEMD160*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160_CREATE_OFFSET))(str, nullptr);
		}

	};
}

