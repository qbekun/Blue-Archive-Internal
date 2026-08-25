#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICOPERATIONS_FIXEDTIMEEQUALS_OFFSET UNITYSDK_OFFSET(0x91899A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICOPERATIONS_ZEROMEMORY_OFFSET UNITYSDK_OFFSET(0x9187990)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptographicOperations_TypeDefinitionIndex = 24307;

	class CryptographicOperations : public Il2CppObject
	{
	public:
		::System::Boolean FixedTimeEquals(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICOPERATIONS_FIXEDTIMEEQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ZeroMemory(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICOPERATIONS_ZEROMEMORY_OFFSET))(arg, nullptr);
		}

	};
}

