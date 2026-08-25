#pragma once
#include "unitysdk.h"

#define UINTKEYGETTER_GET_OFFSET UNITYSDK_OFFSET(0x9FA8790)

	inline static constexpr unsigned int UintKeyGetter_TypeDefinitionIndex = 33897;

	class UintKeyGetter : public Il2CppObject
	{
	public:
		::System::UInt32 Get(uint32_t&* arg)
		{
			return (return (::System::UInt32(*)(uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UINTKEYGETTER_GET_OFFSET))(arg, nullptr);
		}

	};

