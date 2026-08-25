#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_DYNAMICUNIONFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_DYNAMICUNIONFORMATTER`1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_DYNAMICUNIONFORMATTER`1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int DynamicUnionFormatter`1_TypeDefinitionIndex = 35494;

	class DynamicUnionFormatter`1 : public ::System::Reflection::AssemblyDescriptionAttribute
	{
	public:
		Il2CppObject* typeToTag; // 0x0
		Il2CppObject* tagToType; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_DYNAMICUNIONFORMATTER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_DYNAMICUNIONFORMATTER`1_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_DYNAMICUNIONFORMATTER`1_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

