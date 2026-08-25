#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_SERVICES_MEMORYPACKEXTENSIONS_SERIALIZEASMEMORYPACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_MEMORYPACKEXTENSIONS_DESERIALIZEASMEMORYPACK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Core::Services
{
	inline static constexpr unsigned int MemoryPackExtensions_TypeDefinitionIndex = 12783;

	class MemoryPackExtensions : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SerializeAsMemoryPack(Il2CppObject* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_MEMORYPACKEXTENSIONS_SERIALIZEASMEMORYPACK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DeserializeAsMemoryPack(::Il2CppArray<::System::Object*>* arg)
		{
			return ((Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_MEMORYPACKEXTENSIONS_DESERIALIZEASMEMORYPACK_OFFSET))(arg, nullptr);
		}

	};
}

