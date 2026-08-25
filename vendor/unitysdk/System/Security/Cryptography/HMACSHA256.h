#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA256_.CTOR_OFFSET UNITYSDK_OFFSET(0x9193690)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA256_.CTOR_OFFSET UNITYSDK_OFFSET(0x91936F0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACSHA256_TypeDefinitionIndex = 24341;

	class HMACSHA256 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA256_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA256_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

