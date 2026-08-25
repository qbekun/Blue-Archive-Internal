#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_MEMORYPACKIGNOREATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9058030)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackIgnoreAttribute_TypeDefinitionIndex = 35405;

	class MemoryPackIgnoreAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKIGNOREATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

