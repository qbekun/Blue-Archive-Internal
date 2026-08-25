#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace UnityEngine { class RectOffset&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_RECTOFFSETFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x906DBC0)
#define MEMORYPACK_RECTOFFSETFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9058850)
#define MEMORYPACK_RECTOFFSETFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x906DE20)

namespace MemoryPack
{
	inline static constexpr unsigned int RectOffsetFormatter_TypeDefinitionIndex = 35443;

	class RectOffsetFormatter : public ::System::IO::MatchType
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::UnityEngine::RectOffset&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::UnityEngine::RectOffset&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_RECTOFFSETFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_RECTOFFSETFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::UnityEngine::RectOffset&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::UnityEngine::RectOffset&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_RECTOFFSETFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

