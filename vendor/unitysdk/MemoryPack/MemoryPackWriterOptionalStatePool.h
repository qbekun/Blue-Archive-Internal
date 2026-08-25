#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriterOptionalState; }
namespace MemoryPack { class MemoryPackSerializerOptions; }

#define MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATEPOOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x906CBC0)
#define MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATEPOOL_RETURN_OFFSET UNITYSDK_OFFSET(0x906CC50)
#define MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATEPOOL_RENT_OFFSET UNITYSDK_OFFSET(0x906CD20)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackWriterOptionalStatePool_TypeDefinitionIndex = 35438;

	class MemoryPackWriterOptionalStatePool : public Il2CppObject
	{
	public:
		Il2CppObject* queue; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATEPOOL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Return(::MemoryPack::MemoryPackWriterOptionalState* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriterOptionalState*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATEPOOL_RETURN_OFFSET))(arg, nullptr);
		}

		::MemoryPack::MemoryPackWriterOptionalState* Rent(::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::MemoryPack::MemoryPackWriterOptionalState*(*)(::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITEROPTIONALSTATEPOOL_RENT_OFFSET))(arg, nullptr);
		}

	};
}

