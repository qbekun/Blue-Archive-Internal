#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_.CTOR_OFFSET UNITYSDK_OFFSET(0x9194EC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_CREATE_OFFSET UNITYSDK_OFFSET(0x9194EE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_CREATE_OFFSET UNITYSDK_OFFSET(0x9194F30)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int MD5_TypeDefinitionIndex = 24349;

	class MD5 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::MD5* Create()
		{
			return (return (::System::Security::Cryptography::MD5*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::MD5* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::MD5*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_CREATE_OFFSET))(str, nullptr);
		}

	};
}

