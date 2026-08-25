#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9192A60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_.CTOR_OFFSET UNITYSDK_OFFSET(0x91935A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_.CTOR_OFFSET UNITYSDK_OFFSET(0x91935B0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACSHA1_TypeDefinitionIndex = 24340;

	class HMACSHA1 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

