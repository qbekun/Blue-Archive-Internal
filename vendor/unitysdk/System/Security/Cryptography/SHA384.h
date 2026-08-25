#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384_.CTOR_OFFSET UNITYSDK_OFFSET(0x91A8C20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384_CREATE_OFFSET UNITYSDK_OFFSET(0x91A3AF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384_CREATE_OFFSET UNITYSDK_OFFSET(0x91A8D20)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA384_TypeDefinitionIndex = 24372;

	class SHA384 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::SHA384* Create()
		{
			return (return (::System::Security::Cryptography::SHA384*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::SHA384* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::SHA384*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384_CREATE_OFFSET))(str, nullptr);
		}

	};
}

