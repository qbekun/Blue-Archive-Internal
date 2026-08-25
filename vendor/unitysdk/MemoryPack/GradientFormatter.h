#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace UnityEngine { class Gradient&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_GRADIENTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x906D690)
#define MEMORYPACK_GRADIENTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x906D900)
#define MEMORYPACK_GRADIENTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9058810)

namespace MemoryPack
{
	inline static constexpr unsigned int GradientFormatter_TypeDefinitionIndex = 35442;

	class GradientFormatter : public SortedListEnumerator
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::UnityEngine::Gradient&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::UnityEngine::Gradient&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_GRADIENTFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::UnityEngine::Gradient&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::UnityEngine::Gradient&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_GRADIENTFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_GRADIENTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

