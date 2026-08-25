#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_INTERFACESETFORMATTER`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACESETFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACESETFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACESETFORMATTER`1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACESETFORMATTER`1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int InterfaceSetFormatter`1_TypeDefinitionIndex = 35510;

	class InterfaceSetFormatter`1 : public ::System::Reflection::IntrospectionExtensions
	{
	public:
		Il2CppObject* equalityComparer; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACESETFORMATTER`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACESETFORMATTER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACESETFORMATTER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACESETFORMATTER`1_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACESETFORMATTER`1_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

