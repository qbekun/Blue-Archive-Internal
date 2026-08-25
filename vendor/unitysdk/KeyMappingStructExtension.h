#pragma once
#include "unitysdk.h"

class KeyMappingStruct;

#define KEYMAPPINGSTRUCTEXTENSION_VALUEEQUALS_OFFSET UNITYSDK_OFFSET(0x2198690)

	inline static constexpr unsigned int KeyMappingStructExtension_TypeDefinitionIndex = 4124;

	class KeyMappingStructExtension : public Il2CppObject
	{
	public:
		::System::Boolean ValueEquals(KeyMappingStruct* arg, KeyMappingStruct* arg2)
		{
			return ((::System::Boolean(*)(KeyMappingStruct*, KeyMappingStruct*, ::PVOID))((::PBYTE)hIl2Cpp + KEYMAPPINGSTRUCTEXTENSION_VALUEEQUALS_OFFSET))(arg, arg2, nullptr);
		}

	};

