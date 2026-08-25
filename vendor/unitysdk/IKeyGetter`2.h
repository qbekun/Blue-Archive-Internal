#pragma once
#include "unitysdk.h"

#define IKEYGETTER`2_GET_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IKeyGetter`2_TypeDefinitionIndex = 33895;

	class IKeyGetter`2 : public Il2CppObject
	{
	public:
		Il2CppObject* Get(Il2CppObject&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + IKEYGETTER`2_GET_OFFSET))(arg, nullptr);
		}

	};

