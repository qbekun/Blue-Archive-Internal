#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_IMEMORYPACKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_IMEMORYPACKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack
{
	inline static constexpr unsigned int IMemoryPackFormatter_TypeDefinitionIndex = 35418;

	class IMemoryPackFormatter : public Il2CppObject
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Object&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_IMEMORYPACKFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Object&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_IMEMORYPACKFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

