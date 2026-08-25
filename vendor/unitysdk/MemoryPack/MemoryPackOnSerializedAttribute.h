#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_MEMORYPACKONSERIALIZEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9058070)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackOnSerializedAttribute_TypeDefinitionIndex = 35409;

	class MemoryPackOnSerializedAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKONSERIALIZEDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

