#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_IMEMORYPACKFORMATTER`1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_IMEMORYPACKFORMATTER`1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack
{
	inline static constexpr unsigned int IMemoryPackFormatter`1_TypeDefinitionIndex = 35419;

	class IMemoryPackFormatter`1 : public Il2CppObject
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_IMEMORYPACKFORMATTER`1_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_IMEMORYPACKFORMATTER`1_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

