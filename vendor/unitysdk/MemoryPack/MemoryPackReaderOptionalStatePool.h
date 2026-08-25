#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackReaderOptionalState; }
namespace MemoryPack { class MemoryPackSerializerOptions; }

#define MEMORYPACK_MEMORYPACKREADEROPTIONALSTATEPOOL_RETURN_OFFSET UNITYSDK_OFFSET(0x9061510)
#define MEMORYPACK_MEMORYPACKREADEROPTIONALSTATEPOOL_RENT_OFFSET UNITYSDK_OFFSET(0x9061640)
#define MEMORYPACK_MEMORYPACKREADEROPTIONALSTATEPOOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90618D0)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackReaderOptionalStatePool_TypeDefinitionIndex = 35425;

	class MemoryPackReaderOptionalStatePool : public Il2CppObject
	{
	public:
		Il2CppObject* queue; // 0x0

		::System::Void Return(::MemoryPack::MemoryPackReaderOptionalState* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReaderOptionalState*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADEROPTIONALSTATEPOOL_RETURN_OFFSET))(arg, nullptr);
		}

		::MemoryPack::MemoryPackReaderOptionalState* Rent(::MemoryPack::MemoryPackSerializerOptions* arg)
		{
			return (return (::MemoryPack::MemoryPackReaderOptionalState*(*)(::MemoryPack::MemoryPackSerializerOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADEROPTIONALSTATEPOOL_RENT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADEROPTIONALSTATEPOOL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

