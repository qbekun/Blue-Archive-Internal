#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_COLLECTIONEXTENSIONS_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_COLLECTIONEXTENSIONS_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int CollectionExtensions_TypeDefinitionIndex = 25158;

	class CollectionExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* GetValueOrDefault(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COLLECTIONEXTENSIONS_GETVALUEORDEFAULT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetValueOrDefault(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COLLECTIONEXTENSIONS_GETVALUEORDEFAULT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

