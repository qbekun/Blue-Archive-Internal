#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_MEMORYPACKINCLUDEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9058040)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackIncludeAttribute_TypeDefinitionIndex = 35406;

	class MemoryPackIncludeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKINCLUDEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

