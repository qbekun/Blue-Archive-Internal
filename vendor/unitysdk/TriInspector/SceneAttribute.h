#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_SCENEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF3C0)

namespace TriInspector
{
	inline static constexpr unsigned int SceneAttribute_TypeDefinitionIndex = 37850;

	class SceneAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_SCENEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

