#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A5EB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_CREATE_OFFSET UNITYSDK_OFFSET(0x91A3A50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_CREATE_OFFSET UNITYSDK_OFFSET(0x91A5ED0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA1_TypeDefinitionIndex = 24368;

	class SHA1 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::SHA1* Create()
		{
			return (return (::System::Security::Cryptography::SHA1*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::SHA1* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::SHA1*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_CREATE_OFFSET))(str, nullptr);
		}

	};
}

