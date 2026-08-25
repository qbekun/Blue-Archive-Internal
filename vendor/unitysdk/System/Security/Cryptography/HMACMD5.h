#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACMD5_.CTOR_OFFSET UNITYSDK_OFFSET(0x91931E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACMD5_.CTOR_OFFSET UNITYSDK_OFFSET(0x9193240)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACMD5_TypeDefinitionIndex = 24338;

	class HMACMD5 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACMD5_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACMD5_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

