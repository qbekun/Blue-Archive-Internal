#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACRIPEMD160_.CTOR_OFFSET UNITYSDK_OFFSET(0x9193320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACRIPEMD160_.CTOR_OFFSET UNITYSDK_OFFSET(0x9193380)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACRIPEMD160_TypeDefinitionIndex = 24339;

	class HMACRIPEMD160 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACRIPEMD160_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACRIPEMD160_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

