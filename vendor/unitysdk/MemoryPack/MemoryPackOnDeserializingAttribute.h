#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_MEMORYPACKONDESERIALIZINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9058080)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackOnDeserializingAttribute_TypeDefinitionIndex = 35410;

	class MemoryPackOnDeserializingAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKONDESERIALIZINGATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

