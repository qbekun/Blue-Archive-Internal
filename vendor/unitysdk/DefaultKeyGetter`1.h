#pragma once
#include "unitysdk.h"

#define DEFAULTKEYGETTER`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int DefaultKeyGetter`1_TypeDefinitionIndex = 33896;

	class DefaultKeyGetter`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Get(Il2CppObject&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTKEYGETTER`1_GET_OFFSET))(arg, nullptr);
		}

	};

