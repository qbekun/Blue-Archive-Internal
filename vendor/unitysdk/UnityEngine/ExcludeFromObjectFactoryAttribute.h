#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_EXCLUDEFROMOBJECTFACTORYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22F9A0)

namespace UnityEngine
{
	inline static constexpr unsigned int ExcludeFromObjectFactoryAttribute_TypeDefinitionIndex = 31151;

	class ExcludeFromObjectFactoryAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXCLUDEFROMOBJECTFACTORYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

