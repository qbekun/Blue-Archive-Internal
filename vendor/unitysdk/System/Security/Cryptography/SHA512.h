#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512_.CTOR_OFFSET UNITYSDK_OFFSET(0x91AA640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512_CREATE_OFFSET UNITYSDK_OFFSET(0x91A3B40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512_CREATE_OFFSET UNITYSDK_OFFSET(0x91AA740)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA512_TypeDefinitionIndex = 24374;

	class SHA512 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::SHA512* Create()
		{
			return (return (::System::Security::Cryptography::SHA512*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::SHA512* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::SHA512*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512_CREATE_OFFSET))(str, nullptr);
		}

	};
}

