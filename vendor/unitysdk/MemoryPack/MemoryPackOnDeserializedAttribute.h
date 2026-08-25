#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_MEMORYPACKONDESERIALIZEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9058090)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackOnDeserializedAttribute_TypeDefinitionIndex = 35411;

	class MemoryPackOnDeserializedAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKONDESERIALIZEDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

