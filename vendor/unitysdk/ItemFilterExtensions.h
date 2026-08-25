#pragma once
#include "unitysdk.h"

class CraftFilterOption;

#define ITEMFILTEREXTENSIONS_CONTAINSOPTION_OFFSET UNITYSDK_OFFSET(0x1FCE480)

	inline static constexpr unsigned int ItemFilterExtensions_TypeDefinitionIndex = 3008;

	class ItemFilterExtensions : public Il2CppObject
	{
	public:
		::System::Boolean ContainsOption(Il2CppObject* arg, CraftFilterOption* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, CraftFilterOption*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTEREXTENSIONS_CONTAINSOPTION_OFFSET))(arg, arg2, nullptr);
		}

	};

