#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_SERVICES_XXHASHSERVICE_CALCULATEHASH_OFFSET UNITYSDK_OFFSET(0x1017700)
#define MX_CORE_SERVICES_XXHASHSERVICE_CALCULATEHASH64_OFFSET UNITYSDK_OFFSET(0x1017860)
#define MX_CORE_SERVICES_XXHASHSERVICE_CALCULATEHASH_OFFSET UNITYSDK_OFFSET(0x10177D0)
#define MX_CORE_SERVICES_XXHASHSERVICE_CALCULATEHASH64_OFFSET UNITYSDK_OFFSET(0x1017930)

namespace MX::Core::Services
{
	inline static constexpr unsigned int XXHashService_TypeDefinitionIndex = 12794;

	class XXHashService : public Il2CppObject
	{
	public:
		::System::UInt32 CalculateHash(::System::String* str)
		{
			return ((::System::UInt32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_XXHASHSERVICE_CALCULATEHASH_OFFSET))(str, nullptr);
		}

		::System::UInt64 CalculateHash64(::System::String* str)
		{
			return ((::System::UInt64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_XXHASHSERVICE_CALCULATEHASH64_OFFSET))(str, nullptr);
		}

		::System::UInt32 CalculateHash(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_XXHASHSERVICE_CALCULATEHASH_OFFSET))(arg, nullptr);
		}

		::System::UInt64 CalculateHash64(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_XXHASHSERVICE_CALCULATEHASH64_OFFSET))(arg, nullptr);
		}

	};
}

