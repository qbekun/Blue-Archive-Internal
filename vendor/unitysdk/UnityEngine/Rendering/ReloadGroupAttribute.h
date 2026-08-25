#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_RELOADGROUPATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDDF30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReloadGroupAttribute_TypeDefinitionIndex = 34076;

	class ReloadGroupAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADGROUPATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

