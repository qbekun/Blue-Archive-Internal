#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_MEMORYPACKFORMATTER`1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKFORMATTER`1_MEMORYPACK.IMEMORYPACKFORMATTER.SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKFORMATTER`1_MEMORYPACK.IMEMORYPACKFORMATTER.DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKFORMATTER`1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackFormatter`1_TypeDefinitionIndex = 35420;

	class MemoryPackFormatter`1 : public Il2CppObject
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTER`1_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MemoryPack.IMemoryPackFormatter.Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Object&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTER`1_MEMORYPACK.IMEMORYPACKFORMATTER.SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MemoryPack.IMemoryPackFormatter.Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Object&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTER`1_MEMORYPACK.IMEMORYPACKFORMATTER.DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTER`1_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

