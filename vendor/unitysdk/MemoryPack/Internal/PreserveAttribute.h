#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_INTERNAL_PRESERVEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x906E2F0)

namespace MemoryPack::Internal
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 35448;

	class PreserveAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_PRESERVEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

