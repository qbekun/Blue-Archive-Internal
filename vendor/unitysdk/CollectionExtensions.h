#pragma once
#include "unitysdk.h"

#define COLLECTIONEXTENSIONS_TOORDEREDDICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define COLLECTIONEXTENSIONS_TOORDEREDDICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int CollectionExtensions_TypeDefinitionIndex = 3560;

	class CollectionExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* ToOrderedDictionary(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONEXTENSIONS_TOORDEREDDICTIONARY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* ToOrderedDictionary(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONEXTENSIONS_TOORDEREDDICTIONARY_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

