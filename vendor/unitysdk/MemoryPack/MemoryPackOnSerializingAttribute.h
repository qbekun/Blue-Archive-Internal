#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_MEMORYPACKONSERIALIZINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9058060)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackOnSerializingAttribute_TypeDefinitionIndex = 35408;

	class MemoryPackOnSerializingAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKONSERIALIZINGATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

