#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_EXCLUDEFROMPRESETATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22EB10)

namespace UnityEngine
{
	inline static constexpr unsigned int ExcludeFromPresetAttribute_TypeDefinitionIndex = 31143;

	class ExcludeFromPresetAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXCLUDEFROMPRESETATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

