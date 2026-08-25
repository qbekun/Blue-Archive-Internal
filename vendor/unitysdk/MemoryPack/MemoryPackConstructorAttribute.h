#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_MEMORYPACKCONSTRUCTORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9058050)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackConstructorAttribute_TypeDefinitionIndex = 35407;

	class MemoryPackConstructorAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKCONSTRUCTORATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

