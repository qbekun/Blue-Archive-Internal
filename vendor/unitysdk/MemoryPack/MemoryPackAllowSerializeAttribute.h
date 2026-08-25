#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_MEMORYPACKALLOWSERIALIZEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9057FF0)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackAllowSerializeAttribute_TypeDefinitionIndex = 35403;

	class MemoryPackAllowSerializeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKALLOWSERIALIZEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

