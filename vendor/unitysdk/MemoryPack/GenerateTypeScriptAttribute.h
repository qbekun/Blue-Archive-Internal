#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_GENERATETYPESCRIPTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90580A0)

namespace MemoryPack
{
	inline static constexpr unsigned int GenerateTypeScriptAttribute_TypeDefinitionIndex = 35412;

	class GenerateTypeScriptAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_GENERATETYPESCRIPTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

